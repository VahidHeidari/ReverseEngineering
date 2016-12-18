#ifndef EDTERRAIN_H_
#define EDTERRAIN_H_

`string'
`string'

int nEdTerrain

class E3::Vector __cdecl GetRegionPosition(struct intpoint)
class E3::Vector __cdecl GetSquarePosition(struct intpoint)
class ILandTexturesFile * __cdecl CreateLandTexturesFile(void)
class ObjectTypeLoadManager * __cdecl CreateObjectTypeLoadManager(class landscape_old::lSurface *,char const *,char const *,char const *)
class lLandRoadManager * __cdecl CreateLandRoadManager(void)
class lTerraDispatch * __cdecl CreateTerraDispatch(void)
class lTerraDispatch * __cdecl GetTerraDispatch(void)
struct SemanticDef * __cdecl GetSemanticDecl(char const *)
struct SemanticDef * __cdecl GetSemanticDecl(int)
struct SemanticDef * __cdecl GetSemanticList(void)
struct intpoint __cdecl GetAbsoluteRegion(float,float,class E3::Vector *)
struct intpoint __cdecl GetAbsoluteSquare(float,float,class E3::Vector *)
struct intpoint __cdecl GetRegion(float,float,class E3::Vector &)
struct intpoint __cdecl GetSquare(float,float,class E3::Vector &)
struct intpoint __cdecl Neighbour(struct intpoint,short)
void __cdecl GetRegion(float,float,int &,int &,class E3::Vector &)
void __cdecl GetSquare(float,float,int &,int &,class E3::Vector &)
void __cdecl SetTerraDispatch(class lTerraDispatch *)
void __cdecl lTerraPositioning(enum TYPE_POSITINING,class cPosition &,class E3::Vector const &,float,class Box const &)
int __cdecl GetLevelSize(int)
int __cdecl GetSemanticPrior(int)
int __cdecl GetSemanticType(char const *)
int __cdecl fnEdTerrain(void)

#endif

