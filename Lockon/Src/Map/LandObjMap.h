#ifndef LANDOBJMAP_H_
#define LANDOBJMAP_H_

class LandObjMap
{
public: __thiscall LandObjMap::LandObjMap(class LandObjMap const &)
public: __thiscall LandObjMap::LandObjMap(void)
public: __thiscall LandObjMap::~LandObjMap(void)
public: class LandObjMap & __thiscall LandObjMap::operator=(class LandObjMap const &)
public: bool __thiscall LandObjMap::findClosestObject(class E3::Vector const &,class MapDraw &,class MapS::Rect const &,class ObjTypeSetFilter *,struct LandObjMap::LandObjInfo &)
public: bool __thiscall LandObjMap::findLandObj(unsigned long,float &,float &)
public: static class SurfInfo * __cdecl LandObjMap::findLandInfo(class MapS::Rect const &,float const &)
public: virtual void __thiscall LandObjMap::draw(class MapDraw &,class MapS::Rect const &,class MapS::Rect const &,class ObjFilter *,int)
public: void __thiscall LandObjMap::getObjects(class MapDraw &,class MapS::Rect const &,class ObjTypeSetFilter *,class std::list<unsigned long,class std::allocator<unsigned long> > &)
protected: void __thiscall LandObjMap::buildDraw(class lLandObject * *,int,float const &)
protected: void __thiscall LandObjMap::clearTempObjects(void)
protected: void __thiscall LandObjMap::draw(class MapDraw &,class lLandObject * *,int)
protected: void __thiscall LandObjMap::drawAirdromes(class MapDraw &,class MapS::Rect const &,float)
protected: void __thiscall LandObjMap::drawLandObjects(class MapDraw &,class MapS::Rect const &,float,int,int,int)
protected: void __thiscall LandObjMap::drawRivers(class MapDraw &,class MapS::Rect const &,float)
protected: void __thiscall LandObjMap::flushBuilt(void)
const LandObjMap::`vftable'
};

#endif

