#ifndef REGDYNSTORAGE_H_
#define REGDYNSTORAGE_H_

class RegDynStorage
{
public: __thiscall RegDynStorage::RegDynStorage(class RegDynStorage const &)
public: __thiscall RegDynStorage::RegDynStorage(unsigned long,unsigned long,unsigned long)
public: virtual __thiscall RegDynStorage::~RegDynStorage(void)
public: class RegDynStorage & __thiscall RegDynStorage::operator=(class RegDynStorage const &)
public: virtual unsigned long __thiscall RegDynStorage::ForceID(class Registered *,unsigned long)
public: virtual unsigned long __thiscall RegDynStorage::Insert(class Registered *)
private: static unsigned long __cdecl RegDynStorage::roundUp(unsigned long)
const RegDynStorage::`vftable'

public: static unsigned char RegDynStorage::hostID
};

#endif

