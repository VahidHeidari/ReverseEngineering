#ifndef LANDSCAPE_OLD_H_
#define LANDSCAPE_OLD_H_

namespace landscape_old
{

class landscape_old::lSurface * __cdecl landscape_old::CreateLandSurface(void)
class landscape_old::lSurface * __cdecl landscape_old::GetLandSurface(void)
void __cdecl landscape_old::GenerateSquareMipLevel(struct landscape_old::LandscapeSquareSection::Square *,struct landscape_old::LandscapeSquareSection::Square *,class misc::mmf_write &,float,int,bool)
void __cdecl landscape_old::ReindexFaces(struct landscape_old::LandscapeSquareSection::Square *,struct landscape_old::reindex *,int)
void __cdecl landscape_old::ReindexVertexes(struct landscape_old::LandscapeSquareSection::Square *,struct landscape_old::reindex *,int)
void __cdecl landscape_old::SetLandSurface(class landscape_old::lSurface *)

class
{
public: __thiscall landscape_old::lPointOnSurface::lPointOnSurface(class landscape_old::lPointOnSurface const &)
public: __thiscall landscape_old::lPointOnSurface::lPointOnSurface(class landscape_old::lSurface *)
public: __thiscall landscape_old::lPointOnSurface::lPointOnSurface(void)
public: __thiscall landscape_old::lPointOnSurface::operator class E3::Vector const &(void)
public: class E3::Vector __thiscall landscape_old::lPointOnSurface::operator+(class E3::Vector const &)
public: class E3::Vector __thiscall landscape_old::lPointOnSurface::operator-(class E3::Vector const &)
public: class landscape_old::lPointOnSurface & __thiscall landscape_old::lPointOnSurface::operator+=(class E3::Vector const &)
public: class landscape_old::lPointOnSurface & __thiscall landscape_old::lPointOnSurface::operator-=(class E3::Vector const &)
public: class landscape_old::lPointOnSurface & __thiscall landscape_old::lPointOnSurface::operator=(class E3::Vector const &)
public: class landscape_old::lPointOnSurface & __thiscall landscape_old::lPointOnSurface::operator=(class landscape_old::lPointOnSurface const &)
public: float __thiscall landscape_old::lPointOnSurface::getHeight(void)
public: bool __thiscall landscape_old::lPointOnSurface::IsOnWater(void)
public: unsigned long __thiscall landscape_old::lPointOnSurface::getTypeSurface(void)
public: void __thiscall landscape_old::lPointOnSurface::getNormal(class E3::Vector &)
public: void __thiscall landscape_old::lPointOnSurface::set(float,float)
private: void __thiscall landscape_old::lPointOnSurface::CheckSquare(void)
private: void __thiscall landscape_old::lPointOnSurface::FindFace(void)
private: void __thiscall landscape_old::lPointOnSurface::GetMath(void)
private: void __thiscall landscape_old::lPointOnSurface::Invalid(void)
};

class lSurfaceImpl
{
public: virtual __thiscall landscape_old::lSurfaceImpl::~lSurfaceImpl(void)
public: __thiscall landscape_old::lSurfaceImpl::lSurfaceImpl(class landscape_old::lSurfaceImpl const &)
public: __thiscall landscape_old::lSurfaceImpl::lSurfaceImpl(void)
public: class LandAreaFile & __thiscall landscape_old::lSurfaceImpl::GetLandAreaFile(void)
public: class landscape_old::lSurface::lRegion & __thiscall landscape_old::lSurfaceImpl::LoadRegion(struct intpoint)
public: class landscape_old::lSurface::lSquare & __thiscall landscape_old::lSurfaceImpl::LoadSquare(struct intpoint)
public: class landscape_old::lSurfaceImpl & __thiscall landscape_old::lSurfaceImpl::operator=(class landscape_old::lSurfaceImpl const &)
public: class misc::pIRefCounter<class landscape_old::lSurface::lShape> __thiscall landscape_old::lSurfaceImpl::getRegionTemplate(struct intpoint,int)
public: class misc::pIRefCounter<class landscape_old::lSurface::lShape> __thiscall landscape_old::lSurfaceImpl::getSquareTemplate(struct intpoint,int)
public: virtual bool __thiscall landscape_old::lSurfaceImpl::segmentIntersect(class E3::Vector const &,class E3::Vector const &,class E3::Vector *)
public: virtual class landscape_old::lSurface::lRegion & __thiscall landscape_old::lSurfaceImpl::GetRegion(struct intpoint)
public: virtual class landscape_old::lSurface::lSquare & __thiscall landscape_old::lSurfaceImpl::GetSquare(struct intpoint)
public: virtual float __thiscall landscape_old::lSurfaceImpl::getDirtyHeight(float,float,float)
public: virtual float __thiscall landscape_old::lSurfaceImpl::getHeight(float,float)
public: virtual int __thiscall landscape_old::lSurfaceImpl::envelopeSurface(class E3::Vector const &,class E3::Vector const &,class E3::Vector *,int)
public: virtual unsigned long __thiscall landscape_old::lSurfaceImpl::getFaceType(float,float)
public: virtual void __thiscall landscape_old::lSurfaceImpl::Exit(void)
public: virtual void __thiscall landscape_old::lSurfaceImpl::GetSourceVersion(struct _FILETIME &)
public: virtual void __thiscall landscape_old::lSurfaceImpl::Init(class landscape_old::lSurfaceDataManager *,char const *)
public: virtual void __thiscall landscape_old::lSurfaceImpl::Release(void)
public: virtual void __thiscall landscape_old::lSurfaceImpl::getFaceId(float,float,unsigned long &,struct intpoint &)
public: virtual void __thiscall landscape_old::lSurfaceImpl::getFaceSpecs(float,float,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: virtual void __thiscall landscape_old::lSurfaceImpl::getFaceSpecs(struct intpoint,unsigned long,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: virtual void __thiscall landscape_old::lSurfaceImpl::getRegionsBound(struct intpoint &,struct intpoint &)
public: virtual void __thiscall landscape_old::lSurfaceImpl::getSquaresBound(struct intpoint &,struct intpoint &)
const landscape_old::lSurfaceImpl::`vftable'
};

class LandscapeSquareSection
{
	class Square
	{
	public: __thiscall landscape_old::LandscapeSquareSection::Square::Square(struct landscape_old::LandscapeSquareSection::Square const &)
	public: __thiscall landscape_old::LandscapeSquareSection::Square::Square(void)
	public: struct landscape_old::LandscapeSquareSection::Square & __thiscall landscape_old::LandscapeSquareSection::Square::operator=(struct landscape_old::LandscapeSquareSection::Square const &)
	public: bool __thiscall landscape_old::LandscapeSquareSection::Square::isInTrg(float,float,unsigned long)
	public: bool __thiscall landscape_old::LandscapeSquareSection::Square::segmentFaceIntersect(class E3::Vector const &,class E3::Vector const &,unsigned long,class E3::Vector *)
	public: bool __thiscall landscape_old::LandscapeSquareSection::Square::segmentSquareIntersect(class E3::Vector const &,class E3::Vector const &,struct landscape_old::LandscapeSquareSection::Square::FaceNeighbour::faceref &,class E3::Vector *)
	public: class E3::Vector * __thiscall landscape_old::LandscapeSquareSection::Square::getNorms(void)
	public: class E3::Vector * __thiscall landscape_old::LandscapeSquareSection::Square::getSourceNorms(void)
	public: class E3::Vector * __thiscall landscape_old::LandscapeSquareSection::Square::getVrts(void)
	public: class E3::Vector __thiscall landscape_old::LandscapeSquareSection::Square::getNorm(int,int)
	public: class E3::Vector __thiscall landscape_old::LandscapeSquareSection::Square::getVert(int,int)
	public: float __thiscall landscape_old::LandscapeSquareSection::Square::getHeight(float,float)
	public: float __thiscall landscape_old::LandscapeSquareSection::Square::getHeight(unsigned long,float,float)
	public: int __thiscall landscape_old::LandscapeSquareSection::Square::envelopeSquare(class E3::Vector const &,class E3::Vector const &,class E3::Vector *,int,struct landscape_old::LandscapeSquareSection::Square::FaceNeighbour::faceref &)
	public: int __thiscall landscape_old::LandscapeSquareSection::Square::getNumFaces(int)
	public: int __thiscall landscape_old::LandscapeSquareSection::Square::getNumParts(void)
	public: int __thiscall landscape_old::LandscapeSquareSection::Square::getNumVrts(int)
	public: short __thiscall landscape_old::LandscapeSquareSection::Square::segmentSideOut(class E3::Vector const &,class E3::Vector const &,unsigned long,class E3::Vector *)
	public: struct landscape_old::LandscapeSquareSection::Square::FaceNeighbour * __thiscall landscape_old::LandscapeSquareSection::Square::getNeighbour(void)
	public: struct landscape_old::LandscapeSquareSection::Square::Part * __thiscall landscape_old::LandscapeSquareSection::Square::getPart(int)
	public: struct landscape_old::LandscapeSquareSection::Square::SideBoundFaces * __thiscall landscape_old::LandscapeSquareSection::Square::getBoundFaces(int)
	public: struct ltv2V * __thiscall landscape_old::LandscapeSquareSection::Square::getTVerts(void)
	public: struct ltv2V __thiscall landscape_old::LandscapeSquareSection::Square::getTVert(int,int)
	public: union li3V * __thiscall landscape_old::LandscapeSquareSection::Square::getFaces(void)
	public: union li3V __thiscall landscape_old::LandscapeSquareSection::Square::getFaceVert(int,int)
	public: unsigned long * __thiscall landscape_old::LandscapeSquareSection::Square::getTypes(void)
	public: unsigned long __thiscall landscape_old::LandscapeSquareSection::Square::findTrg(float,float)
	public: unsigned long __thiscall landscape_old::LandscapeSquareSection::Square::findTrg(unsigned long,float,float)
	public: unsigned long __thiscall landscape_old::LandscapeSquareSection::Square::getFace(struct landscape_old::LandscapeSquareSection::Square::FaceNeighbour::faceref &)
	public: void __thiscall landscape_old::LandscapeSquareSection::Square::getFaceSpecs(unsigned long,class E3::Vector &,class E3::Vector &,class E3::Vector &,class E3::Vector &)
	};

public: struct landscape_old::LandscapeSquareSection & __thiscall landscape_old::LandscapeSquareSection::operator=(struct landscape_old::LandscapeSquareSection const &)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall landscape_old::LandscapeSquareSection::getSquare(int)
};

class LandAreaFileHeader
{
public: struct landscape_old::LandAreaFileHeader & __thiscall landscape_old::LandAreaFileHeader::operator=(struct landscape_old::LandAreaFileHeader const &)
public: unsigned long & __thiscall landscape_old::LandAreaFileHeader::getRegionStandart(int,int)
public: unsigned long & __thiscall landscape_old::LandAreaFileHeader::getSquareStandart(int,int)
};


}		/// namespace landscape_old

#endif

