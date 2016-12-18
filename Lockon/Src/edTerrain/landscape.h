#ifndef LANDSCAPE_H_
#define LANDSCAPE_H_

namespace landscape
{

class landscape::lSurface * __cdecl landscape::CreateLandSurface(void)
class landscape::lSurface * __cdecl landscape::GetLandSurface(void)
void __cdecl landscape::SetLandSurface(class landscape::lSurface *)

class lPointOnSurface
{
public: __thiscall landscape::lPointOnSurface::lPointOnSurface(class landscape::lPointOnSurface const &)
public: __thiscall landscape::lPointOnSurface::lPointOnSurface(void)
public: __thiscall landscape::lPointOnSurface::operator class E3::Vector const &(void)
public: class E3::Vector __thiscall landscape::lPointOnSurface::operator+(class E3::Vector const &)
public: class E3::Vector __thiscall landscape::lPointOnSurface::operator-(class E3::Vector const &)
public: class landscape::lPointOnSurface & __thiscall landscape::lPointOnSurface::operator+=(class E3::Vector const &)
public: class landscape::lPointOnSurface & __thiscall landscape::lPointOnSurface::operator-=(class E3::Vector const &)
public: class landscape::lPointOnSurface & __thiscall landscape::lPointOnSurface::operator=(class E3::Vector const &)
public: class landscape::lPointOnSurface & __thiscall landscape::lPointOnSurface::operator=(class landscape::lPointOnSurface const &)
public: bool __thiscall landscape::lPointOnSurface::IsOnRoad(void)
public: bool __thiscall landscape::lPointOnSurface::IsOnRunway(void)
public: bool __thiscall landscape::lPointOnSurface::IsOnWater(void)
public: bool __thiscall landscape::lPointOnSurface::IsShallowWater(void)
public: bool __thiscall landscape::lPointOnSurface::isTypeSurfaceWater(void)
public: float __thiscall landscape::lPointOnSurface::getHeight(void)
public: static void __cdecl landscape::lPointOnSurface::BuildSemanticBmp(class Box &,class math::matrixMN<struct math::t_rgb<unsigned char> > &)
public: static void __cdecl landscape::lPointOnSurface::BuildSemanticBmp(class Box &,class math::matrixMN<unsigned char> &)
public: unsigned long __thiscall landscape::lPointOnSurface::getTypeSurface(void)
public: void __thiscall landscape::lPointOnSurface::getNormal(class E3::Vector &)
public: void __thiscall landscape::lPointOnSurface::getPoint(class E3::Vector &)const 
public: void __thiscall landscape::lPointOnSurface::set(float,float)
private: void __thiscall landscape::lPointOnSurface::CheckSquare(void)
private: void __thiscall landscape::lPointOnSurface::FindFace(void)
private: void __thiscall landscape::lPointOnSurface::GetMath(void)
private: void __thiscall landscape::lPointOnSurface::Invalid(void)
};

class Square
{
public: __thiscall landscape::Square::Square(struct landscape::Square const &)
public: __thiscall landscape::Square::Square(void)
public: __thiscall landscape::Square::~Square(void)
public: struct landscape::Square & __thiscall landscape::Square::operator=(struct landscape::Square const &)
public: bool __thiscall landscape::Square::isInTrg(float,float,unsigned long)
public: bool __thiscall landscape::Square::match(struct landscape::Square &)
public: bool __thiscall landscape::Square::segmentFaceIntersect(class E3::Vector const &,class E3::Vector const &,unsigned long,class E3::Vector *)
public: bool __thiscall landscape::Square::segmentSquareIntersect(class E3::Vector const &,class E3::Vector const &,struct landscape::Square::FaceNeighbour::faceref &,class E3::Vector *)
public: char const * __thiscall landscape::Square::getFaceSemantic(int)
public: class E3::Vector * __thiscall landscape::Square::getNorms(void)
public: class E3::Vector * __thiscall landscape::Square::getVrts(void)
public: float __thiscall landscape::Square::getHeight(float,float)
public: float __thiscall landscape::Square::getHeight(unsigned long,float,float)
public: int __thiscall landscape::Square::envelopeSquare(class E3::Vector const &,class E3::Vector const &,class E3::Vector *,int,struct landscape::Square::FaceNeighbour::faceref &)
public: int __thiscall landscape::Square::getNumFaces(int)
public: int __thiscall landscape::Square::getNumFaces(void)
public: int __thiscall landscape::Square::getNumParts(void)
public: int __thiscall landscape::Square::getNumVrts(int)
public: short __thiscall landscape::Square::segmentSideOut(class E3::Vector const &,class E3::Vector const &,unsigned long,class E3::Vector *)
public: struct landscape::Square::FaceNeighbour * __thiscall landscape::Square::getNeighbour(void)
public: struct landscape::Square::Part * __thiscall landscape::Square::getPart(int)
public: struct landscape::Square::SideBoundFaces * __thiscall landscape::Square::getBoundFaces(int)
public: struct ltv2V * __thiscall landscape::Square::getTVerts(void)
public: union li3V * __thiscall landscape::Square::getFaces(void)
public: unsigned long * __thiscall landscape::Square::getTypes(void)
public: unsigned long __thiscall landscape::Square::findTrg(float,float)
public: unsigned long __thiscall landscape::Square::findTrg(unsigned long,float,float)
public: unsigned long __thiscall landscape::Square::getFace(struct landscape::Square::FaceNeighbour::faceref &)
public: void __thiscall landscape::Square::CreateNeighbourInfo(class misc::mmf_write &,float)
public: void __thiscall landscape::Square::FaceNeighbour::faceref::FindNeighbour(__int16,__int16,union li3V *,int,int,class E3::Vector *,class std::map<float,struct landscape::Square::sidefacedata,struct std::less<float>,class std::allocator<struct landscape::Square::sidefacedata> > *)
public: void __thiscall landscape::Square::Init(int,class std::list<struct geometry::GeometrySource *,class std::allocator<struct geometry::GeometrySource *> > &,class std::list<struct geometry::GeometryItem *,class std::allocator<struct geometry::GeometryItem *> > &,class misc::mmf_write &)
public: void __thiscall landscape::Square::Init(struct landscape::Square &,class std::map<struct material::Material *,struct material::Material *,struct material::Pred_MaterialPointers,class std::allocator<struct material::Material *> > &,class misc::mmf_write &)
public: void __thiscall landscape::Square::getFaceSpecs(unsigned long,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: void __thiscall landscape::Square::preload(void)
public: void __thiscall landscape::Square::setFaceNeighbours(struct landscape_old::LandscapeSquareSection::Square::FaceNeighbour *,int,class misc::mmf_write *)
public: void __thiscall landscape::Square::setFaceTypes(unsigned long *,int,class misc::mmf_write *)
public: void __thiscall landscape::Square::setSideBounds(int,struct landscape_old::LandscapeSquareSection::Square::SideBoundFaces *,class misc::mmf_write *)
};

class lSurfaceImpl
{
public: virtual __thiscall landscape::lSurfaceImpl::~lSurfaceImpl(void)
public: class landscape::lSurfaceImpl & __thiscall landscape::lSurfaceImpl::operator=(class landscape::lSurfaceImpl const &)
public: __thiscall landscape::lSurfaceImpl::lSurfaceImpl(class landscape::lSurfaceImpl const &)
public: __thiscall landscape::lSurfaceImpl::lSurfaceImpl(void)
public: class landscape::lSurface::lRegion & __thiscall landscape::lSurfaceImpl::LoadRegion(struct intpoint)
public: class landscape::lSurface::lShape * __thiscall landscape::lSurfaceImpl::CreateLShape(struct landscape::Square *)
public: class landscape::lSurface::lSquare & __thiscall landscape::lSurfaceImpl::LoadSquare(struct intpoint)
public: virtual bool __thiscall landscape::lSurfaceImpl::findClosest(class E3::Vector const &,class E3::Vector &,bool,float)
public: virtual bool __thiscall landscape::lSurfaceImpl::segmentIntersect(class E3::Vector const &,class E3::Vector const &,class E3::Vector *)
public: virtual class landscape::lSurface::lRegion & __thiscall landscape::lSurfaceImpl::GetRegion(struct intpoint)
public: virtual class landscape::lSurface::lSquare & __thiscall landscape::lSurfaceImpl::GetSquare(struct intpoint)
public: virtual float __thiscall landscape::lSurfaceImpl::getDirtyHeight(float,float,float)
public: virtual float __thiscall landscape::lSurfaceImpl::getDirtyHeight(struct intpoint,int)
public: virtual float __thiscall landscape::lSurfaceImpl::getHeight(float,float)
public: virtual int __thiscall landscape::lSurfaceImpl::envelopeSurface(class E3::Vector const &,class E3::Vector const &,class E3::Vector *,int)
public: virtual struct landscape::Square * __thiscall landscape::lSurfaceImpl::getSquare(struct intpoint,int)
public: virtual struct landscape::lSurfaceFile * __thiscall landscape::lSurfaceImpl::getSurfaceFile(void)
public: virtual unsigned long __thiscall landscape::lSurfaceImpl::getFaceType(float,float)
public: virtual void __thiscall landscape::lSurfaceImpl::Exit(void)
public: virtual void __thiscall landscape::lSurfaceImpl::GetSourceVersion(struct _FILETIME &)
public: virtual void __thiscall landscape::lSurfaceImpl::Init(class landscape::lSurfaceDataManager *,char const *)
public: virtual void __thiscall landscape::lSurfaceImpl::Release(void)
public: virtual void __thiscall landscape::lSurfaceImpl::getFaceId(float,float,unsigned long &,struct intpoint &)
public: virtual void __thiscall landscape::lSurfaceImpl::getFaceSpecs(float,float,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: virtual void __thiscall landscape::lSurfaceImpl::getFaceSpecs(struct intpoint,unsigned long,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: virtual void __thiscall landscape::lSurfaceImpl::getRegionsBound(struct intpoint &,struct intpoint &)
public: virtual void __thiscall landscape::lSurfaceImpl::getSquaresBound(struct intpoint &,struct intpoint &)
const landscape::lSurfaceImpl::`vftable'
};

class lSurfaceFile
{
public: __thiscall landscape::lSurfaceFile::lSurfaceFile(struct landscape::lSurfaceFile const &)
public: __thiscall landscape::lSurfaceFile::lSurfaceFile(void)
public: __thiscall landscape::lSurfaceFile::~lSurfaceFile(void)
public: struct landscape::lSurfaceFile & __thiscall landscape::lSurfaceFile::operator=(struct landscape::lSurfaceFile const &)
public: bool __thiscall landscape::lSurfaceFile::IsSea(class Box const &)
public: class misc::ptr<struct landscape::Square> * __thiscall landscape::lSurfaceFile::getSquareRef(struct intpoint,int)
public: float __thiscall landscape::lSurfaceFile::getSquareHeigth(struct intpoint,int)
public: static struct landscape::lSurfaceFile * __cdecl landscape::lSurfaceFile::Open(char const *,class misc::mmf &,struct _FILETIME &)
public: static void __cdecl landscape::lSurfaceFile::UpdateFile(char const *,char const *,class std::list<struct std::pair<struct landscape::SquareKey,struct landscape::Square *>,class std::allocator<struct std::pair<struct landscape::SquareKey,struct landscape::Square *> > > &,struct landscape::Square * * const,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class std::list<struct landscape::SquareKey,class std::allocator<struct landscape::SquareKey> > &)
public: struct intpoint __thiscall landscape::lSurfaceFile::getMaxSquare(void)
public: struct intpoint __thiscall landscape::lSurfaceFile::getMinSquare(void)
public: struct landscape::Square * __thiscall landscape::lSurfaceFile::AppendSquare(struct landscape::Square *,class std::list<struct landscape::Square *,class std::allocator<struct landscape::Square *> > &,class std::map<struct material::Material *,struct material::Material *,struct material::Pred_MaterialPointers,class std::allocator<struct material::Material *> > &,class misc::mmf_write &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: struct landscape::Square * __thiscall landscape::lSurfaceFile::getOffsideSquare(int)
public: struct landscape::Square * __thiscall landscape::lSurfaceFile::getSquare(struct intpoint,int)
public: void __thiscall landscape::lSurfaceFile::BuildHeigths(int,class misc::mmf_write &)
};

class lSurfaceDataManager
{
public: class landscape::lSurfaceDataManager & __thiscall landscape::lSurfaceDataManager::operator=(class landscape::lSurfaceDataManager const &)
public: __thiscall landscape::lSurfaceDataManager::lSurfaceDataManager(class landscape::lSurfaceDataManager const &)
public: __thiscall landscape::lSurfaceDataManager::lSurfaceDataManager(void)
const landscape::lSurfaceDataManager::`vftable'
};

class lSurface
{
	class lRegion
	{
	public: __thiscall landscape::lSurface::lRegion::lRegion(class landscape::lSurface::lRegion const &)
	public: __thiscall landscape::lSurface::lRegion::lRegion(void)
	public: virtual __thiscall landscape::lSurface::lRegion::~lRegion(void)
	public: class landscape::lSurface::lRegion & __thiscall landscape::lSurface::lRegion::operator=(class landscape::lSurface::lRegion const &)
	public: virtual void __thiscall landscape::lSurface::lRegion::Init(void)
	const landscape::lSurface::lRegion::`vftable'
	};

	class lShape
	{
	public: __thiscall landscape::lSurface::lShape::lShape(class landscape::lSurface::lShape const &)
	public: __thiscall landscape::lSurface::lShape::lShape(void)
	public: virtual __thiscall landscape::lSurface::lShape::~lShape(void)
	public: class landscape::lSurface::lShape & __thiscall landscape::lSurface::lShape::operator=(class landscape::lSurface::lShape const &)
	public: virtual unsigned long __thiscall landscape::lSurface::lShape::GetFaceSemantic(int)
	public: virtual void __thiscall landscape::lSurface::lShape::Init(void)
	const landscape::lSurface::lShape::`vftable'
	};

	class lSquare
	{
	public: __thiscall landscape::lSurface::lSquare::lSquare(class landscape::lSurface::lSquare const &)
	public: __thiscall landscape::lSurface::lSquare::lSquare(void)
	public: virtual __thiscall landscape::lSurface::lSquare::~lSquare(void)
	public: class landscape::lSurface::lSquare & __thiscall landscape::lSurface::lSquare::operator=(class landscape::lSurface::lSquare const &)
	public: class landscape::lSurface::lShape & __thiscall landscape::lSurface::lSquare::getShape0(void)
	public: virtual bool __thiscall landscape::lSurface::lSquare::IsPointOn(float,float,int)
	public: virtual void __thiscall landscape::lSurface::lSquare::Init(void)
	public: virtual void __thiscall landscape::lSurface::lSquare::InitSS(void)
	const landscape::lSurface::lSquare::`vftable'
	};

public: class landscape::lSurface & __thiscall landscape::lSurface::operator=(class landscape::lSurface const &)
public: __thiscall landscape::lSurface::lSurface(class landscape::lSurface const &)
public: __thiscall landscape::lSurface::lSurface(void)
const landscape::lSurface::`vftable'
};

}		/// namespace landscape

#endif

