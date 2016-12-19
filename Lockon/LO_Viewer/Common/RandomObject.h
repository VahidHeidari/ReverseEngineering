#ifndef RANDOMOBJECT_H_
#define RANDOMOBJECT_H_

#include <vector>

#include "Common.h"

class RandomObject
{
public: __thiscall RandomObject(class RandomObject &)
public: __thiscall RandomObject(class std::vector<float,class std::allocator<float> > &,unsigned int,unsigned int)
public: __thiscall RandomObject(unsigned int,unsigned int)
public: __thiscall RandomObject(void)
public: class RandomObject & __thiscall operator=(class RandomObject const &)
public: virtual __thiscall RandomObject(void)
public: void __thiscall init(unsigned int,unsigned int)
public: float __thiscall get(void)
public: unsigned int __thiscall getOffset(void)
public: unsigned int __thiscall getType(void)
public: void __thiscall setOffset(unsigned int)
public: void __thiscall setType(unsigned int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
const RandomObject::`vftable'
};

#endif

