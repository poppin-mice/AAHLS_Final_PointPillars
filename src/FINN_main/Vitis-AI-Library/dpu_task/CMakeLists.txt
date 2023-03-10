#
# Copyright 2019 Xilinx Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
cmake_minimum_required(VERSION 3.5)
get_filename_component(COMPONENT_NAME "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/math/include) # for image_util
set(Other_LIBS "")
if(CMAKE_SYSTEM_NAME STREQUAL "QNX")
  ## TODO: fix hard coded directory
  link_directories(/home/administrator/workspace/qtbase/lib/)
  list(APPEND Other_LIBS Qt5Widgets Qt5Test Qt5Concurrent Qt5Gui Qt5Core)
endif()
include(XilinxCommon)
include(XilinxVersion)
find_package(xir REQUIRED)
add_library(${COMPONENT_NAME} SHARED
  include/vitis/ai/dpu_task.hpp
  include/vitis/ai/configurable_dpu_task.hpp
  src/dpu_task.cpp
  src/dpu_task_imp.hpp
  src/dpu_task_imp.cpp
  src/banner.hpp
  src/banner.cpp
  src/configurable_dpu_task.cpp
  src/configurable_dpu_task_imp.hpp
  src/configurable_dpu_task_imp.cpp
  src/graph_holder.hpp
  src/graph_holder.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/version.c
  )
add_library(${PROJECT_NAME}::${COMPONENT_NAME} ALIAS ${COMPONENT_NAME})

target_include_directories(${COMPONENT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_link_libraries(${COMPONENT_NAME}
  PUBLIC model_config ${OpenCV_LIBS} ${Other_LIBS} vart::util # for Meta definitions
  PRIVATE xir::xir vart::dpu-runner vart::runner-assistant glog::glog math
  )
set_target_properties(${COMPONENT_NAME} PROPERTIES
  VERSION "${PROJECT_VERSION}"
  SOVERSION "${PROJECT_VERSION_MAJOR}"
  LIBRARY_OUTPUT_NAME  ${PROJECT_NAME}-${COMPONENT_NAME}
  )
install(
  TARGETS ${COMPONENT_NAME}
  EXPORT ${COMPONENT_NAME}-targets
  RUNTIME DESTINATION ${INSTALL_BIN_DIR}
  LIBRARY DESTINATION ${INSTALL_LIB_DIR})

install(
  EXPORT ${COMPONENT_NAME}-targets
  NAMESPACE ${PROJECT_NAME}::
  DESTINATION ${INSTALL_CMAKE_DIR})

install(FILES
  include/vitis/ai/configurable_dpu_task.hpp
  include/vitis/ai/dpu_task.hpp
  DESTINATION include/vitis/ai)

install(FILES
  src/banner.hpp
  DESTINATION include/vitis/ai)



add_executable(test_it test/test_it.cpp)
target_link_libraries(test_it ${COMPONENT_NAME} vart::dpu-runner)

add_executable(test_base test/test_base.cpp)
target_link_libraries(test_base ${COMPONENT_NAME})

add_executable(test_dpu_task test/test_dpu_task.cpp)
target_link_libraries(test_dpu_task ${COMPONENT_NAME})


# TODO ADD TESTS
