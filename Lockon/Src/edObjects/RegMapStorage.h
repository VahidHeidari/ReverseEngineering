#ifndef REGMAPSTORAGE_H_
#define REGMAPSTORAGE_H_

class RegMapStorage
{
public: __thiscall RegMapStorage::RegMapStorage(class RegMapStorage const &)
public: __thiscall RegMapStorage::RegMapStorage(unsigned long,unsigned long,unsigned long,unsigned long)
public: virtual __thiscall RegMapStorage::~RegMapStorage(void)
public: class RegMapStorage & __thiscall RegMapStorage::operator=(class RegMapStorage const &)
public: virtual bool __thiscall RegMapStorage::Remove(class Registered *)
public: virtual class Registered * __thiscall RegMapStorage::Get(unsigned long)
public: virtual class Registered * __thiscall RegMapStorage::Next(unsigned long,unsigned long)
public: virtual class Registered * __thiscall RegMapStorage::Prev(unsigned long,unsigned long)
public: virtual int __thiscall RegMapStorage::Count(void)const 
public: virtual int __thiscall RegMapStorage::DeleteAll(unsigned long)
public: virtual unsigned long __thiscall RegMapStorage::ForceID(class Registered *,unsigned long)
public: virtual unsigned long __thiscall RegMapStorage::Insert(class Registered *)
public: virtual void __thiscall RegMapStorage::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall RegMapStorage::serializeObjects(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall RegMapStorage::serializeSelf(class EagleDynamics::Common::Serializer &)
protected: unsigned long __thiscall RegMapStorage::allocID(void)
const RegMapStorage::`vftable'
};

#endif

