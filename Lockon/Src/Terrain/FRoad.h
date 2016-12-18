#ifndef FROAD_H_
#define FROAD_H_

class FRoad
{
public: __thiscall FRoad::FRoad(class FRoad const &)
public: __thiscall FRoad::FRoad(class FRoadSegment *,int)
public: __thiscall FRoad::FRoad(void)
public: bool __thiscall FRoad::AddObjectOnRoad(int)
public: bool __thiscall FRoad::ComputeStayPointsForRailwayOffset(float)
public: bool __thiscall FRoad::FindFilletCenter(class E3::Vector &,class E3::Vector &,float,float,bool,class E3::Vector &,float &,float &,bool &)
public: bool __thiscall FRoad::GetEndPoint(class E3::Vector &)
public: bool __thiscall FRoad::GetPointByIndex(int,class E3::Vector *)
public: bool __thiscall FRoad::GetStartPoint(class E3::Vector &)
public: bool __thiscall FRoad::GetStayPointParam(int,float *)
public: bool __thiscall FRoad::Offset(float)
public: bool __thiscall FRoad::isBigRoad(void)
public: bool __thiscall FRoad::isValid(void)
public: char * __thiscall FRoad::GetRoadName(void)
public: class FRoad & __thiscall FRoad::operator=(class FRoad const &)
public: class FRoad * __thiscall FRoad::Copy(float,float)
public: class FRoad * __thiscall FRoad::Copy(void)
public: class FRoadSegment * __thiscall FRoad::GetSegment(float)
public: class FRoadSegment * __thiscall FRoad::GetSegment(int)
public: class FRoadSegment __thiscall FRoad::CreateFinish(int,float)const 
public: class FRoadSegment __thiscall FRoad::CreateStart(int,float)const 
public: float __thiscall FRoad::FindFilletCenter(class E3::Vector &,float,float,float,bool,bool,class E3::Vector &)
public: float __thiscall FRoad::GetPathParam(float)const 
public: float __thiscall FRoad::GetProjection(class E3::Vector &,float,float,class E3::Vector *)
public: float __thiscall FRoad::GetRoadLength(void)const 
public: float __thiscall FRoad::GetRoadOffset(void)
public: float __thiscall FRoad::GetRoadSegmentLength(void)const 
public: float __thiscall FRoad::GetRoadWidth(float)
public: float __thiscall FRoad::GetRoadWidth(void)
public: float __thiscall FRoad::GetSegmentParam(float)const 
public: int __thiscall FRoad::BoxIntersection(class E3::Vector &,class E3::Vector &,class cPosition &,float,float,float *,float *)
public: int __thiscall FRoad::CheckFlag(unsigned int)
public: int __thiscall FRoad::CircleIntersection(class E3::Vector &,float,float,float,float *,float *,bool *)
public: int __thiscall FRoad::GetEndCross(void)
public: int __thiscall FRoad::GetNumPoints(void)
public: int __thiscall FRoad::GetNumSegments(void)
public: int __thiscall FRoad::GetNumStayPoints(void)
public: int __thiscall FRoad::GetPoint(float,class E3::Vector *,class E3::Vector *)
public: int __thiscall FRoad::GetSegmentIndex(float)const 
public: int __thiscall FRoad::GetSegmentIndexBySegmentParam(float)const 
public: int __thiscall FRoad::GetStartCross(void)
public: int __thiscall FRoad::HaveGirders(void)
public: int __thiscall FRoad::IsDead(void)
public: int __thiscall FRoad::IsForBigAircraft(void)
public: int __thiscall FRoad::Restore(struct _iobuf *)
public: int __thiscall FRoad::Save(struct _iobuf *)
public: static class FRoad * __cdecl FRoad::CreatePathConnection(class E3::Vector const &,class E3::Vector const &,class E3::Vector const &,class E3::Vector const &,float,float)
public: static class FRoad * __cdecl FRoad::GetPathOnAirfiled(int,int,int,bool)
public: static class FRoad * __cdecl FRoad::GetRailByIndex(int)
public: static class FRoad * __cdecl FRoad::GetRoadByIndex(int)
public: static class FRoad * __cdecl FRoad::GetRoadOnAirfield(int,int)
public: static class FRoad * __cdecl FRoad::StraightPath(class E3::Vector const &,class E3::Vector const &)
public: static int __cdecl FRoad::GetClosestRail(class E3::Vector *,unsigned short &,float &,float *,class E3::Vector *)
public: static int __cdecl FRoad::GetClosestRoad(class E3::Vector *,unsigned short &,float &,float *,class E3::Vector *,bool)
public: static int __cdecl FRoad::GetNumRails(void)
public: static int __cdecl FRoad::GetNumRoads(void)
public: static int __cdecl FRoad::GetNumRoadsOnAirfield(int)
public: static void __cdecl FRoad::ClearRoadDestruction(void)
public: virtual __thiscall FRoad::~FRoad(void)
public: virtual void __thiscall FRoad::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall FRoad::AttachLineSegment(float)
public: void __thiscall FRoad::AttachRoad(class FRoad *,float)
public: void __thiscall FRoad::CutLeading(float)
public: void __thiscall FRoad::CutRoad(float,float)
public: void __thiscall FRoad::CutTrailing(float)
public: void __thiscall FRoad::InsertRoad(class FRoad *,float,float)
public: void __thiscall FRoad::Invert(void)
public: void __thiscall FRoad::ResetFlag(unsigned int)
public: void __thiscall FRoad::ResetSegmentsFlag(unsigned int)
public: void __thiscall FRoad::SetFlag(unsigned int)
public: void __thiscall FRoad::SetRoad(class FRoadSegment *,int)
public: void __thiscall FRoad::SetSegmentsFlag(unsigned int)
public: void __thiscall FRoad::SetStartPathParam(float)
public: void __thiscall FRoad::SetStartSegmParam(float)
const FRoad::`vftable'

private: static class FRoad * * FRoad::rArray
private: static class FRoad * * FRoad::rwArray
private: static int FRoad::NumRailways
private: static int FRoad::NumRoads
};

#endif

