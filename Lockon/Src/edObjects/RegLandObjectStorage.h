#ifndef REGLANDOBJECTSTORAGE_H_
#define REGLANDOBJECTSTORAGE_H_

class RegLandObjectStorage
{
public: __thiscall RegLandObjectStorage::RegLandObjectStorage(class RegLandObjectStorage const &)
public: __thiscall RegLandObjectStorage::RegLandObjectStorage(unsigned long,unsigned long)
public: virtual __thiscall RegLandObjectStorage::~RegLandObjectStorage(void)
public: class RegLandObjectStorage & __thiscall RegLandObjectStorage::operator=(class RegLandObjectStorage const &)
public: bool __thiscall RegLandObjectStorage::LoadScene(char const *,struct ObjectCollection_Version)
public: bool __thiscall RegLandObjectStorage::Open(class BinarySceneAndTree::File *)
public: virtual class Registered * __thiscall RegLandObjectStorage::Get(unsigned long)
public: virtual unsigned long __thiscall RegLandObjectStorage::Insert(class Registered *)
public: virtual void __thiscall RegLandObjectStorage::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall RegLandObjectStorage::LoadInTime(unsigned long)
public: void __thiscall RegLandObjectStorage::SaveScene(struct ObjectCollection_Version &,char const *)
const RegLandObjectStorage::`vftable'
};

#endif

