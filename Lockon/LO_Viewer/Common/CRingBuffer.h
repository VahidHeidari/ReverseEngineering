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

#ifndef CRINGBUFFER_H_
#define CRINGBUFFER_H_

class CRingBuffer
{
public: __thiscall CRingBuffer(class CRingBuffer const &)
public: __thiscall CRingBuffer(void)
public: virtual __thiscall ~CRingBuffer(void)
public: class CRingBuffer & __thiscall operator=(class CRingBuffer const &)
protected: virtual int __thiscall DiscardNextRecord(void)
public: int __thiscall GetAddCount(void)
public: int __thiscall GetDelCount(void)
public: virtual unsigned long __thiscall GetHeaderSize(void)
public: int __thiscall GetTotalCount(void)
protected: virtual void __thiscall InitHeader(unsigned long)
public: virtual void __thiscall Open(char *)
public: int __thiscall PopData(char const *,unsigned long,unsigned long)
public: unsigned long __thiscall PopStart(int *)
public: void __thiscall PopStop(void)
public: int __thiscall PushData(char const *,unsigned long)
public: int __thiscall PushStart(unsigned long)
public: int __thiscall PushStop(void)
const CRingBuffer::`vftable'
};

#endif

