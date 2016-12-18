#ifndef MA_H_
#define MA_H_

namespace ma
{

bool __cdecl ma::attachAllNodeChildren(class INode *,class INode *)
bool __cdecl ma::attachNode(class INode *,class INode *,class INode *)
bool __cdecl ma::deleteNodeUserPropKey(class INode *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
bool __cdecl ma::smoothMeshes(class std::map<class INode *,class Mesh *,struct std::less<class INode *>,class std::allocator<class Mesh *> > &,bool)
bool __cdecl ma::tmNegParity(class Matrix3 &)
class CStr __cdecl ma::OpenFileDialog(class Interface *,char const *,char const *)
class CStr __cdecl ma::SaveFileDialog(class Interface *,char const *,char const *)
class DummyObject * __cdecl ma::getDummyObjectFromNode(class INode *)
class INode * __cdecl ma::copyNode(class INode *)
class Matrix3 __cdecl ma::getMatrixForNormals(class Matrix3 &)
class Matrix3 __cdecl ma::getObjOffsetTM(class INode *)
class Point3 __cdecl ma::getVertexNormal(class Mesh *,int,class RVertex *)
class SplineShape * __cdecl ma::getSplineObjectFromNode(class INode *)
class TriObject * __cdecl ma::getTriObjectFromNode(class INode *,int)
class ma::Track * __cdecl ma::getMapAmountAnimation(class ma::CBitmapMapData &)
int __cdecl ma::compareEdges(class ma::MPMesh &,unsigned int,class ma::MPMesh &,unsigned int)
void __cdecl ma::resetPivotTransform(class INode *,int)
void __cdecl ma::setPivot(class INode *,int,class Matrix3 &)
void __cdecl ma::setPivot(class INode *,int,class Point3 const &,class Point3 const &,int)

namespace math
{

bool __cdecl ma::math::intersectLineSegTri(class Point3 const &,class Point3 const &,class Point3 const &,class Point3 const &,class Point3 const &,class Point3 &)
bool __cdecl ma::math::intersectRayTri(class Point3 const &,class Point3 const &,class Point3 const &,class Point3 const &,class Point3 const &,class Point3 &)
class Quat __cdecl ma::math::quatFromVectorToVector(class Point3 const &,class Point3 const &)
enum ma::math::IntersectionResult __cdecl ma::math::intersectLineLine(class Point3 const &,class Point3 const &,class Point3 const &,class Point3 const &,class Point3 &)
float __cdecl ma::math::lengthPointToLine(class Point3 const &,class Point3 const &,class Point3 const &)

}		/// namespace math

class AnimData
{
public: __thiscall ma::AnimData::AnimData(class ma::AnimData const &)
public: __thiscall ma::AnimData::AnimData(void)
public: virtual __thiscall ma::AnimData::~AnimData(void)
public: class ma::AnimData & __thiscall ma::AnimData::operator=(class ma::AnimData const &)
public: bool __thiscall ma::AnimData::empty(void)
public: bool __thiscall ma::AnimData::init(class INode *)
public: class INode * __thiscall ma::AnimData::getINode(void)
public: class Interval & __thiscall ma::AnimData::getInterval(void)
public: class ma::Track * __thiscall ma::AnimData::find(enum ma::AnimData::TrackType,class ma::Track *)
public: class std::multimap<enum ma::AnimData::TrackType,class ma::Track *,struct std::less<enum ma::AnimData::TrackType>,class std::allocator<class ma::Track *> > & __thiscall ma::AnimData::getTracks(void)
public: static bool __cdecl ma::AnimData::isKnownController(class Control *)
public: static class ma::Track * __cdecl ma::AnimData::getTrack(class Control *)
public: static class ma::Track * __cdecl ma::AnimData::getTrack(class DefNoteTrack *)
public: void __thiscall ma::AnimData::reset(void)
const ma::AnimData::`vftable'
};

class BEZFloatTrack
{
public: __thiscall ma::BEZFloatTrack::BEZFloatTrack(class ma::BEZFloatTrack const &)
public: __thiscall ma::BEZFloatTrack::BEZFloatTrack(void)
public: virtual __thiscall ma::BEZFloatTrack::~BEZFloatTrack(void)
public: class ma::BEZFloatTrack & __thiscall ma::BEZFloatTrack::operator=(class ma::BEZFloatTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::BEZFloatTrack::type(void)
const ma::BEZFloatTrack::`vftable'{for `ma::Track'}
const ma::BEZFloatTrack::`vftable'{for `ma::TrackValue<class IBezFloatKey>'}
};

class BEZPoint3Track
{
public: __thiscall ma::BEZPoint3Track::BEZPoint3Track(class ma::BEZPoint3Track const &)
public: __thiscall ma::BEZPoint3Track::BEZPoint3Track(void)
public: virtual __thiscall ma::BEZPoint3Track::~BEZPoint3Track(void)
public: class ma::BEZPoint3Track & __thiscall ma::BEZPoint3Track::operator=(class ma::BEZPoint3Track const &)
public: virtual enum ma::Track::Type __thiscall ma::BEZPoint3Track::type(void)
const ma::BEZPoint3Track::`vftable'{for `ma::Track'}
const ma::BEZPoint3Track::`vftable'{for `ma::TrackValue<class IBezPoint3Key>'}
};

class BEZRotationTrack
{
public: __thiscall ma::BEZRotationTrack::BEZRotationTrack(class ma::BEZRotationTrack const &)
public: __thiscall ma::BEZRotationTrack::BEZRotationTrack(void)
public: virtual __thiscall ma::BEZRotationTrack::~BEZRotationTrack(void)
public: class ma::BEZRotationTrack & __thiscall ma::BEZRotationTrack::operator=(class ma::BEZRotationTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::BEZRotationTrack::type(void)
const ma::BEZRotationTrack::`vftable'{for `ma::Track'}
const ma::BEZRotationTrack::`vftable'{for `ma::TrackValue<class IBezQuatKey>'}
};

class BEZScaleTrack
{
public: __thiscall ma::BEZScaleTrack::BEZScaleTrack(class ma::BEZScaleTrack const &)
public: __thiscall ma::BEZScaleTrack::BEZScaleTrack(void)
public: virtual __thiscall ma::BEZScaleTrack::~BEZScaleTrack(void)
public: class ma::BEZScaleTrack & __thiscall ma::BEZScaleTrack::operator=(class ma::BEZScaleTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::BEZScaleTrack::type(void)
const ma::BEZScaleTrack::`vftable'{for `ma::Track'}
const ma::BEZScaleTrack::`vftable'{for `ma::TrackValue<class IBezScaleKey>'}
};

class CBitmapMapData
{
public: __thiscall ma::CBitmapMapData::CBitmapMapData(class ma::CBitmapMapData const &)
public: __thiscall ma::CBitmapMapData::CBitmapMapData(void)
public: virtual __thiscall ma::CBitmapMapData::~CBitmapMapData(void)
public: class ma::CBitmapMapData & __thiscall ma::CBitmapMapData::operator=(class ma::CBitmapMapData const &)
public: class BitmapTex * __thiscall ma::CBitmapMapData::bitmapTex(void)
public: class Matrix3 & __thiscall ma::CBitmapMapData::uvMatrix(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall ma::CBitmapMapData::texFilename(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall ma::CBitmapMapData::texPathFilename(void)
public: float & __thiscall ma::CBitmapMapData::uTiling(void)
public: float & __thiscall ma::CBitmapMapData::vTiling(void)
public: int & __thiscall ma::CBitmapMapData::channel(void)
public: int & __thiscall ma::CBitmapMapData::tilingFlags(void)
public: static bool __cdecl ma::CBitmapMapData::isValid(class Texmap *)
public: virtual bool __thiscall ma::CBitmapMapData::init(class Texmap *)
public: virtual enum ma::CMapData::Type __thiscall ma::CBitmapMapData::type(void)
public: virtual void __thiscall ma::CBitmapMapData::reset(void)
const ma::CBitmapMapData::`vftable'
};

class CMapData
{
public: __thiscall ma::CMapData::CMapData(class ma::CMapData const &)
public: __thiscall ma::CMapData::CMapData(void)
public: virtual __thiscall ma::CMapData::~CMapData(void)
public: class ma::CMapData & __thiscall ma::CMapData::operator=(class ma::CMapData const &)
public: bool __thiscall ma::CMapData::isAnimated(void)
public: class Texmap * __thiscall ma::CMapData::texmap(void)
public: int & __thiscall ma::CMapData::amount(void)
public: int & __thiscall ma::CMapData::id(void)
public: static class ma::CMapData * __cdecl ma::CMapData::create(class Texmap *)
public: virtual bool __thiscall ma::CMapData::init(class Texmap *)
public: virtual enum ma::CMapData::Type __thiscall ma::CMapData::type(void)
public: virtual void __thiscall ma::CMapData::reset(void)
public: void __thiscall ma::CMapData::BuildList(class std::vector<class ma::CBitmapMapData *,class std::allocator<class ma::CBitmapMapData *> > &)
const ma::CMapData::`vftable'
};

class CompositeMapData
{
public: __thiscall ma::CompositeMapData::CompositeMapData(class ma::CompositeMapData const &)
public: __thiscall ma::CompositeMapData::CompositeMapData(void)
public: virtual __thiscall ma::CompositeMapData::~CompositeMapData(void)
public: class ma::CompositeMapData & __thiscall ma::CompositeMapData::operator=(class ma::CompositeMapData const &)
public: class ma::CMapData * __thiscall ma::CompositeMapData::getSubMap(unsigned int)
public: int __thiscall ma::CompositeMapData::getNumberOfSubMaps(void)
public: static bool __cdecl ma::CompositeMapData::isValid(class Texmap *)
public: virtual bool __thiscall ma::CompositeMapData::init(class Texmap *)
public: virtual enum ma::CMapData::Type __thiscall ma::CompositeMapData::type(void)
public: virtual void __thiscall ma::CompositeMapData::reset(void)
const ma::CompositeMapData::`vftable'
};

class CompositeMaterialData
{
public: __thiscall ma::CompositeMaterialData::CompositeMaterialData(class ma::CompositeMaterialData const &)
public: __thiscall ma::CompositeMaterialData::CompositeMaterialData(void)
public: virtual __thiscall ma::CompositeMaterialData::~CompositeMaterialData(void)
public: class ma::CompositeMaterialData & __thiscall ma::CompositeMaterialData::operator=(class ma::CompositeMaterialData const &)
public: class ma::MaterialData * __thiscall ma::CompositeMaterialData::getSubMaterial(unsigned int)
public: int __thiscall ma::CompositeMaterialData::getNumberOfSubMaterials(void)
public: static bool __cdecl ma::CompositeMaterialData::isValid(class Mtl *)
public: virtual bool __thiscall ma::CompositeMaterialData::init(class Mtl *)
public: virtual enum ma::MaterialData::Type __thiscall ma::CompositeMaterialData::type(void)
public: virtual void __thiscall ma::CompositeMaterialData::reset(void)
const ma::CompositeMaterialData::`vftable'
};

class ControlTrack
{
public: __thiscall ma::ControlTrack::ControlTrack(class ma::ControlTrack const &)
public: __thiscall ma::ControlTrack::ControlTrack(void)
public: class ma::ControlTrack & __thiscall ma::ControlTrack::operator=(class ma::ControlTrack const &)
const ma::ControlTrack::`vftable'
};

class Helper
{
public: __thiscall ma::Helper::Helper(class ma::Helper const &)
public: __thiscall ma::Helper::Helper(void)
public: __thiscall ma::Helper::~Helper(void)
public: class ma::Helper & __thiscall ma::Helper::operator=(class ma::Helper const &)
public: bool __thiscall ma::Helper::create(class Interface *)
public: class INode * __thiscall ma::Helper::getINode(void)
public: virtual bool __thiscall ma::Helper::init(class INode *)
public: virtual bool __thiscall ma::Helper::isInitialized(void)
public: virtual void __thiscall ma::Helper::reset(void)
protected: void __thiscall ma::Helper::localReset(void)
const ma::Helper::`vftable'
};

class LINFloatTrack
{
public: __thiscall ma::LINFloatTrack::LINFloatTrack(class ma::LINFloatTrack const &)
public: __thiscall ma::LINFloatTrack::LINFloatTrack(void)
public: virtual __thiscall ma::LINFloatTrack::~LINFloatTrack(void)
public: class ma::LINFloatTrack & __thiscall ma::LINFloatTrack::operator=(class ma::LINFloatTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::LINFloatTrack::type(void)
const ma::LINFloatTrack::`vftable'{for `ma::Track'}
const ma::LINFloatTrack::`vftable'{for `ma::TrackValue<class ILinFloatKey>'}
};

class LINPoint3Track
{
public: __thiscall ma::LINPoint3Track::LINPoint3Track(class ma::LINPoint3Track const &)
public: __thiscall ma::LINPoint3Track::LINPoint3Track(void)
public: virtual __thiscall ma::LINPoint3Track::~LINPoint3Track(void)
public: class ma::LINPoint3Track & __thiscall ma::LINPoint3Track::operator=(class ma::LINPoint3Track const &)
public: virtual enum ma::Track::Type __thiscall ma::LINPoint3Track::type(void)
const ma::LINPoint3Track::`vftable'{for `ma::Track'}
const ma::LINPoint3Track::`vftable'{for `ma::TrackValue<class ILinPoint3Key>'}
};

class LINRotationTrack
{
public: __thiscall ma::LINRotationTrack::LINRotationTrack(class ma::LINRotationTrack const &)
public: __thiscall ma::LINRotationTrack::LINRotationTrack(void)
public: virtual __thiscall ma::LINRotationTrack::~LINRotationTrack(void)
public: class ma::LINRotationTrack & __thiscall ma::LINRotationTrack::operator=(class ma::LINRotationTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::LINRotationTrack::type(void)
const ma::LINRotationTrack::`vftable'{for `ma::Track'}
const ma::LINRotationTrack::`vftable'{for `ma::TrackValue<class ILinRotKey>'}
};

class LINScaleTrack
{
public: __thiscall ma::LINScaleTrack::LINScaleTrack(class ma::LINScaleTrack const &)
public: __thiscall ma::LINScaleTrack::LINScaleTrack(void)
public: virtual __thiscall ma::LINScaleTrack::~LINScaleTrack(void)
public: class ma::LINScaleTrack & __thiscall ma::LINScaleTrack::operator=(class ma::LINScaleTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::LINScaleTrack::type(void)
const ma::LINScaleTrack::`vftable'{for `ma::Track'}
const ma::LINScaleTrack::`vftable'{for `ma::TrackValue<class ILinScaleKey>'}
};

class LightData
{
public: __thiscall ma::LightData::LightData(class ma::LightData const &)
public: __thiscall ma::LightData::LightData(void)
public: virtual __thiscall ma::LightData::~LightData(void)
public: class ma::LightData & __thiscall ma::LightData::operator=(class ma::LightData const &)
public: bool & __thiscall ma::LightData::affectDiffuse(void)
public: bool & __thiscall ma::LightData::affectSpecular(void)
public: bool & __thiscall ma::LightData::useAttenuation(void)
public: bool __thiscall ma::LightData::init(class INode *)
public: bool __thiscall ma::LightData::isInitialized(void)
public: class Color & __thiscall ma::LightData::color(void)
public: class Matrix3 & __thiscall ma::LightData::lightTM(void)
public: enum LightType & __thiscall ma::LightData::lightType(void)
public: float & __thiscall ma::LightData::attenuationEnd(void)
public: float & __thiscall ma::LightData::attenuationStart(void)
public: float & __thiscall ma::LightData::fallSize(void)
public: float & __thiscall ma::LightData::hotSize(void)
public: static bool __cdecl ma::LightData::isValid(class INode *)
public: void __thiscall ma::LightData::reset(void)
const ma::LightData::`vftable'
};

class MPEdge
{
public: __thiscall ma::MPEdge::MPEdge(class ma::MPEdge const &)
public: __thiscall ma::MPEdge::MPEdge(int,int)
public: __thiscall ma::MPEdge::MPEdge(struct Edge const &)
public: __thiscall ma::MPEdge::MPEdge(void)
public: virtual __thiscall ma::MPEdge::~MPEdge(void)
public: class ma::MPEdge & __thiscall ma::MPEdge::operator=(class ma::MPEdge const &)
public: bool __thiscall ma::MPEdge::operator<(class ma::MPEdge const &)const 
public: bool __thiscall ma::MPEdge::operator==(class ma::MPEdge const &)const 
const ma::MPEdge::`vftable'
};

class MPFace
{
public: __thiscall ma::MPFace::MPFace(class Face &)
public: __thiscall ma::MPFace::MPFace(class ma::MPFace const &)
public: __thiscall ma::MPFace::MPFace(void)
public: virtual __thiscall ma::MPFace::~MPFace(void)
public: class ma::MPFace & __thiscall ma::MPFace::operator=(class ma::MPFace const &)
public: void __thiscall ma::MPFace::flip(void)
protected: bool __thiscall ma::MPFace::assignEdge(int,class ma::MPEdge const &)
const ma::MPFace::`vftable'
};

class MPMap
{
public: __thiscall ma::MPMap::MPMap(class ma::MPMap const &)
public: __thiscall ma::MPMap::MPMap(void)
public: virtual __thiscall ma::MPMap::~MPMap(void)
public: class ma::MPMap & __thiscall ma::MPMap::operator=(class ma::MPMap const &)
const ma::MPMap::`vftable'
};

class MPMapFace
{
public: __thiscall ma::MPMapFace::MPMapFace(class TVFace const &)
public: __thiscall ma::MPMapFace::MPMapFace(class ma::MPMapFace const &)
public: __thiscall ma::MPMapFace::MPMapFace(void)
public: virtual __thiscall ma::MPMapFace::~MPMapFace(void)
public: class ma::MPMapFace & __thiscall ma::MPMapFace::operator=(class ma::MPMapFace const &)
const ma::MPMapFace::`vftable'
};

class MPMapVert
{
public: __thiscall ma::MPMapVert::MPMapVert(class Point3 const &)
public: __thiscall ma::MPMapVert::MPMapVert(class ma::MPMapVert const &)
public: __thiscall ma::MPMapVert::MPMapVert(void)
public: virtual __thiscall ma::MPMapVert::~MPMapVert(void)
public: class ma::MPMapVert & __thiscall ma::MPMapVert::operator=(class ma::MPMapVert const &)
public: bool __thiscall ma::MPMapVert::operator<(class ma::MPMapVert const &)const 
public: bool __thiscall ma::MPMapVert::operator>(class ma::MPMapVert const &)const 
const ma::MPMapVert::`vftable'
};

class MPMesh
{
public: __thiscall ma::MPMesh::MPMesh(class ma::MPMesh const &)
public: __thiscall ma::MPMesh::MPMesh(void)
public: virtual __thiscall ma::MPMesh::~MPMesh(void)
public: class ma::MPMesh & __thiscall ma::MPMesh::operator=(class ma::MPMesh const &)
public: bool __thiscall ma::MPMesh::breakVerts(class ma::MPMesh &)
public: bool __thiscall ma::MPMesh::breakVerts(void)
public: bool __thiscall ma::MPMesh::divideByMaterial(class std::vector<class ma::MPMesh,class std::allocator<class ma::MPMesh> > &)
public: bool __thiscall ma::MPMesh::extractFaces(class BitArray &,class ma::MPMesh &)
public: bool __thiscall ma::MPMesh::init(class INode *,bool)
public: void __thiscall ma::MPMesh::reset(void)
public: void __thiscall ma::MPMesh::transform(class Matrix3 &)
protected: bool __thiscall ma::MPMesh::getData(void)
protected: void __thiscall ma::MPMesh::initTransform(bool)
const ma::MPMesh::`vftable'
};

class MPNormal
{
public: __thiscall ma::MPNormal::MPNormal(class Point3 const &)
public: __thiscall ma::MPNormal::MPNormal(class ma::MPNormal const &)
public: __thiscall ma::MPNormal::MPNormal(void)
public: virtual __thiscall ma::MPNormal::~MPNormal(void)
public: class ma::MPNormal & __thiscall ma::MPNormal::operator=(class ma::MPNormal const &)
public: bool __thiscall ma::MPNormal::operator<(class ma::MPNormal const &)const 
public: bool __thiscall ma::MPNormal::operator>(class ma::MPNormal const &)const 
public: void __thiscall ma::MPNormal::transform(class Matrix3 &)
const ma::MPNormal::`vftable'
};

class MPVert
{
public: __thiscall ma::MPVert::MPVert(class Point3 const &)
public: __thiscall ma::MPVert::MPVert(class ma::MPVert const &)
public: __thiscall ma::MPVert::MPVert(void)
public: virtual __thiscall ma::MPVert::~MPVert(void)
public: class ma::MPVert & __thiscall ma::MPVert::operator=(class ma::MPVert const &)
public: bool __thiscall ma::MPVert::operator<(class ma::MPVert const &)const 
public: bool __thiscall ma::MPVert::operator==(class ma::MPVert const &)const 
public: class std::_Tree<unsigned long,struct std::pair<unsigned long const ,class ma::MPNormal>,struct std::map<unsigned long,class ma::MPNormal,struct std::less<unsigned long>,class std::allocator<class ma::MPNormal> >::_Kfn,struct std::less<unsigned long>,class std::allocator<class ma::MPNormal> >::iterator __thiscall ma::MPVert::norm(unsigned long)
public: void __thiscall ma::MPVert::transform(class Matrix3 &)
const ma::MPVert::`vftable'
};

class MaterialData
{
public: __thiscall ma::MaterialData::MaterialData(class ma::MaterialData const &)
public: __thiscall ma::MaterialData::MaterialData(void)
public: virtual __thiscall ma::MaterialData::~MaterialData(void)
public: class ma::MaterialData & __thiscall ma::MaterialData::operator=(class ma::MaterialData const &)
public: bool __thiscall ma::MaterialData::isAnimated(void)
public: class Mtl * __thiscall ma::MaterialData::getMtl(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall ma::MaterialData::getName(void)
public: static class ma::MaterialData * __cdecl ma::MaterialData::create(class Mtl *)
public: virtual bool __thiscall ma::MaterialData::init(class Mtl *)
public: virtual enum ma::MaterialData::Type __thiscall ma::MaterialData::type(void)
public: virtual void __thiscall ma::MaterialData::reset(void)
public: void __thiscall ma::MaterialData::BuildList(class std::vector<class ma::StdMaterialData *,class std::allocator<class ma::StdMaterialData *> > &)
const ma::MaterialData::`vftable'
};

class MeshData
{
	class Triangle
	{
	public: __thiscall ma::MeshData::Triangle::Triangle(class ma::MeshData::Triangle const &)
	public: __thiscall ma::MeshData::Triangle::Triangle(int,int,int)
	public: __thiscall ma::MeshData::Triangle::Triangle(void)
	public: virtual __thiscall ma::MeshData::Triangle::~Triangle(void)
	public: class ma::MeshData::Triangle & __thiscall ma::MeshData::Triangle::operator=(class ma::MeshData::Triangle const &)
	public: int & __thiscall ma::MeshData::Triangle::i0(void)
	public: int & __thiscall ma::MeshData::Triangle::i1(void)
	public: int & __thiscall ma::MeshData::Triangle::i2(void)
	public: int & __thiscall ma::MeshData::Triangle::index(int)
	public: int & __thiscall ma::MeshData::Triangle::smoothGroup(void)
	public: unsigned short & __thiscall ma::MeshData::Triangle::materialID(void)
	};

	class Vertex
	{
	public: __thiscall ma::MeshData::Vertex::Vertex(class Point3 const &,class Point3 const &)
	public: __thiscall ma::MeshData::Vertex::Vertex(class ma::MeshData::Vertex const &)
	public: __thiscall ma::MeshData::Vertex::Vertex(void)
	public: virtual __thiscall ma::MeshData::Vertex::~Vertex(void)
	public: class ma::MeshData::Vertex & __thiscall ma::MeshData::Vertex::operator=(class ma::MeshData::Vertex const &)
	public: bool __thiscall ma::MeshData::Vertex::operator<(class ma::MeshData::Vertex const &)const 
	public: class Point3 & __thiscall ma::MeshData::Vertex::color(void)
	public: class Point3 & __thiscall ma::MeshData::Vertex::normal(void)
	public: class Point3 & __thiscall ma::MeshData::Vertex::position(void)
	public: class Point3 & __thiscall ma::MeshData::Vertex::textureCoord(int)
	public: void __thiscall ma::MeshData::Vertex::transform(class Matrix3 &)
	};

public: __thiscall ma::MeshData::MeshData(class ma::MeshData const &)
public: __thiscall ma::MeshData::MeshData(void)
public: virtual __thiscall ma::MeshData::~MeshData(void)
public: class ma::MeshData & __thiscall ma::MeshData::operator=(class ma::MeshData const &)
public: bool __thiscall ma::MeshData::divideByMaterial(class std::vector<class ma::MeshData,class std::allocator<class ma::MeshData> > &)
public: bool __thiscall ma::MeshData::extractFaces(class BitArray &,class ma::MeshData &)
public: bool __thiscall ma::MeshData::init(class INode *,class Mesh *,bool)
public: bool __thiscall ma::MeshData::isInitialized(void)
public: class INode * __thiscall ma::MeshData::getINode(void)
public: class std::vector<class Mtl *,class std::allocator<class Mtl *> > & __thiscall ma::MeshData::materialArray(void)
public: class std::vector<class ma::MeshData::Triangle,class std::allocator<class ma::MeshData::Triangle> > & __thiscall ma::MeshData::faceArray(void)
public: class std::vector<class ma::MeshData::Vertex,class std::allocator<class ma::MeshData::Vertex> > & __thiscall ma::MeshData::vertexArray(void)
public: class std::vector<int,class std::allocator<int> > & __thiscall ma::MeshData::mappingChannels(void)
public: void __thiscall ma::MeshData::reset(void)
public: void __thiscall ma::MeshData::transform(class Matrix3 &)
private: bool __thiscall ma::MeshData::buildData(class Mesh *,bool)
private: void __thiscall ma::MeshData::toWorld(class ma::MeshData::Vertex &,class Matrix3 &)
const ma::MeshData::Triangle::`vftable'
const ma::MeshData::Vertex::`vftable'
const ma::MeshData::`vftable'
};

class Panel
{
public: __thiscall ma::Panel::Panel(class ma::Panel const &)
public: __thiscall ma::Panel::Panel(unsigned int)
public: __thiscall ma::Panel::Panel(void)
public: virtual __thiscall ma::Panel::~Panel(void)
public: class ma::Panel & __thiscall ma::Panel::operator=(class ma::Panel const &)
public: bool __thiscall ma::Panel::init(class Interface *,struct HINSTANCE__ *,char *,bool)
public: void __thiscall ma::Panel::reset(void)
public: void __thiscall ma::Panel::setID(unsigned int)
protected: virtual int __stdcall ma::Panel::callBack(struct HWND__ *,unsigned int,unsigned int,long)
protected: virtual void __thiscall ma::Panel::onDestroy(void)
protected: virtual void __thiscall ma::Panel::onInit(void)
private: static int __stdcall ma::Panel::panelProc(struct HWND__ *,unsigned int,unsigned int,long)
const ma::Panel::`vftable'
};

class PointHelper
{
public: __thiscall ma::PointHelper::PointHelper(class ma::PointHelper const &)
public: __thiscall ma::PointHelper::PointHelper(void)
public: __thiscall ma::PointHelper::~PointHelper(void)
public: class ma::PointHelper & __thiscall ma::PointHelper::operator=(class ma::PointHelper const &)
public: void __thiscall ma::PointHelper::showAxis(bool)
protected: virtual bool __thiscall ma::PointHelper::isValid(class INode *)
protected: virtual class Object * __thiscall ma::PointHelper::createObject(void)
const ma::PointHelper::`vftable'
};

class ProgressBar
{
public: __thiscall ma::ProgressBar::ProgressBar(class ma::ProgressBar const &)
public: __thiscall ma::ProgressBar::ProgressBar(void)
public: virtual __thiscall ma::ProgressBar::~ProgressBar(void)
public: class ma::ProgressBar & __thiscall ma::ProgressBar::operator=(class ma::ProgressBar const &)
public: bool __thiscall ma::ProgressBar::isCancel(void)
public: bool __thiscall ma::ProgressBar::start(bool)
public: bool __thiscall ma::ProgressBar::step(void)
public: bool __thiscall ma::ProgressBar::update(int)
public: int __thiscall ma::ProgressBar::calcPercent(int)
public: static unsigned long __stdcall ma::ProgressBar::callback(void *)
public: void __thiscall ma::ProgressBar::end(void)
public: void __thiscall ma::ProgressBar::setRange(int,int,int)
public: void __thiscall ma::ProgressBar::setShowingPercent(bool)
public: void __thiscall ma::ProgressBar::setTitle(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const ma::ProgressBar::`vftable'
};

class SplineShapeData
{
	class Primitive
	{
	public: __thiscall ma::SplineShapeData::Primitive::Primitive(class ma::SplineShapeData::Primitive const &)
	public: __thiscall ma::SplineShapeData::Primitive::Primitive(int,int)
	public: __thiscall ma::SplineShapeData::Primitive::Primitive(void)
	public: class ma::SplineShapeData::Primitive & __thiscall ma::SplineShapeData::Primitive::operator=(class ma::SplineShapeData::Primitive const &)
	public: class std::vector<class ma::SplineShapeData::Primitive,class std::allocator<class ma::SplineShapeData::Primitive> > & __thiscall ma::SplineShapeData::primitiveArray(void)
	public: int & __thiscall ma::SplineShapeData::Primitive::i0(void)
	public: int & __thiscall ma::SplineShapeData::Primitive::i1(void)
	public: int & __thiscall ma::SplineShapeData::Primitive::index(int)
	public: virtual __thiscall ma::SplineShapeData::Primitive::~Primitive(void)
	};

	class Spline
	{
	public: __thiscall ma::SplineShapeData::Spline::Spline(class ma::SplineShapeData::Spline const &)
	public: __thiscall ma::SplineShapeData::Spline::Spline(void)
	public: virtual __thiscall ma::SplineShapeData::Spline::~Spline(void)
	public: class ma::SplineShapeData::Spline & __thiscall ma::SplineShapeData::Spline::operator=(class ma::SplineShapeData::Spline const &)
	public: bool __thiscall ma::SplineShapeData::Spline::isClosed(void)
	public: class std::vector<class ma::SplineShapeData::Spline,class std::allocator<class ma::SplineShapeData::Spline> > & __thiscall ma::SplineShapeData::splines(void)
	public: class std::vector<class ma::SplineShapeData::Vertex,class std::allocator<class ma::SplineShapeData::Vertex> > & __thiscall ma::SplineShapeData::Spline::vertexes(void)
	public: void __thiscall ma::SplineShapeData::Spline::setClosed(bool)
	};

	class Vertex
	{
	public: __thiscall ma::SplineShapeData::Vertex::Vertex(class Point3 const &)
	public: __thiscall ma::SplineShapeData::Vertex::Vertex(class ma::SplineShapeData::Vertex const &)
	public: __thiscall ma::SplineShapeData::Vertex::Vertex(void)
	public: virtual __thiscall ma::SplineShapeData::Vertex::~Vertex(void)
	public: class ma::SplineShapeData::Vertex & __thiscall ma::SplineShapeData::Vertex::operator=(class ma::SplineShapeData::Vertex const &)
	public: bool __thiscall ma::SplineShapeData::Vertex::operator<(class ma::SplineShapeData::Vertex const &)const 
	public: class Point3 & __thiscall ma::SplineShapeData::Vertex::inputVector(void)
	public: class Point3 & __thiscall ma::SplineShapeData::Vertex::outputVector(void)
	public: class Point3 & __thiscall ma::SplineShapeData::Vertex::position(void)
	public: int & __thiscall ma::SplineShapeData::Vertex::lineType(void)
	public: int & __thiscall ma::SplineShapeData::Vertex::pointType(void)
	public: unsigned short & __thiscall ma::SplineShapeData::Vertex::materialID(void)
	public: void __thiscall ma::SplineShapeData::Vertex::transform(class Matrix3 &)
	};

public: __thiscall ma::SplineShapeData::SplineShapeData(class ma::SplineShapeData const &)
public: __thiscall ma::SplineShapeData::SplineShapeData(void)
public: virtual __thiscall ma::SplineShapeData::~SplineShapeData(void)
public: class ma::SplineShapeData & __thiscall ma::SplineShapeData::operator=(class ma::SplineShapeData const &)
public: bool __thiscall ma::SplineShapeData::extractPrimitives(class BitArray &,class ma::SplineShapeData &)
public: bool __thiscall ma::SplineShapeData::init(class INode *)
public: bool __thiscall ma::SplineShapeData::isInitialized(void)
public: class INode * __thiscall ma::SplineShapeData::getINode(void)
public: class Mtl * __thiscall ma::SplineShapeData::material(void)
public: class std::vector<class ma::SplineShapeData::Vertex,class std::allocator<class ma::SplineShapeData::Vertex> > & __thiscall ma::SplineShapeData::vertexArray(void)
public: void __thiscall ma::SplineShapeData::reset(void)
public: void __thiscall ma::SplineShapeData::transform(class Matrix3 &)
private: bool __thiscall ma::SplineShapeData::buildData(void)
const ma::SplineShapeData::Primitive::`vftable'
const ma::SplineShapeData::Spline::`vftable'
const ma::SplineShapeData::Vertex::`vftable'
const ma::SplineShapeData::`vftable'
};

class StdMaterialData
{
public: __thiscall ma::StdMaterialData::StdMaterialData(class ma::StdMaterialData const &)
public: __thiscall ma::StdMaterialData::StdMaterialData(void)
public: virtual __thiscall ma::StdMaterialData::~StdMaterialData(void)
public: class ma::StdMaterialData & __thiscall ma::StdMaterialData::operator=(class ma::StdMaterialData const &)
public: bool __thiscall ma::StdMaterialData::isTwoSided(void)
public: bool __thiscall ma::StdMaterialData::isWireframe(void)
public: class Color & __thiscall ma::StdMaterialData::getAmbient(void)
public: class Color & __thiscall ma::StdMaterialData::getDiffuse(void)
public: class Color & __thiscall ma::StdMaterialData::getEmissive(void)
public: class Color & __thiscall ma::StdMaterialData::getSpecular(void)
public: class Color __thiscall ma::StdMaterialData::getSpecularWithSpecLevel(void)
public: class ma::CMapData * __thiscall ma::StdMaterialData::getMapData(int)
public: float __thiscall ma::StdMaterialData::getGlossiness(void)
public: float __thiscall ma::StdMaterialData::getOpacity(void)
public: float __thiscall ma::StdMaterialData::getPower(void)
public: float __thiscall ma::StdMaterialData::getSpecularLevel(void)
public: static bool __cdecl ma::StdMaterialData::isValid(class Mtl *)
public: virtual bool __thiscall ma::StdMaterialData::init(class Mtl *)
public: virtual enum ma::MaterialData::Type __thiscall ma::StdMaterialData::type(void)
public: virtual void __thiscall ma::StdMaterialData::reset(void)
const ma::StdMaterialData::`vftable'
};

class StringTrack
{
public: __thiscall ma::StringTrack::StringTrack(class ma::StringTrack const &)
public: __thiscall ma::StringTrack::StringTrack(void)
public: virtual __thiscall ma::StringTrack::~StringTrack(void)
public: class ma::StringTrack & __thiscall ma::StringTrack::operator=(class ma::StringTrack const &)
public: bool __thiscall ma::StringTrack::init(class DefNoteTrack *)
public: class std::map<int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<int>,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > & __thiscall ma::StringTrack::getKeys(void)
public: virtual enum ma::Track::Type __thiscall ma::StringTrack::type(void)
public: void __thiscall ma::StringTrack::reset(void)
const ma::StringTrack::`vftable'
};

class TCBFloatTrack
{
public: __thiscall ma::TCBFloatTrack::TCBFloatTrack(class ma::TCBFloatTrack const &)
public: __thiscall ma::TCBFloatTrack::TCBFloatTrack(void)
public: virtual __thiscall ma::TCBFloatTrack::~TCBFloatTrack(void)
public: class ma::TCBFloatTrack & __thiscall ma::TCBFloatTrack::operator=(class ma::TCBFloatTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::TCBFloatTrack::type(void)
const ma::TCBFloatTrack::`vftable'{for `ma::Track'}
const ma::TCBFloatTrack::`vftable'{for `ma::TrackValue<class ITCBFloatKey>'}
};

class TCBPoint3Track
{
public: __thiscall ma::TCBPoint3Track::TCBPoint3Track(class ma::TCBPoint3Track const &)
public: __thiscall ma::TCBPoint3Track::TCBPoint3Track(void)
public: virtual __thiscall ma::TCBPoint3Track::~TCBPoint3Track(void)
public: class ma::TCBPoint3Track & __thiscall ma::TCBPoint3Track::operator=(class ma::TCBPoint3Track const &)
public: virtual enum ma::Track::Type __thiscall ma::TCBPoint3Track::type(void)
const ma::TCBPoint3Track::`vftable'{for `ma::Track'}
const ma::TCBPoint3Track::`vftable'{for `ma::TrackValue<class ITCBPoint3Key>'}
};

class TCBRotationTrack
{
public: __thiscall ma::TCBRotationTrack::TCBRotationTrack(class ma::TCBRotationTrack const &)
public: __thiscall ma::TCBRotationTrack::TCBRotationTrack(void)
public: virtual __thiscall ma::TCBRotationTrack::~TCBRotationTrack(void)
public: class ma::TCBRotationTrack & __thiscall ma::TCBRotationTrack::operator=(class ma::TCBRotationTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::TCBRotationTrack::type(void)
const ma::TCBRotationTrack::`vftable'{for `ma::Track'}
const ma::TCBRotationTrack::`vftable'{for `ma::TrackValue<class ITCBRotKey>'}
};

class TCBScaleTrack
{
public: __thiscall ma::TCBScaleTrack::TCBScaleTrack(class ma::TCBScaleTrack const &)
public: __thiscall ma::TCBScaleTrack::TCBScaleTrack(void)
public: virtual __thiscall ma::TCBScaleTrack::~TCBScaleTrack(void)
public: class ma::TCBScaleTrack & __thiscall ma::TCBScaleTrack::operator=(class ma::TCBScaleTrack const &)
public: virtual enum ma::Track::Type __thiscall ma::TCBScaleTrack::type(void)
const ma::TCBScaleTrack::`vftable'{for `ma::Track'}
const ma::TCBScaleTrack::`vftable'{for `ma::TrackValue<class ITCBScaleKey>'}
};

class Track
{
public: __thiscall ma::Track::Track(class ma::Track const &)
public: __thiscall ma::Track::Track(void)
public: virtual __thiscall ma::Track::~Track(void)
public: class ma::Track & __thiscall ma::Track::operator=(class ma::Track const &)
public: virtual enum ma::Track::Type __thiscall ma::Track::type(void)
const ma::Track::`vftable'
};

class ViewportDraw
{
public: __thiscall ma::ViewportDraw::ViewportDraw(class ma::ViewportDraw const &)
public: __thiscall ma::ViewportDraw::ViewportDraw(void)
public: virtual __thiscall ma::ViewportDraw::~ViewportDraw(void)
public: class ma::ViewportDraw & __thiscall ma::ViewportDraw::operator=(class ma::ViewportDraw const &)
public: bool __thiscall ma::ViewportDraw::empty(void)
public: virtual int __thiscall ma::ViewportDraw::Foreground(void)
public: virtual void __thiscall ma::ViewportDraw::Display(int,class ViewExp *,int)
public: virtual void __thiscall ma::ViewportDraw::GetViewportRect(int,class ViewExp *,class Box2 *)
public: void __thiscall ma::ViewportDraw::addLine(class std::vector<class Point3,class std::allocator<class Point3> > const &)
public: void __thiscall ma::ViewportDraw::addMarker(class Point3 const &)
public: void __thiscall ma::ViewportDraw::addText(struct ma::ViewportDraw::Text const &)
public: void __thiscall ma::ViewportDraw::clear(void)
public: void __thiscall ma::ViewportDraw::off(void)
public: void __thiscall ma::ViewportDraw::on(void)
public: void __thiscall ma::ViewportDraw::refresh(void)
const ma::ViewportDraw::`vftable'
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

}		/// namespace ma

#endif

