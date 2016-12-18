#ifndef VEC3D_H_
#define VEC3D_H_

#include "Polar.h"

class Vec3D
{
public: __thiscall Vec3D::Vec3D(double,double,double)
public: __thiscall Vec3D::Vec3D(struct Polar const &)
public: __thiscall Vec3D::Vec3D(void)
public: class Vec3D & __thiscall Vec3D::operator=(class Vec3D const &)
public: double __thiscall Vec3D::operator[](enum index)const 
public: double __thiscall Vec3D::operator[](enum pol_index)
public: void __thiscall Vec3D::operator+=(class Vec3D const &)
public: void __thiscall Vec3D::operator-=(class Vec3D const &)
private: void __thiscall Vec3D::CalcPolarAngles(void)
};

double __cdecl Dot(class Vec3D const &,class Vec3D const &)
double __cdecl Norm(class Vec3D const &)
class Vec3D __cdecl Cross(class Vec3D const &,class Vec3D const &)
class Vec3D __cdecl operator*(class Vec3D const &,double)
class Vec3D __cdecl operator*(double,class Vec3D const &)
class Vec3D __cdecl operator+(class Vec3D const &,class Vec3D const &)
class Vec3D __cdecl operator-(class Vec3D const &)
class Vec3D __cdecl operator-(class Vec3D const &,class Vec3D const &)
class Vec3D __cdecl operator/(class Vec3D const &,double)

#endif

