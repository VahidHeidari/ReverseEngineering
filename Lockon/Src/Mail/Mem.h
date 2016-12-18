#ifndef MEM_H_
#define MEM_H_

namespace Mem
{

class Pool
{
public: __thiscall Mem::Pool::Pool(unsigned int,unsigned int)
public: __thiscall Mem::Pool::~Pool(void)
public: void * __thiscall Mem::Pool::alloc(void)
public: void __thiscall Mem::Pool::free(void *)
};

}		/// namespace Mem

#endif

