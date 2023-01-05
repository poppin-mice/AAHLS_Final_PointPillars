// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fmodel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "second/protos/second.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_second_2fprotos_2fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_second_2fprotos_2fmodel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_second_2fprotos_2fmodel_2eproto;
namespace second {
namespace protos {
class DetectionModel;
class DetectionModelDefaultTypeInternal;
extern DetectionModelDefaultTypeInternal _DetectionModel_default_instance_;
}  // namespace protos
}  // namespace second
PROTOBUF_NAMESPACE_OPEN
template<> ::second::protos::DetectionModel* Arena::CreateMaybeMessage<::second::protos::DetectionModel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace second {
namespace protos {

// ===================================================================

class DetectionModel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:second.protos.DetectionModel) */ {
 public:
  DetectionModel();
  virtual ~DetectionModel();

  DetectionModel(const DetectionModel& from);
  DetectionModel(DetectionModel&& from) noexcept
    : DetectionModel() {
    *this = ::std::move(from);
  }

  inline DetectionModel& operator=(const DetectionModel& from) {
    CopyFrom(from);
    return *this;
  }
  inline DetectionModel& operator=(DetectionModel&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DetectionModel& default_instance();

  enum ModelCase {
    kSecond = 1,
    MODEL_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionModel* internal_default_instance() {
    return reinterpret_cast<const DetectionModel*>(
               &_DetectionModel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DetectionModel& a, DetectionModel& b) {
    a.Swap(&b);
  }
  inline void Swap(DetectionModel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DetectionModel* New() const final {
    return CreateMaybeMessage<DetectionModel>(nullptr);
  }

  DetectionModel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DetectionModel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DetectionModel& from);
  void MergeFrom(const DetectionModel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DetectionModel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "second.protos.DetectionModel";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_second_2fprotos_2fmodel_2eproto);
    return ::descriptor_table_second_2fprotos_2fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecondFieldNumber = 1,
  };
  // .second.protos.VoxelNet second = 1;
  bool has_second() const;
  void clear_second();
  const ::second::protos::VoxelNet& second() const;
  ::second::protos::VoxelNet* release_second();
  ::second::protos::VoxelNet* mutable_second();
  void set_allocated_second(::second::protos::VoxelNet* second);

  void clear_model();
  ModelCase model_case() const;
  // @@protoc_insertion_point(class_scope:second.protos.DetectionModel)
 private:
  class _Internal;
  void set_has_second();

  inline bool has_model() const;
  inline void clear_has_model();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  union ModelUnion {
    ModelUnion() {}
    ::second::protos::VoxelNet* second_;
  } model_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_second_2fprotos_2fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DetectionModel

// .second.protos.VoxelNet second = 1;
inline bool DetectionModel::has_second() const {
  return model_case() == kSecond;
}
inline void DetectionModel::set_has_second() {
  _oneof_case_[0] = kSecond;
}
inline ::second::protos::VoxelNet* DetectionModel::release_second() {
  // @@protoc_insertion_point(field_release:second.protos.DetectionModel.second)
  if (has_second()) {
    clear_has_model();
      ::second::protos::VoxelNet* temp = model_.second_;
    model_.second_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::second::protos::VoxelNet& DetectionModel::second() const {
  // @@protoc_insertion_point(field_get:second.protos.DetectionModel.second)
  return has_second()
      ? *model_.second_
      : *reinterpret_cast< ::second::protos::VoxelNet*>(&::second::protos::_VoxelNet_default_instance_);
}
inline ::second::protos::VoxelNet* DetectionModel::mutable_second() {
  if (!has_second()) {
    clear_model();
    set_has_second();
    model_.second_ = CreateMaybeMessage< ::second::protos::VoxelNet >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:second.protos.DetectionModel.second)
  return model_.second_;
}

inline bool DetectionModel::has_model() const {
  return model_case() != MODEL_NOT_SET;
}
inline void DetectionModel::clear_has_model() {
  _oneof_case_[0] = MODEL_NOT_SET;
}
inline DetectionModel::ModelCase DetectionModel::model_case() const {
  return DetectionModel::ModelCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_second_2fprotos_2fmodel_2eproto