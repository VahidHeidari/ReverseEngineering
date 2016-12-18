#ifndef WEXPLOSIONMANAGER_IMPLEMENT_H_
#define WEXPLOSIONMANAGER_IMPLEMENT_H_

#include "Explosions.h"
#include "RandomObject.h"

class wExplosionManager_Implement
{
public: __thiscall wExplosionManager_Implement::wExplosionManager_Implement(class wExplosionManager_Implement const &)
public: __thiscall wExplosionManager_Implement::wExplosionManager_Implement(void)
public: virtual __thiscall wExplosionManager_Implement::~wExplosionManager_Implement(void)
public: virtual void __thiscall wExplosionManager_Implement::Explosion(class E3::Vector const &,class E3::Vector const &,float,enum ExplosionType,unsigned long,enum ExplosionEnv,unsigned long,unsigned int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: class wExplosionManager_Implement & __thiscall wExplosionManager_Implement::operator=(class wExplosionManager_Implement const &)
protected: virtual enum ExplosionEnv __thiscall wExplosionManager_Implement::GetEnvironment(class E3::Vector const &)
protected: virtual void __thiscall wExplosionManager_Implement::Animation(struct ExplosionInfo &)
protected: virtual void __thiscall wExplosionManager_Implement::CreateCrater(float,float,float)
protected: virtual void __thiscall wExplosionManager_Implement::DebugPrint(struct ExplosionInfo &)
protected: virtual void __thiscall wExplosionManager_Implement::Explosion(struct ExplosionInfo &)
protected: virtual void __thiscall wExplosionManager_Implement::fillEventImpact(unsigned long,class Registered *,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: virtual bool __thiscall wExplosionManager_Implement::DamageObjects(struct ExplosionInfo &)
private: void __thiscall wExplosionManager_Implement::damageObject(struct ExplosionInfo const &)
const wExplosionManager_Implement::`vftable'

public: static class RandomObject wExplosionManager_Implement::randomOrderly
};

#endif

