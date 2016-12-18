#ifndef VIOBJECT_H_
#define VIOBJECT_H_

class viObject
{
public: __thiscall viObject::viObject(class viObject const &)
public: __thiscall viObject::viObject(unsigned long)
public: virtual __thiscall viObject::~viObject(void)
public: class viObject & __thiscall viObject::operator=(class viObject const &)
public: bool __thiscall viObject::IsSearch(int)
public: virtual bool __thiscall viObject::ForceID(unsigned long,unsigned long)
public: virtual enum IntersectionType __thiscall viObject::TestVolume(class ClipVolume *)
public: virtual void __thiscall viObject::Parse(class Graphics::ModelParser &,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall viObject::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall viObject::SetSearchID(int)
protected: virtual bool __thiscall viObject::Register(void)
protected: virtual bool __thiscall viObject::Unregister(void)
protected: virtual bool __thiscall viObject::viRegister(void)
protected: virtual bool __thiscall viObject::viUnregister(void)
public: void __thiscall viObject::`default constructor closure'(void)
const viObject::`vftable'
};

#endif

