#ifndef WNETOBJECT_H_
#define WNETOBJECT_H_

class wNetObject
{
public: __thiscall wNetObject::wNetObject(class wNetObject const &)
public: __thiscall wNetObject::wNetObject(void)
public: virtual __thiscall wNetObject::~wNetObject(void)
public: class wNetObject & __thiscall wNetObject::operator=(class wNetObject const &)
public: float __thiscall wNetObject::formNextStep(class cPosition &,double)
public: virtual void __thiscall wNetObject::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall wNetObject::initialize(class MovingObject *,float,float)
public: void __thiscall wNetObject::setMeasurement(double,class E3::Vector &)
public: void __thiscall wNetObject::setMeasurement(double,class E3::Vector &,class E3::Vector &)
const wNetObject::`vftable'
};

#endif

