#ifndef WORUNWAY_H_
#define WORUNWAY_H_

#include "Common.h"

class woRunWay
{
public: __thiscall woRunWay::woRunWay(class woRunWay const &)
public: __thiscall woRunWay::woRunWay(void)
public: virtual __thiscall woRunWay::~woRunWay(void)
public: class woRunWay & __thiscall woRunWay::operator=(class woRunWay const &)
public: bool __thiscall woRunWay::isRunWayOpen(void)
public: virtual float const __thiscall woRunWay::Course(void)
public: virtual float const __thiscall woRunWay::Hrad(void)
public: virtual int __thiscall woRunWay::Class(void)
public: virtual void __thiscall woRunWay::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
public: virtual void __thiscall woRunWay::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall woRunWay::setIDAirdrome(unsigned long)
public: void __thiscall woRunWay::setRunWay(class cPosition &,float,float,class wsType)
const woRunWay::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const woRunWay::`vftable'{for `Graphics::ModelInstance'}
const woRunWay::`vftable'{for `IwNetObject'}
const woRunWay::`vftable'{for `Suicide'}
const woRunWay::`vftable'{for `viMovingObject'}
const woRunWay::`vftable'{for `viObject'}
const woRunWay::`vftable'{for `wVulnerable'}
};

#endif

