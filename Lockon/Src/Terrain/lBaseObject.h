#ifndef LBASEOBJECT_H_
#define LBASEOBJECT_H_

class lBaseObject
{
public: __thiscall lBaseObject::lBaseObject(class lBaseObject const &)
public: __thiscall lBaseObject::lBaseObject(void)
public: virtual __thiscall lBaseObject::~lBaseObject(void)
public: class lBaseObject & __thiscall lBaseObject::operator=(class lBaseObject const &)
public: virtual void __thiscall lBaseObject::CreateDynamicData(void)
protected: virtual void __thiscall lBaseObject::netReadUpdate(class Mail::Reader &)
protected: virtual void __thiscall lBaseObject::netWriteUpdate(class Mail::Writer &)const 
private: virtual bool __thiscall lBaseObject::netGetCreate(class Mail::Message &)const 
private: void __thiscall lBaseObject::netUpdate(short,class Mail::Reader)
const lBaseObject::`vftable'{for `Graphics::ModelInstance'}
const lBaseObject::`vftable'{for `IwNetObject'}
const lBaseObject::`vftable'{for `lLandObject'}
const lBaseObject::`vftable'{for `viObject'}
};

#endif

