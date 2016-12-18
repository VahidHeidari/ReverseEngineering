#ifndef VISEARCH_IMPLEMENT_H_
#define VISEARCH_IMPLEMENT_H_

class viSearch_Implement
{
public: __thiscall viSearch_Implement::viSearch_Implement(class ClipVolume *,bool (__cdecl*)(class viObject *,class viSearch *,void *),void *,class viObject * *,unsigned int,unsigned long)
public: __thiscall viSearch_Implement::viSearch_Implement(class viSearch_Implement const &)
public: virtual __thiscall viSearch_Implement::~viSearch_Implement(void)
public: class viSearch_Implement & __thiscall viSearch_Implement::operator=(class viSearch_Implement const &)
public: bool __thiscall viSearch_Implement::IsFinished(void)const 
public: unsigned long __thiscall viSearch_Implement::inTypes(void)const 
public: virtual bool __thiscall viSearch_Implement::TestAndInsert(class viObject *,bool)
public: virtual class ClipVolume * __thiscall viSearch_Implement::Volume(void)const 
public: virtual class viObject * * __thiscall viSearch_Implement::Store(void)
public: virtual int __thiscall viSearch_Implement::ID(void)const 
public: virtual unsigned int __thiscall viSearch_Implement::Count(void)const 
public: virtual unsigned long __thiscall viSearch_Implement::Types(void)const 
public: virtual void __thiscall viSearch_Implement::Finish(void)
const viSearch_Implement::`vftable'

protected: static int viSearch_Implement::last_id
};

#endif

