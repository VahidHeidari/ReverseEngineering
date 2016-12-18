#ifndef FROADSEGMENT_H_
#define FROADSEGMENT_H_

class FRoadSegment
{
public: __thiscall FRoadSegment::FRoadSegment(class FRoadSegment const &)
public: __thiscall FRoadSegment::FRoadSegment(unsigned char,class E3::Vector const *,class E3::Vector const *,class E3::Vector const *,float,bool)
public: __thiscall FRoadSegment::FRoadSegment(unsigned char,class E3::Vector const *,class E3::Vector const *,class E3::Vector const *,float,float,float,bool)
public: __thiscall FRoadSegment::FRoadSegment(void)
public: class FRoadSegment & __thiscall FRoadSegment::operator=(class FRoadSegment const &)
public: bool __thiscall FRoadSegment::GetSide(class E3::Vector const &,class E3::Vector const &)const 
public: bool __thiscall FRoadSegment::OffsetSegment(float)
public: class E3::Vector __thiscall FRoadSegment::GetArcPointByAngle(float)
public: class E3::Vector const * __thiscall FRoadSegment::GetArcCenter(void)const 
public: class E3::Vector const * __thiscall FRoadSegment::GetEndPoint(void)const 
public: class E3::Vector const * __thiscall FRoadSegment::GetStartPoint(void)const 
public: float __thiscall FRoadSegment::ArcAngle(void)const 
public: float __thiscall FRoadSegment::DistanceFromPoint(class E3::Vector *)
public: float __thiscall FRoadSegment::GetArcEndAngle(void)const 
public: float __thiscall FRoadSegment::GetArcRadius(void)const 
public: float __thiscall FRoadSegment::GetArcStartAngle(void)const 
public: float __thiscall FRoadSegment::GetLength(void)
public: float __thiscall FRoadSegment::GetSegmentLinearLength(void)
public: float __thiscall FRoadSegment::GetSelfLength(void)
public: float __thiscall FRoadSegment::SegmentParam(void)const 
public: int __thiscall FRoadSegment::BoxIntersection(class E3::Vector *,float *,float *)
public: int __thiscall FRoadSegment::CheckFlag(unsigned int)
public: int __thiscall FRoadSegment::CircleIntersection(class E3::Vector &,float,float *,float *,bool *)
public: int __thiscall FRoadSegment::GetArcIndex(void)
public: int __thiscall FRoadSegment::GetNumberOfApproxSegments(void)
public: int __thiscall FRoadSegment::GetRefRoadIndex(void)
public: int __thiscall FRoadSegment::GetRefSegmentIndex(void)
public: int __thiscall FRoadSegment::IsArcInverted(void)const 
public: int __thiscall FRoadSegment::IsBridge(void)
public: int __thiscall FRoadSegment::IsInTown(void)
public: int __thiscall FRoadSegment::IsVisible(void)
public: int __thiscall FRoadSegment::SegmentIntersection(class E3::Vector const &,class E3::Vector const &,float *,float *)const 
public: static void __cdecl FRoadSegment::InvertSegmentArray(class FRoadSegment *,int)
public: unsigned char __thiscall FRoadSegment::GetType(void)const 
public: unsigned int __thiscall FRoadSegment::GetFlags(void)
public: virtual void __thiscall FRoadSegment::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall FRoadSegment::GetArcCenter(class E3::Vector &)const 
public: void __thiscall FRoadSegment::GetEndPoint(class E3::Vector &)const 
public: void __thiscall FRoadSegment::GetEndTangent(class E3::Vector &)
public: void __thiscall FRoadSegment::GetEndTangentForApprox(class E3::Vector &)
public: void __thiscall FRoadSegment::GetPointByParam(float,class E3::Vector *,class E3::Vector *)const 
public: void __thiscall FRoadSegment::GetStartPoint(class E3::Vector &)const 
public: void __thiscall FRoadSegment::GetStartTangent(class E3::Vector &)
public: void __thiscall FRoadSegment::GetStartTangentForApprox(class E3::Vector &)
public: void __thiscall FRoadSegment::InvertArc(void)
public: void __thiscall FRoadSegment::Load(struct RoadsSection::Road::RoadSegment *,int,int)
public: void __thiscall FRoadSegment::ProjectPoint(class E3::Vector *,class E3::Vector &,float &)const 
public: void __thiscall FRoadSegment::ResetFlag(unsigned int)
public: void __thiscall FRoadSegment::SegmentParam(float)
public: void __thiscall FRoadSegment::SetEndHeight(float)
public: void __thiscall FRoadSegment::SetFlag(unsigned int)
public: void __thiscall FRoadSegment::SetLength(float)
public: void __thiscall FRoadSegment::SetRefRoadIndex(int)
public: void __thiscall FRoadSegment::SetRefSegmentIndex(int)
public: void __thiscall FRoadSegment::SetStartHeight(float)
const FRoadSegment::`vftable'
};

#endif

