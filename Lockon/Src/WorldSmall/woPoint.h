#ifndef WOPOINT_H_
#define WOPOINT_H_

class woPoint
{
public: virtual __thiscall woPoint::~woPoint(void)
public: static unsigned long __cdecl woPoint::Create(class E3::Vector &)
public: static unsigned long __cdecl woPoint::Create(class lLandObject *)
public: class lLandObject * __thiscall woPoint::Get_pMap(void)
public: class woPoint & __thiscall woPoint::operator=(class woPoint const &)
public: __thiscall woPoint::woPoint(class woPoint const &)
public: __thiscall woPoint::woPoint(void)
public: virtual int __thiscall woPoint::Class(void)
public: virtual void __thiscall woPoint::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
public: virtual void __thiscall woPoint::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall woPoint::controlPoint(double &)
public: void __thiscall woPoint::setLandObject(class lLandObject *)
public: void __thiscall woPoint::setVector(class E3::Vector &)
private: void __thiscall woPoint::initialize(void)
const woPoint::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const woPoint::`vftable'{for `Graphics::ModelInstance'}
const woPoint::`vftable'{for `IwNetObject'}
const woPoint::`vftable'{for `Suicide'}
const woPoint::`vftable'{for `viMovingObject'}
const woPoint::`vftable'{for `viObject'}
const woPoint::`vftable'{for `wVulnerable'}
};

#endif

