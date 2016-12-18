#ifndef LROADMANAGERIMPL_H_
#define LROADMANAGERIMPL_H_

class lRoadManagerImpl
{
public: __thiscall lRoadManagerImpl::lRoadManagerImpl(class lRoadManagerImpl const &)
public: __thiscall lRoadManagerImpl::lRoadManagerImpl(void)
public: __thiscall lRoadManagerImpl::~lRoadManagerImpl(void)
public: class lRoadManagerImpl & __thiscall lRoadManagerImpl::operator=(class lRoadManagerImpl const &)
public: bool __thiscall lRoadManagerImpl::IsOnRoad(float,float,bool)
public: bool __thiscall lRoadManagerImpl::Open(char const *,char const *)
public: class FCrossRoad * __thiscall lRoadManagerImpl::GetCrossRoadOnAirfield(int,int)
public: class FRoad * __thiscall lRoadManagerImpl::GetPathOnAirfiled(int,int,int,bool)
public: class FRoad * __thiscall lRoadManagerImpl::GetRoadOnAirfield(int,int)
public: class RoadToSquare * __thiscall lRoadManagerImpl::getSquareRoad(struct intpoint,bool)
public: class std::list<struct intpoint,class std::allocator<struct intpoint> > * __thiscall lRoadManagerImpl::GetAirfieldSquares(int)
public: int __thiscall lRoadManagerImpl::GetAirfieldBySquare(struct intpoint)
public: int __thiscall lRoadManagerImpl::GetClosestRoad(class E3::Vector const &,float &,int &,float *,class E3::Vector *,bool)
public: int __thiscall lRoadManagerImpl::GetClosestRoad(class E3::Vector const &,float &,int &,float *,class E3::Vector *,bool,struct intpoint)
public: int __thiscall lRoadManagerImpl::GetNumRoadsOnAirfield(int)
public: virtual bool __thiscall lRoadManagerImpl::GetAirfieldCrossPoint(int,int,class E3::Vector *)
public: virtual bool __thiscall lRoadManagerImpl::IsAirfieldValid(int)
public: virtual bool __thiscall lRoadManagerImpl::IsOnRail(float,float)
public: virtual bool __thiscall lRoadManagerImpl::IsOnRoad(float,float)
public: virtual class FCrossRoad * __thiscall lRoadManagerImpl::GetCrossRoadByIndex(int)
public: virtual class FCrossRoad * __thiscall lRoadManagerImpl::GetRailwaySwitchByIndex(int)
public: virtual class FRoad * __thiscall lRoadManagerImpl::GetRailByIndex(int)
public: virtual class FRoad * __thiscall lRoadManagerImpl::GetRoadByIndex(int)
public: virtual int __thiscall lRoadManagerImpl::GetAirfieldCameras(int,class std::list<struct AirfieldCameraDeclare,class std::allocator<struct AirfieldCameraDeclare> > &)
public: virtual int __thiscall lRoadManagerImpl::GetAirfieldRunWay(int,class std::list<struct VPPDeclare,class std::allocator<struct VPPDeclare> > &)
public: virtual int __thiscall lRoadManagerImpl::GetAirfieldTech(int,class std::list<class lSimpleRadar *,class std::allocator<class lSimpleRadar *> > &)
public: virtual int __thiscall lRoadManagerImpl::GetClosestRail(class E3::Vector const &,float &,int &,float *,class E3::Vector *)
public: virtual int __thiscall lRoadManagerImpl::GetClosestRoad(class E3::Vector const &,float &,int &,float *,class E3::Vector *)
public: virtual int __thiscall lRoadManagerImpl::GetNumCrossRoadsOnAirfield(int)
public: virtual int __thiscall lRoadManagerImpl::GetNumCrosses(void)
public: virtual int __thiscall lRoadManagerImpl::GetNumRails(void)
public: virtual int __thiscall lRoadManagerImpl::GetNumRailwaySwitches(void)
public: virtual int __thiscall lRoadManagerImpl::GetNumRoads(void)
public: virtual void __thiscall lRoadManagerImpl::GetSourceVersion(struct _FILETIME &)
public: void __thiscall lRoadManagerImpl::ClearUserFlagsOnAirfileld(int)
public: void __thiscall lRoadManagerImpl::ClearUserFlagsOnAirfileldAll(void)
public: void __thiscall lRoadManagerImpl::InitRoadsOnAirfield(class RoadnetworkFile *,int)
public: void __thiscall lRoadManagerImpl::InitSceneObjects(void)
public: void __thiscall lRoadManagerImpl::ReadRoadsFromFile(class RoadnetworkFile &,class std::vector<class FRoad *,class std::allocator<class FRoad *> > &,class std::vector<class FCrossRoad *,class std::allocator<class FCrossRoad *> > &,class std::map<struct intpoint,class RoadToSquare,struct std::less<struct intpoint>,class std::allocator<class RoadToSquare> > *)
public: void __thiscall lRoadManagerImpl::ShelterOperation(float)
public: void __thiscall lRoadManagerImpl::StartShelterDoorOperation(unsigned long,bool)
const lRoadManagerImpl::`vftable'
};

#endif

