#ifndef MAPSYSTEM_H_
#define MAPSYSTEM_H_

class MapSystem
{
public: __thiscall MapSystem::MapSystem(class MapSystem const &)
public: __thiscall MapSystem::MapSystem(void)
public: virtual __thiscall MapSystem::~MapSystem(void)
public: class MapSystem & __thiscall MapSystem::operator=(class MapSystem const &)
public: bool __thiscall MapSystem::addDrawLevel(class Map *,long)
public: bool __thiscall MapSystem::flushShapeList(class MapObj *)
public: bool __thiscall MapSystem::removeDraw(class MapObj *)
public: bool __thiscall MapSystem::removeDrawLevel(class Map *)
public: bool const __thiscall MapSystem::getDrawBaseLeve(void)const 
public: bool const __thiscall MapSystem::isNeedUpdate(void)const 
public: class LandObjMap * __thiscall MapSystem::getLandObjMap(void)
public: class Map & __thiscall MapSystem::getBaseLevel(void)
public: class MapDraw & __thiscall MapSystem::getMapDraw(void)
public: class MapLevel * __thiscall MapSystem::getMissionLevel(void)
public: class ObjByScaleFilter * __thiscall MapSystem::getScaleFilter(void)
public: class TerritoryManager * __thiscall MapSystem::getTerritoryManager(void)
public: enum MapSystem::AltitudeMode const __thiscall MapSystem::getAltitudeMode(void)const 
public: static bool __cdecl MapSystem::removeVerts(class gShapeObject *)
public: static class Graphics::RenderFont * __cdecl MapSystem::getMapFont(char const *,int,int)
public: static struct MapSystem::sVertsIndexes * __cdecl MapSystem::getVerts(class gShapeObject *)
public: static struct MapSystem::sVertsIndexes * __cdecl MapSystem::setVerts(class gShapeObject *,struct MapSystem::sVertsIndexes *)
public: struct MapSystem::sObjDrawInfo * __thiscall MapSystem::addDraw(class MapObj *)
public: struct MapSystem::sObjDrawInfo * __thiscall MapSystem::getDraw(class MapObj *)
public: virtual bool __thiscall MapSystem::getDrawTownNames(void)
public: virtual bool __thiscall MapSystem::initialize(void)
public: virtual bool __thiscall MapSystem::uninitialize(void)
public: virtual void __thiscall MapSystem::setDrawTownNames(bool)
public: void __thiscall MapSystem::draw(class MapS::Rect const &,class MapS::Rect const &,class ObjFilter *,bool,bool)
public: void __thiscall MapSystem::draw(int,int,int,int,int,int,int,int,class ObjFilter *)
public: void __thiscall MapSystem::setAltitudeMode(enum MapSystem::AltitudeMode)
public: void __thiscall MapSystem::setDrawBaseLevel(bool)
public: void __thiscall MapSystem::setFilter(class ObjFilter *)
public: void __thiscall MapSystem::update(void)
public: void __thiscall MapSystem::updated(void)
protected: void __thiscall MapSystem::DrawLand(class MapS::Rect const &,float,int)
protected: struct MapSystem::MapInfo * __thiscall MapSystem::findMapInfo(class Map *)
protected: static class std::vector<struct MapSystem::MapFontInfo,class std::allocator<struct MapSystem::MapFontInfo> > MapSystem::mapFontInfoList
protected: void __thiscall MapSystem::InitLand(void)
protected: void __thiscall MapSystem::addDrawLevel(struct MapSystem::MapInfo *)
protected: void __thiscall MapSystem::flushCache(void)
protected: void __thiscall MapSystem::updateDrawQueue(void)
const MapSystem::`vftable'

public: static bool MapSystem::ignoreDrawing
};

class MapSystem * globalMapSystem

#endif

