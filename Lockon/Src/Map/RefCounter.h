#ifndef REFCOUNTER_H_
#define REFCOUNTER_H_

class RefCounter
{
public: __thiscall RefCounter::RefCounter(class RefCounter const &)
public: __thiscall RefCounter::RefCounter(void)
public: class RefCounter & __thiscall RefCounter::operator=(class RefCounter const &)
public: int __thiscall RefCounter::ref(void)
public: int __thiscall RefCounter::unref(void)
public: int const __thiscall RefCounter::getRefCount(void)const 
public: static int __cdecl RefCounter::checkRefDelete(class RefCounter *)
protected: virtual __thiscall RefCounter::~RefCounter(void)
const RefCounter::`vftable'
};

#endif

