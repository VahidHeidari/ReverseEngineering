/**
 * This file is part of Flight Dream, an Iran territory space flight simulator
 * project.
 *
 * This program is property intellectual. You can't copy or distribute nor this
 * file neither any other files of project without express permission of owner
 * of this project. All sources, files, informations, documentations, and even
 * special hardwares are proprietary.
 *
 *            Copyright (c) 2015-2016 by Vahid Heidari (DeltaCode).
 *                           All rights reserved.
 */

#ifndef CBASERINGBUFFER_H_
#define CBASERINGBUFFER_H_

class CBaseRingBuffer
{
public: __thiscall CBaseRingBuffer(class CBaseRingBuffer const &)
public: __thiscall CBaseRingBuffer(void)
public: virtual __thiscall ~CBaseRingBuffer(void)
public: class CBaseRingBuffer & __thiscall operator=(class CBaseRingBuffer const &)
protected: void __thiscall CorrectReadPosition(int *)
protected: virtual int __thiscall DiscardNextRecord(void)
public: void __thiscall GetBlock(char *,unsigned long,unsigned long,unsigned long *,unsigned long *)
protected: unsigned long __thiscall GetBusySize(void)
protected: unsigned long __thiscall GetFreeSize(void)
public: virtual unsigned long __thiscall GetHeaderSize(void)
public: virtual int __thiscall Init(char *,unsigned long)
protected: virtual void __thiscall InitHeader(unsigned long)
public: virtual int __thiscall InitNew(unsigned long)
protected: int __thiscall IsFree(void)
protected: int __thiscall IsReadOverwritten(void)
public: virtual void __thiscall Open(char *)
public: void __thiscall PutBlock(char const *,unsigned long,unsigned long)
protected: virtual int __thiscall TrySearchMemory(unsigned long)
const CBaseRingBuffer::`vftable'
};

#endif

