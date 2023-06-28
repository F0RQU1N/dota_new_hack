// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: networksystem_protomessages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_networksystem_5fprotomessages_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_networksystem_5fprotomessages_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_networksystem_5fprotomessages_2eproto;
class NetMessageConnectionClosed;
struct NetMessageConnectionClosedDefaultTypeInternal;
extern NetMessageConnectionClosedDefaultTypeInternal _NetMessageConnectionClosed_default_instance_;
class NetMessageConnectionCrashed;
struct NetMessageConnectionCrashedDefaultTypeInternal;
extern NetMessageConnectionCrashedDefaultTypeInternal _NetMessageConnectionCrashed_default_instance_;
class NetMessagePacketEnd;
struct NetMessagePacketEndDefaultTypeInternal;
extern NetMessagePacketEndDefaultTypeInternal _NetMessagePacketEnd_default_instance_;
class NetMessagePacketStart;
struct NetMessagePacketStartDefaultTypeInternal;
extern NetMessagePacketStartDefaultTypeInternal _NetMessagePacketStart_default_instance_;
class NetMessageSplitscreenUserChanged;
struct NetMessageSplitscreenUserChangedDefaultTypeInternal;
extern NetMessageSplitscreenUserChangedDefaultTypeInternal _NetMessageSplitscreenUserChanged_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::NetMessageConnectionClosed* Arena::CreateMaybeMessage<::NetMessageConnectionClosed>(Arena*);
template<> ::NetMessageConnectionCrashed* Arena::CreateMaybeMessage<::NetMessageConnectionCrashed>(Arena*);
template<> ::NetMessagePacketEnd* Arena::CreateMaybeMessage<::NetMessagePacketEnd>(Arena*);
template<> ::NetMessagePacketStart* Arena::CreateMaybeMessage<::NetMessagePacketStart>(Arena*);
template<> ::NetMessageSplitscreenUserChanged* Arena::CreateMaybeMessage<::NetMessageSplitscreenUserChanged>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class NetMessageSplitscreenUserChanged final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageSplitscreenUserChanged) */ {
 public:
  inline NetMessageSplitscreenUserChanged() : NetMessageSplitscreenUserChanged(nullptr) {}
  ~NetMessageSplitscreenUserChanged() override;
  explicit PROTOBUF_CONSTEXPR NetMessageSplitscreenUserChanged(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageSplitscreenUserChanged(const NetMessageSplitscreenUserChanged& from);
  NetMessageSplitscreenUserChanged(NetMessageSplitscreenUserChanged&& from) noexcept
    : NetMessageSplitscreenUserChanged() {
    *this = ::std::move(from);
  }

  inline NetMessageSplitscreenUserChanged& operator=(const NetMessageSplitscreenUserChanged& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageSplitscreenUserChanged& operator=(NetMessageSplitscreenUserChanged&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetMessageSplitscreenUserChanged& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageSplitscreenUserChanged* internal_default_instance() {
    return reinterpret_cast<const NetMessageSplitscreenUserChanged*>(
               &_NetMessageSplitscreenUserChanged_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetMessageSplitscreenUserChanged& a, NetMessageSplitscreenUserChanged& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageSplitscreenUserChanged* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageSplitscreenUserChanged* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetMessageSplitscreenUserChanged* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetMessageSplitscreenUserChanged>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NetMessageSplitscreenUserChanged& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NetMessageSplitscreenUserChanged& from) {
    NetMessageSplitscreenUserChanged::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageSplitscreenUserChanged* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageSplitscreenUserChanged";
  }
  protected:
  explicit NetMessageSplitscreenUserChanged(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSlotFieldNumber = 1,
  };
  // optional uint32 slot = 1;
  bool has_slot() const;
  private:
  bool _internal_has_slot() const;
  public:
  void clear_slot();
  uint32_t slot() const;
  void set_slot(uint32_t value);
  private:
  uint32_t _internal_slot() const;
  void _internal_set_slot(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageSplitscreenUserChanged)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t slot_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessageConnectionClosed final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageConnectionClosed) */ {
 public:
  inline NetMessageConnectionClosed() : NetMessageConnectionClosed(nullptr) {}
  ~NetMessageConnectionClosed() override;
  explicit PROTOBUF_CONSTEXPR NetMessageConnectionClosed(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageConnectionClosed(const NetMessageConnectionClosed& from);
  NetMessageConnectionClosed(NetMessageConnectionClosed&& from) noexcept
    : NetMessageConnectionClosed() {
    *this = ::std::move(from);
  }

  inline NetMessageConnectionClosed& operator=(const NetMessageConnectionClosed& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageConnectionClosed& operator=(NetMessageConnectionClosed&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetMessageConnectionClosed& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageConnectionClosed* internal_default_instance() {
    return reinterpret_cast<const NetMessageConnectionClosed*>(
               &_NetMessageConnectionClosed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NetMessageConnectionClosed& a, NetMessageConnectionClosed& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageConnectionClosed* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageConnectionClosed* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetMessageConnectionClosed* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetMessageConnectionClosed>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NetMessageConnectionClosed& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NetMessageConnectionClosed& from) {
    NetMessageConnectionClosed::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageConnectionClosed* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageConnectionClosed";
  }
  protected:
  explicit NetMessageConnectionClosed(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional uint32 reason = 1;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  uint32_t reason() const;
  void set_reason(uint32_t value);
  private:
  uint32_t _internal_reason() const;
  void _internal_set_reason(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageConnectionClosed)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t reason_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessageConnectionCrashed final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageConnectionCrashed) */ {
 public:
  inline NetMessageConnectionCrashed() : NetMessageConnectionCrashed(nullptr) {}
  ~NetMessageConnectionCrashed() override;
  explicit PROTOBUF_CONSTEXPR NetMessageConnectionCrashed(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageConnectionCrashed(const NetMessageConnectionCrashed& from);
  NetMessageConnectionCrashed(NetMessageConnectionCrashed&& from) noexcept
    : NetMessageConnectionCrashed() {
    *this = ::std::move(from);
  }

  inline NetMessageConnectionCrashed& operator=(const NetMessageConnectionCrashed& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageConnectionCrashed& operator=(NetMessageConnectionCrashed&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetMessageConnectionCrashed& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageConnectionCrashed* internal_default_instance() {
    return reinterpret_cast<const NetMessageConnectionCrashed*>(
               &_NetMessageConnectionCrashed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(NetMessageConnectionCrashed& a, NetMessageConnectionCrashed& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageConnectionCrashed* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageConnectionCrashed* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetMessageConnectionCrashed* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetMessageConnectionCrashed>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NetMessageConnectionCrashed& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NetMessageConnectionCrashed& from) {
    NetMessageConnectionCrashed::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageConnectionCrashed* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageConnectionCrashed";
  }
  protected:
  explicit NetMessageConnectionCrashed(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional uint32 reason = 1;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  uint32_t reason() const;
  void set_reason(uint32_t value);
  private:
  uint32_t _internal_reason() const;
  void _internal_set_reason(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageConnectionCrashed)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t reason_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessagePacketStart final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:NetMessagePacketStart) */ {
 public:
  inline NetMessagePacketStart() : NetMessagePacketStart(nullptr) {}
  explicit PROTOBUF_CONSTEXPR NetMessagePacketStart(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessagePacketStart(const NetMessagePacketStart& from);
  NetMessagePacketStart(NetMessagePacketStart&& from) noexcept
    : NetMessagePacketStart() {
    *this = ::std::move(from);
  }

  inline NetMessagePacketStart& operator=(const NetMessagePacketStart& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessagePacketStart& operator=(NetMessagePacketStart&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetMessagePacketStart& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessagePacketStart* internal_default_instance() {
    return reinterpret_cast<const NetMessagePacketStart*>(
               &_NetMessagePacketStart_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(NetMessagePacketStart& a, NetMessagePacketStart& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessagePacketStart* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessagePacketStart* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetMessagePacketStart* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetMessagePacketStart>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const NetMessagePacketStart& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const NetMessagePacketStart& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessagePacketStart";
  }
  protected:
  explicit NetMessagePacketStart(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:NetMessagePacketStart)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessagePacketEnd final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:NetMessagePacketEnd) */ {
 public:
  inline NetMessagePacketEnd() : NetMessagePacketEnd(nullptr) {}
  explicit PROTOBUF_CONSTEXPR NetMessagePacketEnd(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessagePacketEnd(const NetMessagePacketEnd& from);
  NetMessagePacketEnd(NetMessagePacketEnd&& from) noexcept
    : NetMessagePacketEnd() {
    *this = ::std::move(from);
  }

  inline NetMessagePacketEnd& operator=(const NetMessagePacketEnd& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessagePacketEnd& operator=(NetMessagePacketEnd&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetMessagePacketEnd& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessagePacketEnd* internal_default_instance() {
    return reinterpret_cast<const NetMessagePacketEnd*>(
               &_NetMessagePacketEnd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(NetMessagePacketEnd& a, NetMessagePacketEnd& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessagePacketEnd* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessagePacketEnd* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetMessagePacketEnd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetMessagePacketEnd>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const NetMessagePacketEnd& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const NetMessagePacketEnd& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessagePacketEnd";
  }
  protected:
  explicit NetMessagePacketEnd(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:NetMessagePacketEnd)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetMessageSplitscreenUserChanged

// optional uint32 slot = 1;
inline bool NetMessageSplitscreenUserChanged::_internal_has_slot() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageSplitscreenUserChanged::has_slot() const {
  return _internal_has_slot();
}
inline void NetMessageSplitscreenUserChanged::clear_slot() {
  _impl_.slot_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline uint32_t NetMessageSplitscreenUserChanged::_internal_slot() const {
  return _impl_.slot_;
}
inline uint32_t NetMessageSplitscreenUserChanged::slot() const {
  // @@protoc_insertion_point(field_get:NetMessageSplitscreenUserChanged.slot)
  return _internal_slot();
}
inline void NetMessageSplitscreenUserChanged::_internal_set_slot(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.slot_ = value;
}
inline void NetMessageSplitscreenUserChanged::set_slot(uint32_t value) {
  _internal_set_slot(value);
  // @@protoc_insertion_point(field_set:NetMessageSplitscreenUserChanged.slot)
}

// -------------------------------------------------------------------

// NetMessageConnectionClosed

// optional uint32 reason = 1;
inline bool NetMessageConnectionClosed::_internal_has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageConnectionClosed::has_reason() const {
  return _internal_has_reason();
}
inline void NetMessageConnectionClosed::clear_reason() {
  _impl_.reason_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline uint32_t NetMessageConnectionClosed::_internal_reason() const {
  return _impl_.reason_;
}
inline uint32_t NetMessageConnectionClosed::reason() const {
  // @@protoc_insertion_point(field_get:NetMessageConnectionClosed.reason)
  return _internal_reason();
}
inline void NetMessageConnectionClosed::_internal_set_reason(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_ = value;
}
inline void NetMessageConnectionClosed::set_reason(uint32_t value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:NetMessageConnectionClosed.reason)
}

// -------------------------------------------------------------------

// NetMessageConnectionCrashed

// optional uint32 reason = 1;
inline bool NetMessageConnectionCrashed::_internal_has_reason() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageConnectionCrashed::has_reason() const {
  return _internal_has_reason();
}
inline void NetMessageConnectionCrashed::clear_reason() {
  _impl_.reason_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline uint32_t NetMessageConnectionCrashed::_internal_reason() const {
  return _impl_.reason_;
}
inline uint32_t NetMessageConnectionCrashed::reason() const {
  // @@protoc_insertion_point(field_get:NetMessageConnectionCrashed.reason)
  return _internal_reason();
}
inline void NetMessageConnectionCrashed::_internal_set_reason(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.reason_ = value;
}
inline void NetMessageConnectionCrashed::set_reason(uint32_t value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:NetMessageConnectionCrashed.reason)
}

// -------------------------------------------------------------------

// NetMessagePacketStart

// -------------------------------------------------------------------

// NetMessagePacketEnd

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto