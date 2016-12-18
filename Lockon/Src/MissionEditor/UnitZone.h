#ifndef UNITZONE_H_
#define UNITZONE_H_

class UnitZone
{
public: __thiscall UnitZone::UnitZone(class UnitZone const &)
public: __thiscall UnitZone::UnitZone(float)
public: __thiscall UnitZone::UnitZone(float,unsigned long)
public: __thiscall UnitZone::UnitZone(void)
public: virtual __thiscall UnitZone::~UnitZone(void)
public: class UnitZone & __thiscall UnitZone::operator=(class UnitZone const &)
public: float __thiscall UnitZone::getRadius(void)
public: static int __cdecl UnitZone::getNumberOfSegments(float)
public: static unsigned long __cdecl UnitZone::getFindingZoneColor(unsigned long)
public: static unsigned long __cdecl UnitZone::getKillingZoneColor(unsigned long)
public: void __thiscall UnitZone::onPaint(void)
public: void __thiscall UnitZone::setColor(int,int,int,int,bool)
public: void __thiscall UnitZone::setColor(unsigned long,bool)
public: void __thiscall UnitZone::setRadius(float)
public: void __thiscall UnitZone::setZone(float,float,float)
const UnitZone::`vftable'
};

#endif

