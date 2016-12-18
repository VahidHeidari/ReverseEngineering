#ifndef REGVECTORSTORAGE_H_
#define REGVECTORSTORAGE_H_

class RegVectorStorage
{
public: __thiscall RegVectorStorage::RegVectorStorage(class RegVectorStorage const &)
public: __thiscall RegVectorStorage::RegVectorStorage(unsigned long,unsigned long,unsigned long)
public: virtual __thiscall RegVectorStorage::~RegVectorStorage(void)
public: class RegVectorStorage & __thiscall RegVectorStorage::operator=(class RegVectorStorage const &)
public: virtual bool __thiscall RegVectorStorage::Remove(class Registered *)
public: virtual class Registered * __thiscall RegVectorStorage::Get(unsigned long)
public: virtual class Registered * __thiscall RegVectorStorage::Next(unsigned long,unsigned long)
public: virtual class Registered * __thiscall RegVectorStorage::Prev(unsigned long,unsigned long)
public: virtual int __thiscall RegVectorStorage::Count(void)const 
public: virtual int __thiscall RegVectorStorage::DeleteAll(unsigned long)
public: virtual unsigned long __thiscall RegVectorStorage::ForceID(class Registered *,unsigned long)
public: virtual unsigned long __thiscall RegVectorStorage::Insert(class Registered *)
public: virtual void __thiscall RegVectorStorage::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall RegVectorStorage::serializeObjects(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall RegVectorStorage::serializeSelf(class EagleDynamics::Common::Serializer &)
const RegVectorStorage::`vftable'
};

#endif

