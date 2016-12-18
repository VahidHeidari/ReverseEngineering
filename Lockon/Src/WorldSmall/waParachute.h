#ifndef WAPARACHUTE_H_
#define WAPARACHUTE_H_

class waParachute
{
public: __thiscall waParachute::waParachute(class waParachute const &)
public: __thiscall waParachute::waParachute(void)
public: virtual __thiscall waParachute::~waParachute(void)
public: class waParachute & __thiscall waParachute::operator=(class waParachute const &)
public: static void __cdecl waParachute::Create(class cPosition &,class wsType)
public: virtual class cPosition & __thiscall waParachute::Position(double)
public: void __thiscall waParachute::setParachute(class cPosition &,class wsType)
public: virtual void __thiscall waParachute::serialize(class EagleDynamics::Common::Serializer &)
private: void __thiscall waParachute::Init(void)
const waParachute::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const waParachute::`vftable'{for `Graphics::ModelInstance'}
const waParachute::`vftable'{for `IwNetObject'}
const waParachute::`vftable'{for `Suicide'}
const waParachute::`vftable'{for `viMovingObject'}
const waParachute::`vftable'{for `viObject'}
const waParachute::`vftable'{for `wVulnerable'}
};

#endif

