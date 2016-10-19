// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.BaseDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IM.BaseDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace BaseDefine {

namespace {

const ::google::protobuf::Descriptor* PBHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBHeader_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ServiceID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageCmdID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* OtherCmdID_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ResultType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* UserStatType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_IM_2eBaseDefine_2eproto() {
  protobuf_AddDesc_IM_2eBaseDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "IM.BaseDefine.proto");
  GOOGLE_CHECK(file != NULL);
  PBHeader_descriptor_ = file->message_type(0);
  static const int PBHeader_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, length_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, flag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, moduleid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, commandid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, seqnumber_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, reserved_),
  };
  PBHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PBHeader_descriptor_,
      PBHeader::default_instance_,
      PBHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PBHeader));
  ServiceID_descriptor_ = file->enum_type(0);
  MessageCmdID_descriptor_ = file->enum_type(1);
  OtherCmdID_descriptor_ = file->enum_type(2);
  ResultType_descriptor_ = file->enum_type(3);
  UserStatType_descriptor_ = file->enum_type(4);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_IM_2eBaseDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PBHeader_descriptor_, &PBHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_IM_2eBaseDefine_2eproto() {
  delete PBHeader::default_instance_;
  delete PBHeader_reflection_;
}

void protobuf_AddDesc_IM_2eBaseDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023IM.BaseDefine.proto\022\rIM.BaseDefine\"\203\001\n"
    "\010PBHeader\022\016\n\006length\030\001 \002(\r\022\017\n\007version\030\002 \002"
    "(\r\022\014\n\004flag\030\003 \002(\r\022\020\n\010moduleId\030\004 \002(\r\022\021\n\tco"
    "mmandId\030\005 \002(\r\022\021\n\tseqNumber\030\006 \002(\r\022\020\n\010rese"
    "rved\030\007 \002(\r*\'\n\tServiceID\022\013\n\007SID_MSG\020\001\022\r\n\t"
    "SID_OTHER\020\007*8\n\014MessageCmdID\022\021\n\014CID_MSG_D"
    "ATA\020\201\002\022\025\n\020CID_MSG_DATA_ACK\020\202\002*&\n\nOtherCm"
    "dID\022\030\n\023CID_OTHER_HEARTBEAT\020\201\016*E\n\nResultT"
    "ype\022\026\n\022REFUSE_REASON_NONE\020\000\022\037\n\033REFUSE_RE"
    "ASON_NO_MSG_SERVER\020\001*V\n\014UserStatType\022\026\n\022"
    "USER_STATUS_ONLINE\020\001\022\027\n\023USER_STATUS_OFFL"
    "INE\020\002\022\025\n\021USER_STATUS_LEAVE\020\003", 468);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "IM.BaseDefine.proto", &protobuf_RegisterTypes);
  PBHeader::default_instance_ = new PBHeader();
  PBHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IM_2eBaseDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IM_2eBaseDefine_2eproto {
  StaticDescriptorInitializer_IM_2eBaseDefine_2eproto() {
    protobuf_AddDesc_IM_2eBaseDefine_2eproto();
  }
} static_descriptor_initializer_IM_2eBaseDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* ServiceID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServiceID_descriptor_;
}
bool ServiceID_IsValid(int value) {
  switch(value) {
    case 1:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MessageCmdID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageCmdID_descriptor_;
}
bool MessageCmdID_IsValid(int value) {
  switch(value) {
    case 257:
    case 258:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OtherCmdID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OtherCmdID_descriptor_;
}
bool OtherCmdID_IsValid(int value) {
  switch(value) {
    case 1793:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ResultType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResultType_descriptor_;
}
bool ResultType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* UserStatType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserStatType_descriptor_;
}
bool UserStatType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int PBHeader::kLengthFieldNumber;
const int PBHeader::kVersionFieldNumber;
const int PBHeader::kFlagFieldNumber;
const int PBHeader::kModuleIdFieldNumber;
const int PBHeader::kCommandIdFieldNumber;
const int PBHeader::kSeqNumberFieldNumber;
const int PBHeader::kReservedFieldNumber;
#endif  // !_MSC_VER

PBHeader::PBHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PBHeader::InitAsDefaultInstance() {
}

PBHeader::PBHeader(const PBHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PBHeader::SharedCtor() {
  _cached_size_ = 0;
  length_ = 0u;
  version_ = 0u;
  flag_ = 0u;
  moduleid_ = 0u;
  commandid_ = 0u;
  seqnumber_ = 0u;
  reserved_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PBHeader::~PBHeader() {
  SharedDtor();
}

void PBHeader::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PBHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBHeader_descriptor_;
}

const PBHeader& PBHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eBaseDefine_2eproto();
  return *default_instance_;
}

PBHeader* PBHeader::default_instance_ = NULL;

PBHeader* PBHeader::New() const {
  return new PBHeader;
}

void PBHeader::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    length_ = 0u;
    version_ = 0u;
    flag_ = 0u;
    moduleid_ = 0u;
    commandid_ = 0u;
    seqnumber_ = 0u;
    reserved_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PBHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 length = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &length_)));
          set_has_length();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_version;
        break;
      }

      // required uint32 version = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_flag;
        break;
      }

      // required uint32 flag = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flag_)));
          set_has_flag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_moduleId;
        break;
      }

      // required uint32 moduleId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_moduleId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &moduleid_)));
          set_has_moduleid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_commandId;
        break;
      }

      // required uint32 commandId = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_commandId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &commandid_)));
          set_has_commandid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_seqNumber;
        break;
      }

      // required uint32 seqNumber = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seqNumber:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seqnumber_)));
          set_has_seqnumber();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_reserved;
        break;
      }

      // required uint32 reserved = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_reserved:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reserved_)));
          set_has_reserved();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PBHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 length = 1;
  if (has_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->length(), output);
  }

  // required uint32 version = 2;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->version(), output);
  }

  // required uint32 flag = 3;
  if (has_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->flag(), output);
  }

  // required uint32 moduleId = 4;
  if (has_moduleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->moduleid(), output);
  }

  // required uint32 commandId = 5;
  if (has_commandid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->commandid(), output);
  }

  // required uint32 seqNumber = 6;
  if (has_seqnumber()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->seqnumber(), output);
  }

  // required uint32 reserved = 7;
  if (has_reserved()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->reserved(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PBHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 length = 1;
  if (has_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->length(), target);
  }

  // required uint32 version = 2;
  if (has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->version(), target);
  }

  // required uint32 flag = 3;
  if (has_flag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->flag(), target);
  }

  // required uint32 moduleId = 4;
  if (has_moduleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->moduleid(), target);
  }

  // required uint32 commandId = 5;
  if (has_commandid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->commandid(), target);
  }

  // required uint32 seqNumber = 6;
  if (has_seqnumber()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->seqnumber(), target);
  }

  // required uint32 reserved = 7;
  if (has_reserved()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->reserved(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PBHeader::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 length = 1;
    if (has_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->length());
    }

    // required uint32 version = 2;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // required uint32 flag = 3;
    if (has_flag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->flag());
    }

    // required uint32 moduleId = 4;
    if (has_moduleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->moduleid());
    }

    // required uint32 commandId = 5;
    if (has_commandid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->commandid());
    }

    // required uint32 seqNumber = 6;
    if (has_seqnumber()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seqnumber());
    }

    // required uint32 reserved = 7;
    if (has_reserved()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->reserved());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PBHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PBHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PBHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBHeader::MergeFrom(const PBHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_length()) {
      set_length(from.length());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_flag()) {
      set_flag(from.flag());
    }
    if (from.has_moduleid()) {
      set_moduleid(from.moduleid());
    }
    if (from.has_commandid()) {
      set_commandid(from.commandid());
    }
    if (from.has_seqnumber()) {
      set_seqnumber(from.seqnumber());
    }
    if (from.has_reserved()) {
      set_reserved(from.reserved());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PBHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBHeader::CopyFrom(const PBHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void PBHeader::Swap(PBHeader* other) {
  if (other != this) {
    std::swap(length_, other->length_);
    std::swap(version_, other->version_);
    std::swap(flag_, other->flag_);
    std::swap(moduleid_, other->moduleid_);
    std::swap(commandid_, other->commandid_);
    std::swap(seqnumber_, other->seqnumber_);
    std::swap(reserved_, other->reserved_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PBHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBHeader_descriptor_;
  metadata.reflection = PBHeader_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace BaseDefine
}  // namespace IM

// @@protoc_insertion_point(global_scope)
