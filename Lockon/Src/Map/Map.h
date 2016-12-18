#ifndef MAP_H_
#define MAP_H_

bool __cdecl IsPointInPolygon(class E3::Vector const *,int,class E3::Vector const &)
bool __cdecl readString(struct _iobuf *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
class E3::Vector * __cdecl buildPoints(class MapS::Vector const *,int)
class MapS::Vector * __cdecl buildPoints(class E3::Vector const *,int)
double __cdecl distance(class E3::Vector const *,int,class E3::Vector const &,bool,class E3::Vector *)
void __cdecl safeAddObject(class MapObj *,class MapObjContainer &)

class Map
{
public: __thiscall Map::Map(class Map const &)
public: __thiscall Map::Map(void)
public: __thiscall Map::~Map(void)
public: class Map & __thiscall Map::operator=(class Map const &)
public: bool __thiscall Map::readELT(char const *)
public: bool __thiscall Map::readLakes(char const *)
public: bool __thiscall Map::readLand(char const *)
public: bool __thiscall Map::readRoads(char const *)
public: bool __thiscall Map::readSea(char const *)
public: bool __thiscall Map::readTowns(char const *)
public: bool const __thiscall Map::isNeedUpdate(void)const 
public: class MapObj * __thiscall Map::findClosestObject(class E3::Vector const &,class MapDraw &,double const &,class ObjFilter *)
public: static bool __cdecl Map::buildAirdromeObjects(class MapObjContainer &)
public: static bool __cdecl Map::buildObjects(char const *,unsigned int,enum eFeatureTypes,class MapObjContainer &)
public: static bool __cdecl Map::buildPictureObjects(char const *,unsigned int,enum ePictureId,enum eFeatureTypes,class MapObjContainer &)
public: static bool __cdecl Map::buildRiverObjects(char const *,class MapObjContainer &)
public: static bool __cdecl Map::buildRoadObjects(char const *,class MapObjContainer &)
public: static class std::list<struct Map::sAltitudeTexture *,class std::allocator<struct Map::sAltitudeTexture *> > * __cdecl Map::readAltitudeFiles(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float)
public: static class std::list<struct Map::sPointsData *,class std::allocator<struct Map::sPointsData *> > * __cdecl Map::readPoints(char const *)
public: static class std::list<struct Map::sTextData *,class std::allocator<struct Map::sTextData *> > * __cdecl Map::readTexts(char const *)
public: static class std::list<struct Map::sTrinanglesData *,class std::allocator<struct Map::sTrinanglesData *> > * __cdecl Map::readTrinagles(char const *,int)
public: static void __cdecl Map::buildConvexPolygonsObjects(char const *,class MapObjContainer &,unsigned int,int)
public: static void __cdecl Map::buildPolylineObjects(char const *,class MapObjContainer &,unsigned int)
public: static void __cdecl Map::getFiltered(class ObjFilter &,class MapObjContainer const &,class MapObjContainer &)
public: virtual void __thiscall Map::draw(class MapDraw &,class MapS::Rect const &,class MapS::Rect const &,class ObjFilter *,int)
public: void __thiscall Map::flushAltitudeTextures(void)
public: void __thiscall Map::getFiltered(class ObjFilter &,class MapObjContainer &)const 
public: void __thiscall Map::setAltitudeTextures(unsigned int,float,class std::list<struct Map::sAltitudeTexture *,class std::allocator<struct Map::sAltitudeTexture *> > &)
public: void __thiscall Map::showAltitude(class ObjFilter &)
public: void __thiscall Map::update(void)
public: void __thiscall Map::updatePriority(void)
public: void __thiscall Map::updated(void)
protected: static void __cdecl Map::buildRoadObjects(class RoadnetworkFile &,enum Map::RoadType,class MapObjContainer &)
protected: struct Map::sKey __thiscall Map::getKey(float,class E3::Vector const &)
protected: void __thiscall Map::setAltitudeTexture(class MapObj *,struct Map::sAltitudeTexture *)
const Map::`vftable'
};

#endif

