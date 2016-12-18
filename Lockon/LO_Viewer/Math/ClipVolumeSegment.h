#ifndef CLIPVOLUMESEGMENT_H_
#define CLIPVOLUMESEGMENT_H_

class ClipVolumeSegment
{
public: __thiscall ClipVolumeSegment::ClipVolumeSegment(class ClipVolumeSegment const &)
public: __thiscall ClipVolumeSegment::ClipVolumeSegment(class E3::Vector const &,class E3::Vector const &)
public: virtual __thiscall ClipVolumeSegment::~ClipVolumeSegment(void)
public: class ClipVolumeSegment & __thiscall ClipVolumeSegment::operator=(class ClipVolumeSegment const &)
public: virtual enum IntersectionType __thiscall ClipVolumeSegment::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumeSegment::IntersectSquare(float,float,float,float)
protected: virtual void __thiscall ClipVolumeSegment::Prepare(float,float,float,float,int)
const ClipVolumeSegment::`vftable'
};

#endif

