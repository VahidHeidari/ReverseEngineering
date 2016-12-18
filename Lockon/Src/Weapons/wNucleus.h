#ifndef WNUCLEUS_H_
#define WNUCLEUS_H_

class wNucleus
{
public: __thiscall wNucleus::wNucleus(class wNucleus const &)
public: __thiscall wNucleus::wNucleus(void)
public: virtual __thiscall wNucleus::~wNucleus(void)
public: class wNucleus & __thiscall wNucleus::operator=(class wNucleus const &)
public: virtual bool __thiscall wNucleus::netGetBaseline(class Mail::Message &)const 
public: virtual class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall wNucleus::getMEShooter(void)
public: virtual class cPosition & __thiscall wNucleus::Position(double)
public: virtual class cPointerTemplate<class MovingObject> __thiscall wNucleus::getHost(void)
public: virtual int __thiscall wNucleus::Class(void)
public: virtual void __thiscall wNucleus::eventImpact(class Registered *,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: virtual void __thiscall wNucleus::eventShot(void)
public: virtual void __thiscall wNucleus::init(struct IWeaponManager::InitWeapon &)
public: virtual void __thiscall wNucleus::nextTime(double &)
public: virtual void __thiscall wNucleus::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall wNucleus::updateStatus(struct wWeaponManager::InitNetShell const &)
private: void __thiscall wNucleus::vapour(void)
protected: static class wNucleusMail wNucleus::mail
protected: virtual void __thiscall wNucleus::checkImpact(double)
protected: virtual void __thiscall wNucleus::checkLife(double)
protected: virtual void __thiscall wNucleus::explode(class E3::Vector const &,unsigned long)
protected: void __thiscall wNucleus::formPosition(class cPosition &,double)
protected: void __thiscall wNucleus::formVelocity(class E3::Vector &,double)
protected: void __thiscall wNucleus::setMEObjectPtr(void)
const wNucleus::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const wNucleus::`vftable'{for `Graphics::ModelInstance'}
const wNucleus::`vftable'{for `IwNetObject'}
const wNucleus::`vftable'{for `Suicide'}
const wNucleus::`vftable'{for `viMovingObject'}
const wNucleus::`vftable'{for `viObject'}
const wNucleus::`vftable'{for `wVulnerable'}
};

#endif

