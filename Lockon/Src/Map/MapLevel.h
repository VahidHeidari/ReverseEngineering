#ifndef MAPLEVEL_H_
#define MAPLEVEL_H_

class MapLevel
{
public: __thiscall MapLevel::MapLevel(class MapLevel const &)
public: __thiscall MapLevel::MapLevel(void)
public: virtual __thiscall MapLevel::~MapLevel(void)
public: class MapLevel & __thiscall MapLevel::operator=(class MapLevel const &)
public: static int __cdecl MapLevel::getGlobalAttribId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall MapLevel::getObjInfo(class IMapObjInfo *,struct IMapLevel::ObjInfo &)
public: virtual class IMapObjInfo * __thiscall MapLevel::createMapObj(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class IMapObjInfo * __thiscall MapLevel::findObj(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,double const &,double const &)
public: virtual class IMapObjInfo * __thiscall MapLevel::findObj(struct IMapLevel::FindInfo const &,struct IMapLevel::ClosestInfo &)
public: virtual int __thiscall MapLevel::getAttribId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual int const __thiscall MapLevel::getPictureId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall MapLevel::addPicture(class IMapObjInfo *,struct IMapPictureImage *)
public: virtual void __thiscall MapLevel::addPolyline(class IMapObjInfo *,struct IMapPolyline *,int,int)
public: virtual void __thiscall MapLevel::addText(class IMapObjInfo *,struct IMapText *)
public: virtual void __thiscall MapLevel::destroyMapObj(class IMapObjInfo *)
public: virtual void __thiscall MapLevel::filterCreated(class IMapObjInfo *)
public: virtual void __thiscall MapLevel::getFiltered(class IMapFilter *,class std::list<class IMapObjInfo *,class std::allocator<class IMapObjInfo *> > &)
public: virtual void __thiscall MapLevel::removeImage(struct IMapImage *)
public: virtual void __thiscall MapLevel::setFilter(class IMapFilter *,bool)
public: virtual void __thiscall MapLevel::setLastDraw(class IMapObjInfo *)
public: virtual void __thiscall MapLevel::update(struct IMapPictureImage *)
public: virtual void __thiscall MapLevel::update(struct IMapPolyline *,int)
public: virtual void __thiscall MapLevel::update(struct IMapText *)
public: void __thiscall MapLevel::readAirfileds(void)
protected: class DrawFeature * __thiscall MapLevel::convertPicture(struct IMapPictureImage *)
protected: void __thiscall MapLevel::registerImage(struct IMapImage *,struct MapLevel::ImageInfo *)
const MapLevel::`vftable'
};

#endif

