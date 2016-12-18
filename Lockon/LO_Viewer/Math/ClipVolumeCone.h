#ifndef CLIPVOLUMECONE_H_
#define CLIPVOLUMECONE_H_

class ClipVolumeCone
{
public: __thiscall ClipVolumeCone::ClipVolumeCone(class ClipVolumeCone const &)
public: __thiscall ClipVolumeCone::ClipVolumeCone(class cPosition const &,float,float)
public: virtual __thiscall ClipVolumeCone::~ClipVolumeCone(void)
public: class ClipVolumeCone & __thiscall ClipVolumeCone::operator=(class ClipVolumeCone const &)
public: virtual enum IntersectionType __thiscall ClipVolumeCone::IntersectBox(float,float,float,float,float,float)
public: virtual enum IntersectionType __thiscall ClipVolumeCone::IntersectSquare(float,float,float,float)
protected: virtual void __thiscall ClipVolumeCone::Prepare(float,float,float,float,int)
protected: void __thiscall ClipVolumeCone::CreateLine(class E3::Vector &,class E3::Vector const &,class E3::Vector const &)
const ClipVolumeCone::`vftable'
};

#endif

