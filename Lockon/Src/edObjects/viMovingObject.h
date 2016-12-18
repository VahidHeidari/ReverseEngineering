#ifndef VIMOVINGOBJECT_H_
#define VIMOVINGOBJECT_H_

class viMovingObject
{
public: __thiscall viMovingObject::viMovingObject(class viMovingObject const &)
public: __thiscall viMovingObject::viMovingObject(unsigned long,class Vector3 const &)
public: class viMovingObject & __thiscall viMovingObject::operator=(class viMovingObject const &)
public: virtual __thiscall viMovingObject::~viMovingObject(void)
public: virtual class E3::Vector const & __thiscall viMovingObject::VectorVelocity(void)const 
public: virtual float __thiscall viMovingObject::GetSize(void)
public: virtual float __thiscall viMovingObject::ScalarVelocity(void)const 
public: virtual void __thiscall viMovingObject::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall viMovingObject::`default constructor closure'(void)
const viMovingObject::`vftable'
const viMovingObject::`vftable'{for `Graphics::ModelInstance'}
const viMovingObject::`vftable'{for `viObject'}
};

#endif

