#ifndef MOVINGOBJECT_H_
#define MOVINGOBJECT_H_

class MovingObject
{
public: class MovingObject & __thiscall MovingObject::operator=(class MovingObject const &)
public: __thiscall MovingObject::MovingObject(bool)
public: __thiscall MovingObject::MovingObject(class MovingObject const &)
public: __thiscall MovingObject::MovingObject(void)
public: virtual __thiscall MovingObject::~MovingObject(void)
public: bool __thiscall MovingObject::getFlag_Disturbance(void)
public: bool __thiscall MovingObject::getFlag_HumanPlane(void)
public: bool __thiscall MovingObject::getFlag_MissionTarget(void)
public: bool __thiscall MovingObject::getFlag_RadarActive(void)
public: bool __thiscall MovingObject::isMaster(void)const 
public: bool __thiscall MovingObject::netIsMaster(void)const 
public: bool const __thiscall MovingObject::IsFlag(__int32)const 
public: class E3::Vector const & __thiscall MovingObject::VectorVelocity(class E3::Vector const &)
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall MovingObject::getMEObject(void)
public: class wsFlags const __thiscall MovingObject::Flags(void)const 
public: class wsType const __thiscall MovingObject::Type(class wsType &)
public: class wsType const __thiscall MovingObject::Type(void)const 
public: double const __thiscall MovingObject::NetTime(double)
public: double const __thiscall MovingObject::NetTime(void)const 
public: float const __thiscall MovingObject::Vy(void)const 
public: int __thiscall MovingObject::netPeer(void)const 
public: struct wCamera * __thiscall MovingObject::Camera(void)
public: unsigned char const __thiscall MovingObject::Country(unsigned char)
public: unsigned char const __thiscall MovingObject::Country(void)const 
public: unsigned char const __thiscall MovingObject::State(unsigned char)
public: unsigned char const __thiscall MovingObject::State(void)
public: virtual bool __thiscall MovingObject::ForceID(unsigned long,unsigned long)
public: virtual bool __thiscall MovingObject::IsDead(void)const 
public: virtual bool __thiscall MovingObject::Is_Target(void)
public: virtual bool __thiscall MovingObject::netGetBaseline(class Mail::Message &)const 
public: virtual bool __thiscall MovingObject::netGetCreate(class Mail::Message &)const 
public: virtual bool __thiscall MovingObject::netGetStatus(class Mail::Message &)const 
public: virtual bool __thiscall MovingObject::netGetUpdate(class Mail::Message &)const 
public: virtual bool const __thiscall MovingObject::Dead(void)const 
public: virtual bool const __thiscall MovingObject::In_Air_(void)
public: virtual bool const __thiscall MovingObject::LinkToTarget(unsigned long,unsigned long)
public: virtual class E3::Vector const & __thiscall MovingObject::VectorVelocity(void)const 
public: virtual class Position3 const & __thiscall MovingObject::GetPosition(void)
public: virtual class cPosition & __thiscall MovingObject::Position(double)
public: virtual class cPosition & __thiscall MovingObject::Position(void)
public: virtual class cPosition const & __thiscall MovingObject::Position(class cPosition &)
public: virtual class wControl * __thiscall MovingObject::GetCommander(void)
public: virtual float __thiscall MovingObject::GetKillRadius(class E3::Vector,class wsType)
public: virtual float __thiscall MovingObject::Life(void)const 
public: virtual float __thiscall MovingObject::Life0(void)const 
public: virtual float __thiscall MovingObject::ScalarVelocity(void)const 
public: virtual float __thiscall MovingObject::getFindingDistance(void)
public: virtual float __thiscall MovingObject::getKillingDistance(void)
public: virtual float const __thiscall MovingObject::Course(void)
public: virtual float const __thiscall MovingObject::Hbar(void)
public: virtual float const __thiscall MovingObject::Hrad(void)
public: virtual float const __thiscall MovingObject::Ny(void)
public: virtual float const __thiscall MovingObject::Omx(void)
public: virtual float const __thiscall MovingObject::Omy(void)
public: virtual float const __thiscall MovingObject::Omz(void)
public: virtual float const __thiscall MovingObject::Roll(void)
public: virtual float const __thiscall MovingObject::Tang(void)
public: virtual int __thiscall MovingObject::Class(void)
public: virtual int const __thiscall MovingObject::Life(int)
public: virtual int const __thiscall MovingObject::Task_Number(void)
public: virtual unsigned long __thiscall MovingObject::GunId(void)
public: virtual unsigned long const __thiscall MovingObject::Target_ID(void)
public: virtual void __thiscall MovingObject::ChangePos(class cPosition const &)
public: virtual void __thiscall MovingObject::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
public: virtual void __thiscall MovingObject::Print(class EagleDynamics::Common::AsyncLogFile *)
public: virtual void __thiscall MovingObject::TakeDamage(class DamageInfo const &)
public: virtual void __thiscall MovingObject::formPositionOnSurface(class cPosition *,class E3::Vector *,class E3::Vector *)
public: virtual void __thiscall MovingObject::netDiscard(void)
public: virtual void __thiscall MovingObject::putMEObject(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
public: virtual void __thiscall MovingObject::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall MovingObject::setDrawArgumentValue(int,float)
public: void __thiscall MovingObject::ResetFlag(__int32)
public: void __thiscall MovingObject::ResetFlag(void)
public: void __thiscall MovingObject::SetFlag(__int32)
public: void __thiscall MovingObject::netSetMaster(bool)
public: void __thiscall MovingObject::setFlag_Disturbance(bool)
public: void __thiscall MovingObject::setFlag_HumanPlane(bool)
public: void __thiscall MovingObject::setFlag_MissionTarget(bool)
public: void __thiscall MovingObject::setFlag_RadarActive(bool)
public: void __thiscall MovingObject::setMaster(bool)
protected: virtual void __thiscall MovingObject::calculateYawPitchRoll(void)
protected: virtual void __thiscall MovingObject::formOrientation(class cPosition &,float,float,float)
protected: virtual void __thiscall MovingObject::setOrientation(void)
protected: void __thiscall MovingObject::createCrashEvent(void)
protected: void __thiscall MovingObject::createKillEvent(void)
const MovingObject::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const MovingObject::`vftable'{for `Graphics::ModelInstance'}
const MovingObject::`vftable'{for `IwNetObject'}
const MovingObject::`vftable'{for `Suicide'}
const MovingObject::`vftable'{for `viMovingObject'}
const MovingObject::`vftable'{for `viObject'}
const MovingObject::`vftable'{for `wVulnerable'}
};

#endif

