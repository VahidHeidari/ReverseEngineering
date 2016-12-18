#ifndef WUNGUIDEDROCKET_H_
#define WUNGUIDEDROCKET_H_

class wUnguidedRocket
{
public: __thiscall wUnguidedRocket::wUnguidedRocket(class wUnguidedRocket const &)
public: __thiscall wUnguidedRocket::wUnguidedRocket(void)
public: virtual __thiscall wUnguidedRocket::~wUnguidedRocket(void)
public: virtual bool __thiscall wUnguidedRocket::netGetBaseline(class Mail::Message &)const 
public: virtual int __thiscall wUnguidedRocket::Class(void)
public: virtual void __thiscall wUnguidedRocket::init(struct IWeaponManager::InitWeapon &)
public: virtual void __thiscall wUnguidedRocket::nextTime(double &)
public: virtual void __thiscall wUnguidedRocket::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall wUnguidedRocket::updateStatus(struct wWeaponManager::InitNetRocket const &)
public: class wUnguidedRocket & __thiscall wUnguidedRocket::operator=(class wUnguidedRocket const &)
protected: virtual void __thiscall wUnguidedRocket::createEffect(void)
protected: virtual void __thiscall wUnguidedRocket::deleteEffect(void)
const wUnguidedRocket::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const wUnguidedRocket::`vftable'{for `Graphics::ModelInstance'}
const wUnguidedRocket::`vftable'{for `IwNetObject'}
const wUnguidedRocket::`vftable'{for `Suicide'}
const wUnguidedRocket::`vftable'{for `viMovingObject'}
const wUnguidedRocket::`vftable'{for `viObject'}
const wUnguidedRocket::`vftable'{for `wVulnerable'}
};

#endif

