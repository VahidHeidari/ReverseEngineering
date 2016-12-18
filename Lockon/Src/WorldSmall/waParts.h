#ifndef WAPARTS_H_
#define WAPARTS_H_

#include "RandomObject.h"

class waParts
{
public: class waParts & __thiscall waParts::operator=(class waParts const &)
public: __thiscall waParts::waParts(class waParts const &)
public: virtual __thiscall waParts::~waParts(void)
public: __thiscall waParts::waParts(void)
public: static void __cdecl waParts::Create(class cPosition &,class E3::Vector &,class wsType,class cPointerTemplate<class MovingObject>)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall waParts::GetDrawArguments(void)
public: virtual class cPosition & __thiscall waParts::Position(double)
public: virtual struct gBox const & __thiscall waParts::LocalBox(double)
public: virtual void __thiscall waParts::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall waParts::setPart(class cPosition &,class E3::Vector &,class wsType,class cPointerTemplate<class MovingObject>)
private: void __thiscall waParts::Init(void)
private: void __thiscall waParts::SpaceRegister(double)
private: void __thiscall waParts::Status_Quo(double)
private: void __thiscall waParts::setShape(void)
const waParts::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const waParts::`vftable'{for `Graphics::ModelInstance'}
const waParts::`vftable'{for `IwNetObject'}
const waParts::`vftable'{for `Suicide'}
const waParts::`vftable'{for `viMovingObject'}
const waParts::`vftable'{for `viObject'}
const waParts::`vftable'{for `wVulnerable'}

public: static class RandomObject waParts::randomOrderly
};

#endif

