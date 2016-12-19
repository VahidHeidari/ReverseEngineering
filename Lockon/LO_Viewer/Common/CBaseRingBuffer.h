#ifndef CBASERINGBUFFER_H_
#define CBASERINGBUFFER_H_

class CBaseRingBuffer
{
public: __thiscall CBaseRingBuffer(class CBaseRingBuffer const &)
public: __thiscall CBaseRingBuffer(void)
public: virtual __thiscall ~CBaseRingBuffer(void)
public: class CBaseRingBuffer & __thiscall operator=(class CBaseRingBuffer const &)
public: void __thiscall GetBlock(char *,unsigned long,unsigned long,unsigned long *,unsigned long *)
public: virtual unsigned long __thiscall GetHeaderSize(void)
public: virtual int __thiscall Init(char *,unsigned long)
public: virtual int __thiscall InitNew(unsigned long)
public: virtual void __thiscall Open(char *)
public: void __thiscall PutBlock(char const *,unsigned long,unsigned long)
protected: void __thiscall CorrectReadPosition(int *)
protected: virtual int __thiscall DiscardNextRecord(void)
protected: unsigned long __thiscall GetBusySize(void)
protected: unsigned long __thiscall GetFreeSize(void)
protected: virtual void __thiscall InitHeader(unsigned long)
protected: int __thiscall IsFree(void)
protected: int __thiscall IsReadOverwritten(void)
protected: virtual int __thiscall TrySearchMemory(unsigned long)
const CBaseRingBuffer::`vftable'
};

#endif

