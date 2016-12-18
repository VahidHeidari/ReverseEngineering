#ifndef CLIPVOLUMECAMERA_H_
#define CLIPVOLUMECAMERA_H_

class ClipVolumeCamera
{
public: __thiscall ClipVolumeCamera::ClipVolumeCamera(class ClipVolumeCamera const &)
public: __thiscall ClipVolumeCamera::ClipVolumeCamera(class Position3 &,float,float,float)
public: __thiscall ClipVolumeCamera::ClipVolumeCamera(class Position3 &,float,float,float,float)
public: __thiscall ClipVolumeCamera::ClipVolumeCamera(class cPosition &,float,float,float)
public: virtual __thiscall ClipVolumeCamera::~ClipVolumeCamera(void)
public: class ClipVolumeCamera & __thiscall ClipVolumeCamera::operator=(class ClipVolumeCamera const &)
public: virtual enum IntersectionType __thiscall ClipVolumeCamera::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumeCamera::IntersectSquare(float,float,float,float)
public: virtual void __thiscall ClipVolumeCamera::Prepare(float,float,float,float,int)
const ClipVolumeCamera::`vftable'
};

#endif

