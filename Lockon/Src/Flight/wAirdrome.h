#ifndef WAIRDROME_H_
#define WAIRDROME_H_

class wAirdrome
{
public: __thiscall wAirdrome::wAirdrome(class wAirdrome const &)
public: __thiscall wAirdrome::wAirdrome(void)
public: virtual __thiscall wAirdrome::~wAirdrome(void)
public: class wAirdrome & __thiscall wAirdrome::operator=(class wAirdrome const &)
public: bool __thiscall wAirdrome::Get_BirthValid(void)
public: bool __thiscall wAirdrome::Get_HelBirthValid(void)
public: bool __thiscall wAirdrome::Glide_Slope(void)
public: bool __thiscall wAirdrome::Is_SP_Valid(void)
public: bool __thiscall wAirdrome::isAirdromeRadarValid(void)
public: bool __thiscall wAirdrome::isRunWayOpen(void)
public: class FRoad * __thiscall wAirdrome::Get_AdrLandingTaxi(unsigned long)
public: class FRoad * __thiscall wAirdrome::Get_AdrTakeOffTaxi(unsigned long,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: class FRoad * __thiscall wAirdrome::Get_Curr_ToTakeOff(unsigned long)
public: class FRoad * __thiscall wAirdrome::Get_Curr_ToTerminal(unsigned long)
public: class FRoad * __thiscall wAirdrome::Get_RestoreLandingTaxi(unsigned long)
public: class FRoad * __thiscall wAirdrome::Get_RestoreTakeOffTaxi(unsigned long)
public: class wRadioTransmitter * __thiscall wAirdrome::getTransmitter(void)
public: class woATC * __thiscall wAirdrome::getATC(void)
public: class woRunWay * __thiscall wAirdrome::getFirstRunWay(void)
public: int __thiscall wAirdrome::Get_RW_Course_Number(bool)
public: int __thiscall wAirdrome::Get_RW_Number(bool)
public: int __thiscall wAirdrome::On_RunWay(class cPosition &)
public: static char const * __cdecl wAirdrome::GetAdName(unsigned char)
public: static char const * __cdecl wAirdrome::GetRussianAdrName(unsigned char)
public: static class std::vector<class wAirdrome *,class std::allocator<class wAirdrome *> > wAirdrome::airdromes
public: static void __cdecl wAirdrome::Create(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
public: struct RunWay * __thiscall wAirdrome::Get_ClosestRW(float,class E3::Vector &)
public: struct RunWay * __thiscall wAirdrome::Get_LandingRW(void)
public: struct RunWay * __thiscall wAirdrome::Get_TakeOff_RW(void)
public: struct RunWay * __thiscall wAirdrome::getAirdromeRWs(void)
public: unsigned long __thiscall wAirdrome::GetRunWayID(int)
public: virtual class cPosition & __thiscall wAirdrome::GetFirstRunwayPosition(void)
public: virtual class cPosition & __thiscall wAirdrome::GetRunwayPosition(int)
public: virtual float const __thiscall wAirdrome::Course(void)
public: virtual int __thiscall wAirdrome::Class(void)
public: virtual void __thiscall wAirdrome::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
public: virtual void __thiscall wAirdrome::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall wAirdrome::Clean_Taxi(unsigned long)
public: void __thiscall wAirdrome::Control(void)
public: void __thiscall wAirdrome::Get_Landing_Point(class cPosition *,unsigned long)
public: void __thiscall wAirdrome::Get_TakeOff_Point(class cPosition *,unsigned char)
public: void __thiscall wAirdrome::OffProjector(unsigned long)
public: void __thiscall wAirdrome::OnOffProjector(bool)
public: void __thiscall wAirdrome::Reset_BirthValid(void)
public: void __thiscall wAirdrome::Reset_HelBirthValid(void)
public: void __thiscall wAirdrome::Set_BirthValid(void)
public: void __thiscall wAirdrome::Set_HelBirthValid(void)
public: void __thiscall wAirdrome::setCountry(unsigned char)
public: void __thiscall wAirdrome::setGlideSlope(bool)
public: void __thiscall wAirdrome::setNewMissionObject(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
protected: void __thiscall wAirdrome::FillProjectorList(class E3::Vector const &)
protected: void __thiscall wAirdrome::doCloseDoor(unsigned long)
protected: void __thiscall wAirdrome::doDamage(float,unsigned short)
protected: void __thiscall wAirdrome::doGlideLock(unsigned long)
protected: void __thiscall wAirdrome::doLanding(unsigned long,unsigned char)
protected: void __thiscall wAirdrome::doOpenDoor(unsigned long)
protected: void __thiscall wAirdrome::doTakeOff(unsigned long)
private: bool __thiscall wAirdrome::Check_RunWayHit(class cPosition &,int)
private: class woRunWay * __thiscall wAirdrome::AddRunWay(class cPosition &,float,float,class wsType)
private: int __thiscall wAirdrome::GetAirdromePlaceData(int)
private: int __thiscall wAirdrome::formVPPName(float)
private: void __thiscall wAirdrome::AddATC(void)
private: void __thiscall wAirdrome::Control_Light(void)
private: void __thiscall wAirdrome::Control_Radar_Mail(void)
private: void __thiscall wAirdrome::CreateRunWay(void)
private: void __thiscall wAirdrome::DeleteRunWay(int)
private: void __thiscall wAirdrome::Init(int)
private: void __thiscall wAirdrome::InitRunWayData(void)
private: void __thiscall wAirdrome::createAirdromeActivity(void)
private: void __thiscall wAirdrome::initialize(void)
const wAirdrome::`vftable'
const wAirdrome::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const wAirdrome::`vftable'{for `Graphics::ModelInstance'}
const wAirdrome::`vftable'{for `IwNetObject'}
const wAirdrome::`vftable'{for `Suicide'}
const wAirdrome::`vftable'{for `viMovingObject'}
const wAirdrome::`vftable'{for `viObject'}
const wAirdrome::`vftable'{for `wVulnerable'}
};

#endif

