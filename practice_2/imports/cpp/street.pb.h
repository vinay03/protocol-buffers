// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: street.proto

#ifndef PROTOBUF_INCLUDED_street_2eproto
#define PROTOBUF_INCLUDED_street_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "city.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_street_2eproto 

namespace protobuf_street_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_street_2eproto
class Street;
class StreetDefaultTypeInternal;
extern StreetDefaultTypeInternal _Street_default_instance_;
namespace google {
namespace protobuf {
template<> ::Street* Arena::CreateMaybeMessage<::Street>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Street : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Street) */ {
 public:
  Street();
  virtual ~Street();

  Street(const Street& from);

  inline Street& operator=(const Street& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Street(Street&& from) noexcept
    : Street() {
    *this = ::std::move(from);
  }

  inline Street& operator=(Street&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Street& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Street* internal_default_instance() {
    return reinterpret_cast<const Street*>(
               &_Street_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Street* other);
  friend void swap(Street& a, Street& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Street* New() const final {
    return CreateMaybeMessage<Street>(NULL);
  }

  Street* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Street>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Street& from);
  void MergeFrom(const Street& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Street* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string street_name = 1;
  void clear_street_name();
  static const int kStreetNameFieldNumber = 1;
  const ::std::string& street_name() const;
  void set_street_name(const ::std::string& value);
  #if LANG_CXX11
  void set_street_name(::std::string&& value);
  #endif
  void set_street_name(const char* value);
  void set_street_name(const char* value, size_t size);
  ::std::string* mutable_street_name();
  ::std::string* release_street_name();
  void set_allocated_street_name(::std::string* street_name);

  // .City city = 2;
  bool has_city() const;
  void clear_city();
  static const int kCityFieldNumber = 2;
  private:
  const ::City& _internal_city() const;
  public:
  const ::City& city() const;
  ::City* release_city();
  ::City* mutable_city();
  void set_allocated_city(::City* city);

  // @@protoc_insertion_point(class_scope:Street)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr street_name_;
  ::City* city_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_street_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Street

// string street_name = 1;
inline void Street::clear_street_name() {
  street_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Street::street_name() const {
  // @@protoc_insertion_point(field_get:Street.street_name)
  return street_name_.GetNoArena();
}
inline void Street::set_street_name(const ::std::string& value) {
  
  street_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Street.street_name)
}
#if LANG_CXX11
inline void Street::set_street_name(::std::string&& value) {
  
  street_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Street.street_name)
}
#endif
inline void Street::set_street_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  street_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Street.street_name)
}
inline void Street::set_street_name(const char* value, size_t size) {
  
  street_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Street.street_name)
}
inline ::std::string* Street::mutable_street_name() {
  
  // @@protoc_insertion_point(field_mutable:Street.street_name)
  return street_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Street::release_street_name() {
  // @@protoc_insertion_point(field_release:Street.street_name)
  
  return street_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Street::set_allocated_street_name(::std::string* street_name) {
  if (street_name != NULL) {
    
  } else {
    
  }
  street_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), street_name);
  // @@protoc_insertion_point(field_set_allocated:Street.street_name)
}

// .City city = 2;
inline bool Street::has_city() const {
  return this != internal_default_instance() && city_ != NULL;
}
inline const ::City& Street::_internal_city() const {
  return *city_;
}
inline const ::City& Street::city() const {
  const ::City* p = city_;
  // @@protoc_insertion_point(field_get:Street.city)
  return p != NULL ? *p : *reinterpret_cast<const ::City*>(
      &::_City_default_instance_);
}
inline ::City* Street::release_city() {
  // @@protoc_insertion_point(field_release:Street.city)
  
  ::City* temp = city_;
  city_ = NULL;
  return temp;
}
inline ::City* Street::mutable_city() {
  
  if (city_ == NULL) {
    auto* p = CreateMaybeMessage<::City>(GetArenaNoVirtual());
    city_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Street.city)
  return city_;
}
inline void Street::set_allocated_city(::City* city) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(city_);
  }
  if (city) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      city = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, city, submessage_arena);
    }
    
  } else {
    
  }
  city_ = city;
  // @@protoc_insertion_point(field_set_allocated:Street.city)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_street_2eproto