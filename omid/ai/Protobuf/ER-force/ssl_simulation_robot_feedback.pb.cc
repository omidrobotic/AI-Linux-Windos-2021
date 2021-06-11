// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_robot_feedback.proto

#include "ssl_simulation_robot_feedback.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr RobotFeedback::RobotFeedback(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : custom_(nullptr)
  , id_(0u)
  , dribbler_ball_contact_(false){}
struct RobotFeedbackDefaultTypeInternal {
  constexpr RobotFeedbackDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RobotFeedbackDefaultTypeInternal() {}
  union {
    RobotFeedback _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RobotFeedbackDefaultTypeInternal _RobotFeedback_default_instance_;
constexpr RobotControlResponse::RobotControlResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : errors_()
  , feedback_(){}
struct RobotControlResponseDefaultTypeInternal {
  constexpr RobotControlResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RobotControlResponseDefaultTypeInternal() {}
  union {
    RobotControlResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RobotControlResponseDefaultTypeInternal _RobotControlResponse_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ssl_5fsimulation_5frobot_5ffeedback_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ssl_5fsimulation_5frobot_5ffeedback_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ssl_5fsimulation_5frobot_5ffeedback_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ssl_5fsimulation_5frobot_5ffeedback_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::RobotFeedback, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RobotFeedback, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RobotFeedback, id_),
  PROTOBUF_FIELD_OFFSET(::RobotFeedback, dribbler_ball_contact_),
  PROTOBUF_FIELD_OFFSET(::RobotFeedback, custom_),
  1,
  2,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RobotControlResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::RobotControlResponse, errors_),
  PROTOBUF_FIELD_OFFSET(::RobotControlResponse, feedback_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::RobotFeedback)},
  { 11, -1, sizeof(::RobotControlResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RobotFeedback_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RobotControlResponse_default_instance_),
};

const char descriptor_table_protodef_ssl_5fsimulation_5frobot_5ffeedback_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#ssl_simulation_robot_feedback.proto\032\032s"
  "sl_simulation_error.proto\032\031google/protob"
  "uf/any.proto\"`\n\rRobotFeedback\022\n\n\002id\030\001 \002("
  "\r\022\035\n\025dribbler_ball_contact\030\002 \001(\010\022$\n\006cust"
  "om\030\003 \001(\0132\024.google.protobuf.Any\"Y\n\024RobotC"
  "ontrolResponse\022\037\n\006errors\030\001 \003(\0132\017.Simulat"
  "orError\022 \n\010feedback\030\002 \003(\0132\016.RobotFeedbac"
  "kB8Z6github.com/RoboCup-SSL/ssl-simulati"
  "on-protocol/pkg/sim"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
  &::descriptor_table_ssl_5fsimulation_5ferror_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto = {
  false, false, 339, descriptor_table_protodef_ssl_5fsimulation_5frobot_5ffeedback_2eproto, "ssl_simulation_robot_feedback.proto", 
  &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_once, descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_ssl_5fsimulation_5frobot_5ffeedback_2eproto::offsets,
  file_level_metadata_ssl_5fsimulation_5frobot_5ffeedback_2eproto, file_level_enum_descriptors_ssl_5fsimulation_5frobot_5ffeedback_2eproto, file_level_service_descriptors_ssl_5fsimulation_5frobot_5ffeedback_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_getter() {
  return &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ssl_5fsimulation_5frobot_5ffeedback_2eproto(&descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto);

// ===================================================================

class RobotFeedback::_Internal {
 public:
  using HasBits = decltype(std::declval<RobotFeedback>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dribbler_ball_contact(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const PROTOBUF_NAMESPACE_ID::Any& custom(const RobotFeedback* msg);
  static void set_has_custom(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000002) ^ 0x00000002) != 0;
  }
};

const PROTOBUF_NAMESPACE_ID::Any&
RobotFeedback::_Internal::custom(const RobotFeedback* msg) {
  return *msg->custom_;
}
void RobotFeedback::clear_custom() {
  if (custom_ != nullptr) custom_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
RobotFeedback::RobotFeedback(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:RobotFeedback)
}
RobotFeedback::RobotFeedback(const RobotFeedback& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_custom()) {
    custom_ = new PROTOBUF_NAMESPACE_ID::Any(*from.custom_);
  } else {
    custom_ = nullptr;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&dribbler_ball_contact_) -
    reinterpret_cast<char*>(&id_)) + sizeof(dribbler_ball_contact_));
  // @@protoc_insertion_point(copy_constructor:RobotFeedback)
}

inline void RobotFeedback::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&custom_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&dribbler_ball_contact_) -
    reinterpret_cast<char*>(&custom_)) + sizeof(dribbler_ball_contact_));
}

RobotFeedback::~RobotFeedback() {
  // @@protoc_insertion_point(destructor:RobotFeedback)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RobotFeedback::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete custom_;
}

