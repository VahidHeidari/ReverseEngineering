#ifndef FCROSSROAD_H_
#define FCROSSROAD_H_

class FCrossRoad
{
public: __thiscall FCrossRoad::FCrossRoad(void)
public: __thiscall FCrossRoad::~FCrossRoad(void)
public: class FCrossRoad & __thiscall FCrossRoad::operator=(class FCrossRoad const &)
public: bool __thiscall FCrossRoad::AlignPointToRailwaySwitch(class E3::Vector &,class E3::Vector &,int)
public: bool __thiscall FCrossRoad::IsDisplayable(void)
public: class cPosition * __thiscall FCrossRoad::GetPos(void)
public: int __thiscall FCrossRoad::CheckFlag(unsigned int)
public: int __thiscall FCrossRoad::CloseShelterDoor(int,int)
public: int __thiscall FCrossRoad::GetNumRoadsInCross(void)
public: int __thiscall FCrossRoad::GetRoad(int)
public: int __thiscall FCrossRoad::GetTextureIndex(void)
public: int __thiscall FCrossRoad::IsBigParking(void)
public: int __thiscall FCrossRoad::IsDead(void)
public: int __thiscall FCrossRoad::IsInTown(void)
public: int __thiscall FCrossRoad::IsOnRunway(void)
public: int __thiscall FCrossRoad::IsShelter(void)
public: int __thiscall FCrossRoad::IsSmallParking(void)
public: int __thiscall FCrossRoad::OpenShelterDoor(int,int)
public: static bool __cdecl FCrossRoad::GetAirfieldCrossPoint(int,int,class E3::Vector *)
public: static class FCrossRoad * __cdecl FCrossRoad::GetCrossRoadByIndex(int)
public: static class FCrossRoad * __cdecl FCrossRoad::GetCrossRoadOnAirfield(int,int)
public: static class FCrossRoad * __cdecl FCrossRoad::GetRailwaySwitchByIndex(int)
public: static int __cdecl FCrossRoad::GetNumCrossRoadsOnAirfield(int)
public: static int __cdecl FCrossRoad::GetNumCrosses(void)
public: static int __cdecl FCrossRoad::GetNumRailwaySwitches(void)
public: void __thiscall FCrossRoad::AlignPointToCross(class E3::Vector *,class E3::Vector &,float)
public: void __thiscall FCrossRoad::ClearUserFlagsOnAirfileld(int)
public: void __thiscall FCrossRoad::ClearUserFlagsOnAirfileldAll(void)
public: void __thiscall FCrossRoad::ResetFlag(unsigned int)
public: void __thiscall FCrossRoad::SetFlag(unsigned int)

private: static class FCrossRoad * * FCrossRoad::cArray
private: static class FCrossRoad * * FCrossRoad::cwArray
private: static int FCrossRoad::NumCrossRoads
private: static int FCrossRoad::NumRailwaySwitches
};

#endif

