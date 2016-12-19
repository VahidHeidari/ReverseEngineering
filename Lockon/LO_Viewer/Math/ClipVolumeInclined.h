#ifndef CLIPVOLUMEINCLINED_H_
#define CLIPVOLUMEINCLINED_H_

class ClipVolumeInclined
{
public: __thiscall ClipVolumeInclined::ClipVolumeInclined(class Box const &,class Vector3 const &,float)
public: __thiscall ClipVolumeInclined::ClipVolumeInclined(class ClipVolumeInclined const &)
public: __thiscall ClipVolumeInclined::ClipVolumeInclined(void)
public: virtual __thiscall ClipVolumeInclined::~ClipVolumeInclined(void)
public: class ClipVolumeInclined & __thiscall ClipVolumeInclined::operator=(class ClipVolumeInclined const &)
public: enum IntersectionType __thiscall ClipVolumeInclined::IntersectOrientedBox(class Position3 const &,class Box const &)const 
public: virtual enum IntersectionType __thiscall ClipVolumeInclined::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumeInclined::IntersectSquare(float,float,float,float)
public: virtual void __thiscall ClipVolumeInclined::Prepare(float,float,float,float,int)
const ClipVolumeInclined::`vftable'
};

#endif

