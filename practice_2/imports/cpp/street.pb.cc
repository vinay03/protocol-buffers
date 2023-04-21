// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: street.proto

#include "street.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_city_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_city_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_City;
}  // namespace protobuf_city_2eproto
class StreetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Street>
      _instance;
} _Street_default_instance_;
namespace protobuf_street_2eproto {
static void InitDefaultsStreet() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Street_default_instance_;
    new (ptr) ::Street();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Street::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Street =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsStreet}, {
      &protobuf_city_2eproto::scc_info_City.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Street.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Street, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Street, street_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Street, city_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Street)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Street_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "street.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014street.proto\032\ncity.proto\"2\n\006Street\022\023\n\013"
      "street_name\030\001 \001(\t\022\023\n\004city\030\002 \001(\0132\005.Cityb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "street.proto", &protobuf_RegisterTypes);
  ::protobuf_city_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_street_2eproto

// ===================================================================

void Street::InitAsDefaultInstance() {
  ::_Street_default_instance_._instance.get_mutable()->city_ = const_cast< ::City*>(
      ::City::internal_default_instance());
}
void Street::clear_city() {
  if (GetArenaNoVirtual() == NULL && city_ != NULL) {
    delete city_;
  }
  city_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Street::kStreetNameFieldNumber;
const int Street::kCityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Street::Street()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_street_2eproto::scc_info_Street.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Street)
}
Street::Street(const Street& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  street_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.street_name().size() > 0) {
    street_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.street_name_);
  }
  if (from.has_city()) {
    city_ = new ::City(*from.city_);
  } else {
    city_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:Street)
}

void Street::SharedCtor() {
  street_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  city_ = NULL;
}

Street::~Street() {
  // @@protoc_insertion_point(destructor:Street)
  SharedDtor();
}

void Street::SharedDtor() {
  street_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete city_;
}

void Street::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Street::descriptor() {
  ::protobuf_street_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_street_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Street& Street::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_street_2eproto::scc_info_Street.base);
  return *internal_default_instance();
}


void Street::Clear() {
// @@protoc_insertion_point(message_clear_start:Street)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  street_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && city_ != NULL) {
    delete city_;
  }
  city_ = NULL;
  _internal_metadata_.Clear();
}

bool Street::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Street)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string street_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_street_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->street_name().data(), static_cast<int>(this->street_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Street.street_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .City city = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_city()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Street)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Street)
  return false;
#undef DO_
}

void Street::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Street)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string street_name = 1;
  if (this->street_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->street_name().data(), static_cast<int>(this->street_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Street.street_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->street_name(), output);
  }

  // .City city = 2;
  if (this->has_city()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_city(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Street)
}

::google::protobuf::uint8* Street::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Street)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string street_name = 1;
  if (this->street_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->street_name().data(), static_cast<int>(this->street_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Street.street_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->street_name(), target);
  }

  // .City city = 2;
  if (this->has_city()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_city(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Street)
  return target;
}

size_t Street::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Street)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string street_name = 1;
  if (this->street_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->street_name());
  }

  // .City city = 2;
  if (this->has_city()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *city_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Street::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Street)
  GOOGLE_DCHECK_NE(&from, this);
  const Street* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Street>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Street)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Street)
    MergeFrom(*source);
  }
}

void Street::MergeFrom(const Street& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Street)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.street_name().size() > 0) {

    street_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.street_name_);
  }
  if (from.has_city()) {
    mutable_city()->::City::MergeFrom(from.city());
  }
}

void Street::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Street)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Street::CopyFrom(const Street& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Street)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Street::IsInitialized() const {
  return true;
}

void Street::Swap(Street* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Street::InternalSwap(Street* other) {
  using std::swap;
  street_name_.Swap(&other->street_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(city_, other->city_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Street::GetMetadata() const {
  protobuf_street_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_street_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Street* Arena::CreateMaybeMessage< ::Street >(Arena* arena) {
  return Arena::CreateInternal< ::Street >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
