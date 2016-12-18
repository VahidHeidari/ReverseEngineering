#ifndef ROADS_H_
#define ROADS_H_

namespace roads
{

class PointOnRoad
{
public: __thiscall roads::PointOnRoad::PointOnRoad(struct roads::PointOnRoad const &)
public: __thiscall roads::PointOnRoad::PointOnRoad(struct roads::PointOnRoad const &,float)
public: __thiscall roads::PointOnRoad::PointOnRoad(struct roads::Road *,float)
public: __thiscall roads::PointOnRoad::PointOnRoad(struct roads::Road *,unsigned short,float)
public: __thiscall roads::PointOnRoad::PointOnRoad(void)
public: void __thiscall roads::PointOnRoad::Move(float)
protected: void __thiscall roads::PointOnRoad::SetToLength(float)
};

class lRoadFile
{
public: __thiscall roads::lRoadFile::lRoadFile(enum roads::lRoadFile::road_type,char const *)
public: __thiscall roads::lRoadFile::lRoadFile(struct roads::lRoadFile const &)
public: __thiscall roads::lRoadFile::~lRoadFile(void)
public: struct roads::lRoadFile & __thiscall roads::lRoadFile::operator=(struct roads::lRoadFile const &)
public: bool __thiscall roads::lRoadFile::IsPointOnRoad(class E3::Vector const &,struct roads::PointOnRoad *)const 
public: class misc::ptr<struct roads::Square> * __thiscall roads::lRoadFile::getSquare(struct intpoint)
public: int __thiscall roads::lRoadFile::SegmentIntersection(class E3::Vector const &,class E3::Vector const &,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)
public: static struct roads::lRoadFile * __cdecl roads::lRoadFile::Open(char const *,class misc::mmf &)
public: static void __cdecl roads::lRoadFile::Build(class std::list<struct roads::Road *,class std::allocator<struct roads::Road *> > &,class misc::vector<struct roads::Road> &,class misc::vector<struct roads::Crossroad> &,class misc::mmf_write &)
public: void __thiscall roads::lRoadFile::Build(class std::list<struct roads::Road *,class std::allocator<struct roads::Road *> > &,class std::list<struct roads::SceneObject,class std::allocator<struct roads::SceneObject> > &,class misc::mmf_write &)
public: void __thiscall roads::lRoadFile::BuildSquares(class misc::mmf_write &)
public: void __thiscall roads::lRoadFile::BuildSuperficial(class misc::mmf_write &)
protected: void __thiscall roads::lRoadFile::InitSquares(struct intpoint,struct intpoint,class misc::mmf_write &)
};

class Crossroad
{
public: __thiscall roads::Crossroad::Crossroad(struct roads::Crossroad const &)
public: __thiscall roads::Crossroad::Crossroad(void)
public: __thiscall roads::Crossroad::~Crossroad(void)
};

class CrossroadType
{
	class CrossAngle
	{
	public: __thiscall roads::CrossroadType::CrossAngle::CrossAngle(struct roads::CrossroadType::CrossAngle const &)
	public: __thiscall roads::CrossroadType::CrossAngle::CrossAngle(void)
	public: class E3::Vector __thiscall roads::CrossroadType::CrossAngle::getOutPoint(void)
	public: class E3::Vector __thiscall roads::CrossroadType::CrossAngle::getOutTangent(void)
	public: struct roads::CrossroadType::CrossAngle & __thiscall roads::CrossroadType::CrossAngle::operator=(struct roads::CrossroadType::CrossAngle const &)
	};

public: __thiscall roads::CrossroadType::CrossroadType(struct roads::CrossroadType const &)
public: __thiscall roads::CrossroadType::CrossroadType(void)
public: __thiscall roads::CrossroadType::~CrossroadType(void)
public: struct roads::CrossroadType & __thiscall roads::CrossroadType::operator=(struct roads::CrossroadType const &)
public: bool __thiscall roads::CrossroadType::CheckType(enum roads::lRoadFile::road_type,struct roads::Crossroad &,float &,float &,int &)
public: struct roads::Road * __thiscall roads::CrossroadType::getRoad(struct roads::Crossroad *,struct roads::RoadAnchor *,struct roads::RoadAnchor *,bool &)
public: void __thiscall roads::CrossroadType::BuildRoads(class std::list<struct roads::Road *,class std::allocator<struct roads::Road *> > &,class misc::mmf_write &)
public: void __thiscall roads::CrossroadType::CopyFrom(struct roads::CrossroadType const &,class misc::mmf_write &)
};

class CrossroadTypeFile
{
public: __thiscall roads::CrossroadTypeFile::CrossroadTypeFile(struct roads::CrossroadTypeFile const &)
public: __thiscall roads::CrossroadTypeFile::CrossroadTypeFile(void)
public: __thiscall roads::CrossroadTypeFile::~CrossroadTypeFile(void)
public: struct roads::CrossroadTypeFile & __thiscall roads::CrossroadTypeFile::operator=(struct roads::CrossroadTypeFile const &)
public: static struct roads::CrossroadTypeFile * __cdecl roads::CrossroadTypeFile::Open(char const *,class misc::mmf &)
public: void __thiscall roads::CrossroadTypeFile::Build(class std::list<struct roads::CrossroadType *,class std::allocator<struct roads::CrossroadType *> > &,class misc::mmf_write &)
public: void __thiscall roads::CrossroadTypeFile::BuildCopy(struct roads::CrossroadTypeFile *,class misc::mmf_write &)
};

class PointOnRoadH
{
public: __thiscall roads::PointOnRoadH::PointOnRoadH(class roads::PointOnRoadH const &)
public: __thiscall roads::PointOnRoadH::PointOnRoadH(class roads::PointOnRoadH const &,float)
public: __thiscall roads::PointOnRoadH::PointOnRoadH(struct roads::PointOnRoad const &)
public: __thiscall roads::PointOnRoadH::PointOnRoadH(struct roads::PointOnRoad const &,float)
public: __thiscall roads::PointOnRoadH::PointOnRoadH(void)
public: class roads::PointOnRoadH & __thiscall roads::PointOnRoadH::operator=(class roads::PointOnRoadH const &)
public: float __thiscall roads::PointOnRoadH::getHeigth(void)const 
public: void __thiscall roads::PointOnRoadH::getNormal(class E3::Vector &)const 
};

class Road
{
public: __thiscall roads::Road::Road(struct roads::Road const &)
public: __thiscall roads::Road::Road(void)
public: __thiscall roads::Road::~Road(void)
public: bool __thiscall roads::Road::Cut(struct roads::PointOnRoad const &,struct roads::PointOnRoad const &,struct roads::Road &)
public: bool __thiscall roads::Road::IsDegradateSegment(int,class E3::Vector *)
public: bool __thiscall roads::Road::IsPointOnRoad(class E3::Vector const &)const 
public: bool __thiscall roads::Road::MovePoint(int,class E3::Vector const &,float,bool)
public: bool __thiscall roads::Road::Offset(float)
public: bool __thiscall roads::Road::Serialize(char *,int,bool)
public: bool __thiscall roads::Road::equalType(struct roads::Road &)
public: bool __thiscall roads::Road::getPointByLength(float,class E3::Vector &)const 
public: bool __thiscall roads::Road::getPointByLength(float,struct roads::PointOnRoad &)const 
public: bool __thiscall roads::Road::getPointBySegParam(float,struct roads::PointOnRoad &)const 
public: bool __thiscall roads::Road::isDiversionAvailable(struct roads::PointOnRoad &,struct roads::PointOnRoad &)const 
public: bool __thiscall roads::Road::isOnPhysicalRoad(struct roads::PointOnRoad &,struct roads::PointOnRoad &)const 
public: bool __thiscall roads::Road::isValidRoad(void)const 
public: class Box const & __thiscall roads::Road::getBox(void)const 
public: class E3::Vector __thiscall roads::Road::getEndTangent(void)const 
public: class E3::Vector __thiscall roads::Road::getStartTangent(void)const 
public: class E3::Vector const & __thiscall roads::Road::getEndPoint(void)const 
public: class E3::Vector const & __thiscall roads::Road::getPoint(int)const 
public: class E3::Vector const & __thiscall roads::Road::getStartPoint(void)const 
public: float __thiscall roads::Road::DistanceFromPoint(class E3::Vector const &)const 
public: float __thiscall roads::Road::getLength(void)const 
public: float __thiscall roads::Road::getSegmentLength(void)const 
public: int __thiscall roads::Road::BoxIntersection(class E3::Vector const &,class E3::Vector const &,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)const 
public: int __thiscall roads::Road::CircleIntersection(class E3::Vector const &,float,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)const 
public: int __thiscall roads::Road::CircleIntersection(float,class E3::Vector const &,float,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)const 
public: int __thiscall roads::Road::SegmentIntersection(class E3::Vector const &,class E3::Vector const &,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)const 
public: int __thiscall roads::Road::SerializeSize(void)const 
public: static bool __cdecl roads::Road::BuildRoadsFillet(struct roads::Road const &,struct roads::Road const &,float,struct roads::Segment &,struct roads::PointOnRoad &,struct roads::PointOnRoad &)
public: static struct roads::Road * __cdecl roads::Road::BuildFromList(class std::list<struct roads::Road *,class std::allocator<struct roads::Road *> > &)
public: static struct roads::Road * __cdecl roads::Road::BuildFromSegment(struct roads::Segment const &)
public: static struct roads::Road * __cdecl roads::Road::BuildLineSeg(class E3::Vector const &,class E3::Vector const &,unsigned long)
public: struct geometry::GeometryItem * __thiscall roads::Road::BuildCenterLine(class E3::Vector const &,float,struct material::Material *,class misc::mmf_write &)
public: struct geometry::GeometryItem * __thiscall roads::Road::BuildMesh(int,int,class E3::Vector const &,float,float,float,float,struct material::Material *,class misc::mmf_write &)
public: struct roads::PointOnRoad __thiscall roads::Road::getEnd(void)const 
public: struct roads::PointOnRoad __thiscall roads::Road::getStart(void)const 
public: struct roads::Road & __thiscall roads::Road::operator=(struct roads::Road const &)
public: struct roads::Road * __thiscall roads::Road::Copy(void)
public: struct roads::Road * __thiscall roads::Road::CutRoad(struct roads::PointOnRoad const &,struct roads::PointOnRoad const &)
public: struct roads::Road * __thiscall roads::Road::InsertRoad(struct roads::PointOnRoad const &,struct roads::PointOnRoad const &,struct roads::Road &)
public: struct roads::Segment * __thiscall roads::Road::getEndSegment(void)
public: struct roads::Segment * __thiscall roads::Road::getSegment(int)
public: struct roads::Segment * __thiscall roads::Road::getStartSegment(void)
public: void __thiscall roads::Road::Approx2d(float,class std::vector<class E3::Vector,class std::allocator<class E3::Vector> > &,float)
public: void __thiscall roads::Road::Approx3d(float,class std::vector<class E3::Vector,class std::allocator<class E3::Vector> > &,float,int,int,float)
public: void __thiscall roads::Road::BuildBox(void)
public: void __thiscall roads::Road::BuildFromList(class std::list<struct roads::Road *,class std::allocator<struct roads::Road *> > &,class std::list<bool,class std::allocator<bool> > &)
public: void __thiscall roads::Road::CalcLength(void)
public: void __thiscall roads::Road::CopyFrom(struct roads::Road const &,class misc::mmf_write *)
public: void __thiscall roads::Road::DeleteAllSegments(void)
public: void __thiscall roads::Road::InitSegmentParams(float,float)
public: void __thiscall roads::Road::InitSegmentParams(void)
public: void __thiscall roads::Road::InsertSegments(struct roads::Segment *,int,int)
public: void __thiscall roads::Road::ModifySegmentsFlag(unsigned long,unsigned long)
public: void __thiscall roads::Road::ProjectPoint(class E3::Vector const &,struct roads::PointOnRoad &)const 
public: void __thiscall roads::Road::RemoveDegradateSegments(void)
public: void __thiscall roads::Road::Reverse(void)
public: void __thiscall roads::Road::Rotate(class E3::Vector const &,float)
public: void __thiscall roads::Road::SetName(char const *)
public: void __thiscall roads::Road::Translate(class E3::Vector const &)
public: void __thiscall roads::Road::getEndPoint(struct roads::PointOnRoad &)const 
public: void __thiscall roads::Road::getStartPoint(struct roads::PointOnRoad &)const 
public: void __thiscall roads::Road::setObjects(int)
public: void __thiscall roads::Road::setStartSegmentParam(float)
};

class RoadAnchor
{
public: __thiscall roads::RoadAnchor::RoadAnchor(struct roads::RoadAnchor const &)
public: __thiscall roads::RoadAnchor::RoadAnchor(void)
public: bool __thiscall roads::RoadAnchor::CheckType(unsigned long)
public: bool __thiscall roads::RoadAnchor::isEnd(void)const 
public: bool __thiscall roads::RoadAnchor::isStart(void)const 
public: class E3::Vector __thiscall roads::RoadAnchor::getPoint(void)const 
public: class E3::Vector __thiscall roads::RoadAnchor::getTangent(void)const 
public: struct roads::Crossroad * __thiscall roads::RoadAnchor::getCross(void)const 
public: struct roads::Crossroad * __thiscall roads::RoadAnchor::getOponentCross(void)const 
public: struct roads::PointOnRoad __thiscall roads::RoadAnchor::getPOR(void)const 
public: struct roads::Road * __thiscall roads::RoadAnchor::getRoad(void)const 
public: struct roads::RoadAnchor & __thiscall roads::RoadAnchor::operator=(struct roads::RoadAnchor const &)
public: struct roads::RoadAnchor * __thiscall roads::RoadAnchor::getOponentAnchor(void)
public: void __thiscall roads::RoadAnchor::Init(struct roads::Road *,bool)
public: void __thiscall roads::RoadAnchor::setCross(struct roads::Crossroad *)
};

class RoadLink
{
public: __thiscall roads::RoadLink::RoadLink(struct roads::RoadLink const &)
public: __thiscall roads::RoadLink::RoadLink(void)
public: __thiscall roads::RoadLink::~RoadLink(void)
public: struct roads::RoadLink & __thiscall roads::RoadLink::operator=(struct roads::RoadLink const &)
public: bool __thiscall roads::RoadLink::IsInside(class E3::Vector const &)const 
public: void __thiscall roads::RoadLink::BuildBox(void)
};

class RoadSceneObject
{
public: __thiscall roads::RoadSceneObject::RoadSceneObject(struct roads::RoadSceneObject const &)
public: __thiscall roads::RoadSceneObject::RoadSceneObject(void)
public: struct roads::RoadSceneObject & __thiscall roads::RoadSceneObject::operator=(struct roads::RoadSceneObject const &)
public: struct roads::PointOnRoad __thiscall roads::RoadSceneObject::getPointOnRoad(void)
};

class SceneObject
{
public: __thiscall roads::SceneObject::SceneObject(struct roads::SceneObject const &)
public: __thiscall roads::SceneObject::SceneObject(void)
public: struct roads::SceneObject & __thiscall roads::SceneObject::operator=(struct roads::SceneObject const &)
};

class Segment
{
public: __thiscall roads::Segment::Segment(class E3::Vector const &,class E3::Vector const &)
public: __thiscall roads::Segment::Segment(struct roads::Segment const &)
public: __thiscall roads::Segment::Segment(void)
public: struct roads::Segment & __thiscall roads::Segment::operator=(struct roads::Segment const &)
public: bool __thiscall roads::Segment::BuildFillet(struct roads::Segment &,struct roads::Segment &,float)
public: bool __thiscall roads::Segment::ConvertSmallArc2Seg(void)
public: bool __thiscall roads::Segment::IsArc(void)const 
public: bool __thiscall roads::Segment::IsArcInverted(void)const 
public: bool __thiscall roads::Segment::IsDegradateSegment(void)
public: bool __thiscall roads::Segment::IsPointOnRoad(class E3::Vector const &,float)const 
public: bool __thiscall roads::Segment::Offset(float)
public: bool __thiscall roads::Segment::isBridge(void)const 
public: bool __thiscall roads::Segment::isMound(void)const 
public: bool __thiscall roads::Segment::isTown(void)const 
public: bool __thiscall roads::Segment::isTunnel(void)const 
public: bool __thiscall roads::Segment::isTunnelBridgeOrMound(void)const 
public: bool __thiscall roads::Segment::isTunnelOrBridge(void)const 
public: char const * __thiscall roads::Segment::getSegmentTexture(int,int)
public: class E3::Vector & __thiscall roads::Segment::getBsPoint(bool)
public: class E3::Vector & __thiscall roads::Segment::getPoint(bool)
public: class E3::Vector __thiscall roads::Segment::getEndTangent(void)const 
public: class E3::Vector __thiscall roads::Segment::getPointByParam(float)const 
public: class E3::Vector __thiscall roads::Segment::getStartTangent(void)const 
public: class E3::Vector __thiscall roads::Segment::getTangentByParam(float)const 
public: class E3::Vector const & __thiscall roads::Segment::MovePoint(bool,class E3::Vector const &,float)
public: class E3::Vector const & __thiscall roads::Segment::getEndPoint(void)const 
public: class E3::Vector const & __thiscall roads::Segment::getPoint(bool)const 
public: class E3::Vector const & __thiscall roads::Segment::getStartPoint(void)const 
public: float __thiscall roads::Segment::ArcAngle(void)const 
public: float __thiscall roads::Segment::DistanceFromPoint(class E3::Vector const &)const 
public: float __thiscall roads::Segment::getAngleByParam(float)const 
public: float __thiscall roads::Segment::getLength(void)const 
public: float __thiscall roads::Segment::getLengthByParam(float)const 
public: int __thiscall roads::Segment::BoxIntersection(class E3::Vector const *,class std::vector<struct roads::PointOnRoad,class std::allocator<struct roads::PointOnRoad> > &)const 
public: int __thiscall roads::Segment::CircleIntersection(class E3::Vector const &,float,struct roads::PointOnRoad *)const 
public: int __thiscall roads::Segment::SegmentIntersection(class E3::Vector const &,class E3::Vector const &,struct roads::PointOnRoad *)const 
public: int __thiscall roads::Segment::SegmentIntersection(struct roads::Segment const &,struct roads::PointOnRoad *)const 
public: int __thiscall roads::Segment::getNumApproxSeg(float,float)const 
public: void __thiscall roads::Segment::Approx(float,class std::vector<class E3::Vector,class std::allocator<class E3::Vector> > &,float)const 
public: void __thiscall roads::Segment::BuildArc(class E3::Vector const &,class E3::Vector const &,class E3::Vector const &,float)
public: void __thiscall roads::Segment::BuildArc(class E3::Vector const &,class E3::Vector const &,class E3::Vector const &,float,bool)
public: void __thiscall roads::Segment::BuildBox(class Box &)
public: void __thiscall roads::Segment::Cut(float,float,struct roads::Segment &)const 
public: void __thiscall roads::Segment::ProjectPoint(class E3::Vector const &,struct roads::PointOnRoad &)const 
public: void __thiscall roads::Segment::Reverse(void)
public: void __thiscall roads::Segment::Rotate(class E3::Vector const &,float)
public: void __thiscall roads::Segment::SetArc(float,float,class E3::Vector const &,float,bool)
public: void __thiscall roads::Segment::SetArcInverted(void)
public: void __thiscall roads::Segment::SetFlags(unsigned long)
public: void __thiscall roads::Segment::SetLineSeg(class E3::Vector const &,class E3::Vector const &)
public: void __thiscall roads::Segment::Translate(class E3::Vector const &)
};

class Square
{
public: __thiscall roads::Square::Square(struct roads::Square const &)
public: __thiscall roads::Square::Square(void)
public: __thiscall roads::Square::~Square(void)
public: struct roads::Square & __thiscall roads::Square::operator=(struct roads::Square const &)
public: bool __thiscall roads::Square::IsPointOnRoad(class E3::Vector const &,struct roads::PointOnRoad *)const 
public: struct roads::Road * __thiscall roads::Square::FindClosestRoad(class E3::Vector const &,unsigned long &,float &,bool (__cdecl*)(struct roads::Segment const &))
};

class PointOnRoad
{
public: struct roads::PointOnRoad & __thiscall roads::PointOnRoad::operator=(struct roads::PointOnRoad const &)
public: bool __thiscall roads::PointOnRoad::isBridge(void)const 
public: bool __thiscall roads::PointOnRoad::isDiversion(void)const 
public: bool __thiscall roads::PointOnRoad::isOnPhysicalRoad(void)const 
public: bool __thiscall roads::PointOnRoad::isTown(void)const 
public: bool __thiscall roads::PointOnRoad::isTunnel(void)const 
public: bool __thiscall roads::PointOnRoad::isTunnelOrBridge(void)const 
public: bool __thiscall roads::PointOnRoad::operator!=(struct roads::PointOnRoad const &)const 
public: bool __thiscall roads::PointOnRoad::operator<(struct roads::PointOnRoad const &)const 
public: bool __thiscall roads::PointOnRoad::operator==(struct roads::PointOnRoad const &)const 
public: class E3::Vector & __thiscall roads::PointOnRoad::GetPoint(void)const 
public: class E3::Vector & __thiscall roads::PointOnRoad::getTangent(void)const 
public: class E3::Vector __thiscall roads::PointOnRoad::getOffsetPoint(float)const 
public: float __thiscall roads::PointOnRoad::getDistFromBegin(void)const 
public: float __thiscall roads::PointOnRoad::getDistanceTo(struct roads::PointOnRoad const &)const 
public: float __thiscall roads::PointOnRoad::getDistanceTo(struct roads::RoadAnchor *)const 
public: float __thiscall roads::PointOnRoad::getSegmentParam(void)const 
public: float __thiscall roads::PointOnRoad::getTurningRadius(void)const 
};

class Crossroad
{
public: struct roads::Crossroad & __thiscall roads::Crossroad::operator=(struct roads::Crossroad const &)
public: int __thiscall roads::Crossroad::getAnchorIndex(struct roads::RoadAnchor const *)const 
public: struct roads::RoadAnchor * __thiscall roads::Crossroad::FindRoadAnchor(struct roads::Road *)
public: void __thiscall roads::Crossroad::CopyFrom(struct roads::Crossroad const &)
public: void __thiscall roads::Crossroad::InitRoadAnchors(struct roads::RoadAnchor * *,int,class misc::mmf_write *)
public: void __thiscall roads::Crossroad::setObjects(int)
};

}		/// namespace roads

#endif

