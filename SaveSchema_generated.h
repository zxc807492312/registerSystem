// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SAVESCHEMA_EXCHANGESERIALIZATION_H_
#define FLATBUFFERS_GENERATED_SAVESCHEMA_EXCHANGESERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

namespace ExchangeSerialization {

struct Vec7;

struct PoseDate;
struct PoseDateBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vec7 FLATBUFFERS_FINAL_CLASS {
 private:
  float TransX_;
  float TransY_;
  float TransZ_;
  float RotX_;
  float RotY_;
  float RotZ_;
  float Type_;

 public:
  Vec7() {
    memset(static_cast<void *>(this), 0, sizeof(Vec7));
  }
  Vec7(float _TransX, float _TransY, float _TransZ, float _RotX, float _RotY, float _RotZ, float _Type)
      : TransX_(flatbuffers::EndianScalar(_TransX)),
        TransY_(flatbuffers::EndianScalar(_TransY)),
        TransZ_(flatbuffers::EndianScalar(_TransZ)),
        RotX_(flatbuffers::EndianScalar(_RotX)),
        RotY_(flatbuffers::EndianScalar(_RotY)),
        RotZ_(flatbuffers::EndianScalar(_RotZ)),
        Type_(flatbuffers::EndianScalar(_Type)) {
  }
  float TransX() const {
    return flatbuffers::EndianScalar(TransX_);
  }
  float TransY() const {
    return flatbuffers::EndianScalar(TransY_);
  }
  float TransZ() const {
    return flatbuffers::EndianScalar(TransZ_);
  }
  float RotX() const {
    return flatbuffers::EndianScalar(RotX_);
  }
  float RotY() const {
    return flatbuffers::EndianScalar(RotY_);
  }
  float RotZ() const {
    return flatbuffers::EndianScalar(RotZ_);
  }
  float Type() const {
    return flatbuffers::EndianScalar(Type_);
  }
};
FLATBUFFERS_STRUCT_END(Vec7, 28);

struct PoseDate FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PoseDateBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POSE = 4,
    VT_TIMESTAMP = 6
  };
  const ExchangeSerialization::Vec7 *Pose() const {
    return GetStruct<const ExchangeSerialization::Vec7 *>(VT_POSE);
  }
  int64_t Timestamp() const {
    return GetField<int64_t>(VT_TIMESTAMP, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<ExchangeSerialization::Vec7>(verifier, VT_POSE) &&
           VerifyField<int64_t>(verifier, VT_TIMESTAMP) &&
           verifier.EndTable();
  }
};

struct PoseDateBuilder {
  typedef PoseDate Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Pose(const ExchangeSerialization::Vec7 *Pose) {
    fbb_.AddStruct(PoseDate::VT_POSE, Pose);
  }
  void add_Timestamp(int64_t Timestamp) {
    fbb_.AddElement<int64_t>(PoseDate::VT_TIMESTAMP, Timestamp, 0);
  }
  explicit PoseDateBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PoseDateBuilder &operator=(const PoseDateBuilder &);
  flatbuffers::Offset<PoseDate> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PoseDate>(end);
    return o;
  }
};

inline flatbuffers::Offset<PoseDate> CreatePoseDate(
    flatbuffers::FlatBufferBuilder &_fbb,
    const ExchangeSerialization::Vec7 *Pose = 0,
    int64_t Timestamp = 0) {
  PoseDateBuilder builder_(_fbb);
  builder_.add_Timestamp(Timestamp);
  builder_.add_Pose(Pose);
  return builder_.Finish();
}

inline const ExchangeSerialization::PoseDate *GetPoseDate(const void *buf) {
  return flatbuffers::GetRoot<ExchangeSerialization::PoseDate>(buf);
}

inline const ExchangeSerialization::PoseDate *GetSizePrefixedPoseDate(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ExchangeSerialization::PoseDate>(buf);
}

inline bool VerifyPoseDateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ExchangeSerialization::PoseDate>(nullptr);
}

inline bool VerifySizePrefixedPoseDateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ExchangeSerialization::PoseDate>(nullptr);
}

inline void FinishPoseDateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ExchangeSerialization::PoseDate> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPoseDateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ExchangeSerialization::PoseDate> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ExchangeSerialization

#endif  // FLATBUFFERS_GENERATED_SAVESCHEMA_EXCHANGESERIALIZATION_H_
