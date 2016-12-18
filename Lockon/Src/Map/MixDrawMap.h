#ifndef MIXDRAWMAP_H_
#define MIXDRAWMAP_H_

class MixDrawMap
{
public: virtual __thiscall MixDrawMap::~MixDrawMap(void)
public: class MixDrawMap & __thiscall MixDrawMap::operator=(class MixDrawMap const &)
public: class MapS::Rect const & __thiscall MixDrawMap::getWindowRect(void)const 
public: __thiscall MixDrawMap::MixDrawMap(class MixDrawMap const &)
public: __thiscall MixDrawMap::MixDrawMap(void)
public: class MapS::Rect const & __thiscall MixDrawMap::getMapBorder(void)const 
public: class MapS::Rect const & __thiscall MixDrawMap::getMapRect(void)const 
public: static class MixDrawMap * __cdecl MixDrawMap::getGlobal(void)
public: virtual bool __thiscall MixDrawMap::findLandObj(struct IMixDrawMap::FindInfo const &,struct IMixDrawMap::LandObjInfo &)
public: virtual bool __thiscall MixDrawMap::findLandObj(unsigned long,float &,float &)
public: virtual bool __thiscall MixDrawMap::isSea(float,float)
public: virtual bool __thiscall MixDrawMap::isTerrain(float,float)
public: virtual bool __thiscall MixDrawMap::shiftMap(float const &,float const &)
public: virtual class IMapObjInfo * __thiscall MixDrawMap::findClosestObject(struct IMixDrawMap::FindInfo const &,struct IMixDrawMap::ClosestInfo &)
public: virtual class IMapOptions * __thiscall MixDrawMap::getIMapOptions(void)
public: virtual class ITerritoryManager * __thiscall MixDrawMap::getITerritoryManager(void)
public: virtual class SurfInfo * __thiscall MixDrawMap::findLandInfo(struct IMixDrawMap::FindInfo const &,float const &,float const &)
public: virtual class Vector3 __thiscall MixDrawMap::getBackGroungColor(void)
public: virtual void __thiscall MixDrawMap::draw(void)
public: virtual void __thiscall MixDrawMap::getLandHeight(float const &,float const &,float &)
public: virtual void __thiscall MixDrawMap::getMapBorder(float &,float &,float &,float &)
public: virtual void __thiscall MixDrawMap::getMapRect(float &,float &,float &,float &)
public: virtual void __thiscall MixDrawMap::getWindowRect(int &,int &,int &,int &)
public: virtual void __thiscall MixDrawMap::map2Window(class E3::Vector &)
public: virtual void __thiscall MixDrawMap::map2Window(float &,float &)
public: virtual void __thiscall MixDrawMap::setMapBorder(float const &,float const &,float const &,float const &)
public: virtual void __thiscall MixDrawMap::setMapOptions(class IMapOptions *)
public: virtual void __thiscall MixDrawMap::setMapRect(float const &,float const &,float const &,float const &)
public: virtual void __thiscall MixDrawMap::setMapRectToDefault(void)
public: virtual void __thiscall MixDrawMap::setWindowRect(int const &,int const &,int const &,int const &)
public: virtual void __thiscall MixDrawMap::window2Map(class E3::Vector &)
public: virtual void __thiscall MixDrawMap::window2Map(float &,float &)
public: virtual void __thiscall MixDrawMap::zoomIn(float const &,float const &,float const &)
public: virtual void __thiscall MixDrawMap::zoomOut(float const &,float const &,float const &)
public: virtual void __thiscall MixDrawMap::zoomWindow(float const &,float const &,float const &,float const &)
protected: bool __thiscall MixDrawMap::checkMapWindow(class MapS::Rect &)
protected: bool __thiscall MixDrawMap::zoomInc(class E3::Vector &,float const &)
protected: void __thiscall MixDrawMap::initialize(void)
const MixDrawMap::`vftable'

protected: static class MapS::Rect MixDrawMap::mapRect
};

#endif

