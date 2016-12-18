#ifndef TERRAIN_H_
#define TERRAIN_H_

char * ROAD_TEXTURE_PATH
int ROAD_TEXTURE_PATH_LENGTH
class lRoadManager * pRoadManager
class lRoadManagerImpl theRoadManager
class lRunTimeLoader scenePreloader

bool __cdecl MyFillet(class E3::Vector,class E3::Vector,class E3::Vector,class E3::Vector,float,class FRoadSegment *,float &,float &)
bool __cdecl ReadRailStayPointsFromFile(struct _iobuf *)
class FRoad * __cdecl CreatePathConnection(class E3::Vector,class E3::Vector,class E3::Vector,class E3::Vector)
class FRoad * __cdecl GetPath(class E3::Vector *,class E3::Vector *,float,class E3::Vector *,class E3::Vector *)
class FRoad * __cdecl GetRailPath(class E3::Vector *,class E3::Vector *,bool)
class FRoad * __cdecl JoinRoads(class FRoad *,class FRoad *)
class FRoadSegment * __cdecl Offset(class FRoad *,unsigned short,float,unsigned short,float,float,int &,int)
class FRoadSegment * __cdecl ThroughCrossWay(int,float,int,float,int,int &)
class FRoadSegment * __cdecl ThroughRailwaySwitchWay(int,float,int,float,int,int &)
float __cdecl GetRailGraphPath(int,int,unsigned short *,unsigned short &,int)
float __cdecl GetRoadPath(int,int,unsigned short *,unsigned short &,int)

#endif

