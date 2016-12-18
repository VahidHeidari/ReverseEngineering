#ifndef SURFINFO_H_
#define SURFINFO_H_

class SurfInfo
{
public: __thiscall SurfInfo::SurfInfo(class E3::Vector const &,class E3::Vector const &,float const &,int)
public: __thiscall SurfInfo::SurfInfo(class SurfInfo const &)
public: virtual __thiscall SurfInfo::~SurfInfo(void)
public: class SurfInfo & __thiscall SurfInfo::operator=(class SurfInfo const &)
public: class E3::Vector __thiscall SurfInfo::getSurfPoint(long const &,long const &)
public: int __thiscall SurfInfo::getInfo(long const &)
public: int __thiscall SurfInfo::getInfo(long const &,long const &)
public: int __thiscall SurfInfo::getInfo(struct SurfInfo::Point const &)
public: long __thiscall SurfInfo::getSizeX(void)
public: long __thiscall SurfInfo::getSizeZ(void)
public: virtual bool __thiscall SurfInfo::isValid(int)
public: virtual bool __thiscall SurfInfo::isValid(long const &,long const &)
public: void __thiscall SurfInfo::findValid(long const &,long const &,long const &,class std::list<struct SurfInfo::Point,class std::allocator<struct SurfInfo::Point> > &)
public: void __thiscall SurfInfo::setInfo(long const &,int)
public: void __thiscall SurfInfo::setInfo(long const &,long const &,int)
public: void __thiscall SurfInfo::setInfo(struct SurfInfo::Point const &,int)
const SurfInfo::`vftable'
};

#endif

