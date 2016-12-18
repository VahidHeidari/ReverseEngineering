#ifndef CLIPVOLUMEBOX_H_
#define CLIPVOLUMEBOX_H_

class ClipVolumeBox
{
public: __thiscall ClipVolumeBox::ClipVolumeBox(class Box const &)
public: __thiscall ClipVolumeBox::ClipVolumeBox(class ClipVolumeBox const &)
public: __thiscall ClipVolumeBox::ClipVolumeBox(float,float,float,float,float,float)
public: __thiscall ClipVolumeBox::ClipVolumeBox(void)
public: virtual __thiscall ClipVolumeBox::~ClipVolumeBox(void)
public: class ClipVolumeBox & __thiscall ClipVolumeBox::operator=(class ClipVolumeBox const &)
public: virtual enum IntersectionType __thiscall ClipVolumeBox::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumeBox::IntersectSquare(float,float,float,float)
public: void __thiscall ClipVolumeBox::Set(float,float,float,float,float,float)
protected: virtual void __thiscall ClipVolumeBox::Prepare(float,float,float,float,int)
const ClipVolumeBox::`vftable'
};

#endif

