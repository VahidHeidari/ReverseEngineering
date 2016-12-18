#ifndef LINEARSTORAGE_H_
#define LINEARSTORAGE_H_

class LinearStorage
{
public: __thiscall LinearStorage::LinearStorage(class LinearStorage const &)
public: __thiscall LinearStorage::LinearStorage(unsigned long)
public: virtual __thiscall LinearStorage::~LinearStorage(void)
public: class LinearStorage & __thiscall LinearStorage::operator=(class LinearStorage const &)
public: virtual bool __thiscall LinearStorage::AddObject(class viObject *)
public: virtual bool __thiscall LinearStorage::RemoveObject(class viObject *)
public: virtual char const * __thiscall LinearStorage::Name(void)
public: virtual unsigned int __thiscall LinearStorage::GetCount(void)
public: virtual void __thiscall LinearStorage::GetObjects(class viSearch *)
public: virtual void __thiscall LinearStorage::GetStatistics(char * const)
public: virtual void __thiscall LinearStorage::Purge(unsigned long)
const LinearStorage::`vftable'
};

#endif

