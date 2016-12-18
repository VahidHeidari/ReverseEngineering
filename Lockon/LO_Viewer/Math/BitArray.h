#ifndef BITARRAY_H_
#define BITARRAY_H_

class BitArray
{
public: __thiscall BitArray::BitArray(class BitArray const &)
public: __thiscall BitArray::BitArray(int)
public: __thiscall BitArray::BitArray(void)
public: __thiscall BitArray::~BitArray(void)
public: class BitArray & __thiscall BitArray::operator=(class BitArray const &)
public: bool __thiscall BitArray::HaveAnyBitSet(void)
public: int __thiscall BitArray::GetSize(void)const 
public: int __thiscall BitArray::operator[](int)const 
public: void __thiscall BitArray::Clear(int)
public: void __thiscall BitArray::ClearAll(void)
public: void __thiscall BitArray::Set(int)
public: void __thiscall BitArray::Set(int,bool)
public: void __thiscall BitArray::SetAll(void)
public: void __thiscall BitArray::SetSize(int,int)
};

#endif

