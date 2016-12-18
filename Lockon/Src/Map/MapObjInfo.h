#ifndef MAPOBJINFO_H_
#define MAPOBJINFO_H_

class MapObjInfo
{
public: __thiscall MapObjInfo::MapObjInfo(class MapObjInfo const &)
public: __thiscall MapObjInfo::MapObjInfo(void)
public: class MapObjInfo & __thiscall MapObjInfo::operator=(class MapObjInfo const &)
public: virtual bool __thiscall MapObjInfo::addAttrib(class IMapInfoAttrib *)
public: virtual bool __thiscall MapObjInfo::removeAttrib(class IMapInfoAttrib *)
public: virtual bool __thiscall MapObjInfo::removeAttrib(int)
public: virtual class IMapInfoAttrib * __thiscall MapObjInfo::findAttrib(int)
public: virtual class MapObj * __thiscall MapObjInfo::getObj(void)
public: virtual int __thiscall MapObjInfo::ref(void)
public: virtual int __thiscall MapObjInfo::unref(void)
public: virtual void __thiscall MapObjInfo::clearAttribs(void)
public: void __thiscall MapObjInfo::setObj(class MapObj *)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall MapObjInfo::getTypeName(void)
protected: virtual __thiscall MapObjInfo::~MapObjInfo(void)
protected: static class MapInfoManager * MapObjInfo::theMapInfoManager
const MapObjInfo::`vftable'{for `IMapObjInfo'}
const MapObjInfo::`vftable'{for `RefCounter'}
};

#endif

