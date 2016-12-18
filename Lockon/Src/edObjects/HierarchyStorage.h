#ifndef HIERARCHYSTORAGE_H_
#define HIERARCHYSTORAGE_H_

class HierarchyStorage
{
public: __thiscall HierarchyStorage::HierarchyStorage(class HierarchyStorage const &)
public: __thiscall HierarchyStorage::HierarchyStorage(unsigned long,class HierarchyNode *)
public: virtual __thiscall HierarchyStorage::~HierarchyStorage(void)
public: class HierarchyStorage & __thiscall HierarchyStorage::operator=(class HierarchyStorage const &)
public: virtual bool __thiscall HierarchyStorage::AddObject(class viObject *)
public: virtual bool __thiscall HierarchyStorage::RemoveObject(class viObject *)
public: virtual char const * __thiscall HierarchyStorage::Name(void)
public: virtual unsigned int __thiscall HierarchyStorage::GetCount(void)
public: virtual void __thiscall HierarchyStorage::GetObjects(class viSearch *)
public: virtual void __thiscall HierarchyStorage::GetStatistics(char * const)
public: virtual void __thiscall HierarchyStorage::Purge(unsigned long)
const HierarchyStorage::`vftable'
};

#endif

