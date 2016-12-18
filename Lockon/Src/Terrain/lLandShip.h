#ifndef LLANDSHIP_H_
#define LLANDSHIP_H_

class lLandShip
{
public: __thiscall lLandShip::lLandShip(class lLandShip const &)
public: __thiscall lLandShip::lLandShip(void)
public: virtual __thiscall lLandShip::~lLandShip(void)
public: class lLandShip & __thiscall lLandShip::operator=(class lLandShip const &)
public: static class lLandObject * __cdecl lLandShip::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lLandShip::GetDrawArguments(void)
public: virtual void __thiscall lLandShip::TakeDamage(int)
private: bool __thiscall lLandShip::ShipSink(float)
private: void __thiscall lLandShip::ShipStartSink(double)
const lLandShip::`vftable'{for `Graphics::ModelInstance'}
const lLandShip::`vftable'{for `IwNetObject'}
const lLandShip::`vftable'{for `lLandObject'}
const lLandShip::`vftable'{for `viObject'}

private: static class HeapVector<struct Graphics::DynamicParam> lLandShip::globalArgs
};

#endif