void RobotFeedback::ArenaDtor(void* object) {
  RobotFeedback* _this = reinterpret_cast< RobotFeedback* >(object);
  (void)_this;
}
void RobotFeedback::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RobotFeedback::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RobotFeedback::Clear() {
// @@protoc_insertion_point(message_clear_start:RobotFeedback)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(custom_ != nullptr);
    custom_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&dribbler_ball_contact_) -
        reinterpret_cast<char*>(&id_)) + sizeof(dribbler_ball_contact_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotFeedback::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool dribbler_ball_contact = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_dribbler_ball_contact(&has_bits);
          dribbler_ball_contact_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .google.protobuf.Any custom = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_custom(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RobotFeedback::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RobotFeedback)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // optional bool dribbler_ball_contact = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_dribbler_ball_contact(), target);
  }

  // optional .google.protobuf.Any custom = 3;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::custom(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RobotFeedback)
  return target;
}

size_t RobotFeedback::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RobotFeedback)
  size_t total_size = 0;

  // required uint32 id = 1;
  if (_internal_has_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .google.protobuf.Any custom = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *custom_);
  }

  // optional bool dribbler_ball_contact = 2;
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RobotFeedback::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RobotFeedback::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RobotFeedback::GetClassData() const { return &_class_data_; }

void RobotFeedback::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<RobotFeedback *>(to)->MergeFrom(
      static_cast<const RobotFeedback &>(from));
}


void RobotFeedback::MergeFrom(const RobotFeedback& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RobotFeedback)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_custom()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_custom());
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      dribbler_ball_contact_ = from.dribbler_ball_contact_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RobotFeedback::CopyFrom(const RobotFeedback& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RobotFeedback)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotFeedback::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void RobotFeedback::InternalSwap(RobotFeedback* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RobotFeedback, dribbler_ball_contact_)
      + sizeof(RobotFeedback::dribbler_ball_contact_)
      - PROTOBUF_FIELD_OFFSET(RobotFeedback, custom_)>(
          reinterpret_cast<char*>(&custom_),
          reinterpret_cast<char*>(&other->custom_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotFeedback::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_getter, &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_once,
      file_level_metadata_ssl_5fsimulation_5frobot_5ffeedback_2eproto[0]);
}

// ===================================================================

class RobotControlResponse::_Internal {
 public:
};

void RobotControlResponse::clear_errors() {
  errors_.Clear();
}
RobotControlResponse::RobotControlResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  errors_(arena),
  feedback_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:RobotControlResponse)
}
RobotControlResponse::RobotControlResponse(const RobotControlResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      errors_(from.errors_),
      feedback_(from.feedback_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:RobotControlResponse)
}

inline void RobotControlResponse::SharedCtor() {
}

RobotControlResponse::~RobotControlResponse() {
  // @@protoc_insertion_point(destructor:RobotControlResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RobotControlResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void RobotControlResponse::ArenaDtor(void* object) {
  RobotControlResponse* _this = reinterpret_cast< RobotControlResponse* >(object);
  (void)_this;
}
void RobotControlResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RobotControlResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RobotControlResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:RobotControlResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errors_.Clear();
  feedback_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RobotControlResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .SimulatorError errors = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_errors(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .RobotFeedback feedback = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_feedback(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RobotControlResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RobotControlResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .SimulatorError errors = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_errors_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_errors(i), target, stream);
  }

  // repeated .RobotFeedback feedback = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_feedback_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_feedback(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RobotControlResponse)
  return target;
}

size_t RobotControlResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RobotControlResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .SimulatorError errors = 1;
  total_size += 1UL * this->_internal_errors_size();
  for (const auto& msg : this->errors_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .RobotFeedback feedback = 2;
  total_size += 1UL * this->_internal_feedback_size();
  for (const auto& msg : this->feedback_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RobotControlResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RobotControlResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RobotControlResponse::GetClassData() const { return &_class_data_; }

void RobotControlResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<RobotControlResponse *>(to)->MergeFrom(
      static_cast<const RobotControlResponse &>(from));
}


void RobotControlResponse::MergeFrom(const RobotControlResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RobotControlResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  errors_.MergeFrom(from.errors_);
  feedback_.MergeFrom(from.feedback_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RobotControlResponse::CopyFrom(const RobotControlResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RobotControlResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotControlResponse::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(feedback_)) return false;
  return true;
}

void RobotControlResponse::InternalSwap(RobotControlResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  errors_.InternalSwap(&other->errors_);
  feedback_.InternalSwap(&other->feedback_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RobotControlResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_getter, &descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto_once,
      file_level_metadata_ssl_5fsimulation_5frobot_5ffeedback_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RobotFeedback* Arena::CreateMaybeMessage< ::RobotFeedback >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RobotFeedback >(arena);
}
template<> PROTOBUF_NOINLINE ::RobotControlResponse* Arena::CreateMaybeMessage< ::RobotControlResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RobotControlResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
