#ifndef CLIPVOLUMEPLANES_H_
#define CLIPVOLUMEPLANES_H_

class ClipVolumePlanes
{
public: __thiscall ClipVolumePlanes::ClipVolumePlanes(class ClipVolumePlanes const &)
public: __thiscall ClipVolumePlanes::ClipVolumePlanes(void)
public: virtual __thiscall ClipVolumePlanes::~ClipVolumePlanes(void)
public: class ClipVolumePlanes & __thiscall ClipVolumePlanes::operator=(class ClipVolumePlanes const &)
public: class Plane const & __thiscall ClipVolumePlanes::GetPlane(int)
public: enum IntersectionType __thiscall ClipVolumePlanes::IntersectOrientedBox(class Position3 const &,class Box const &)const 
public: int __thiscall ClipVolumePlanes::GetPlaneCount(void)
public: virtual enum IntersectionType __thiscall ClipVolumePlanes::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumePlanes::IntersectSquare(float,float,float,float)
public: virtual void __thiscall ClipVolumePlanes::Prepare(float,float,float,float,int)
public: void __thiscall ClipVolumePlanes::AddPlane(class Plane const &)
const ClipVolumePlanes::`vftable'
};

#endif

