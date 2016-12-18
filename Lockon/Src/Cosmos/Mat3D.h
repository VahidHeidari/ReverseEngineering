#ifndef MAT3D_H_
#define MAT3D_H_

#include "Vect3D.h"

class Mat3D
{
public: __thiscall Mat3D::Mat3D(class Vec3D const &,class Vec3D const &,class Vec3D const &)
public: __thiscall Mat3D::Mat3D(void)
public: class Mat3D & __thiscall Mat3D::operator=(class Mat3D const &)
};

class Mat3D __cdecl Id3D(void)
class Mat3D __cdecl R_x(double)
class Mat3D __cdecl R_y(double)
class Mat3D __cdecl R_z(double)
class Mat3D __cdecl Transp(class Mat3D const &)
class Mat3D __cdecl operator*(class Mat3D const &,class Mat3D const &)
class Mat3D __cdecl operator*(class Mat3D const &,double)
class Mat3D __cdecl operator*(double,class Mat3D const &)
class Mat3D __cdecl operator+(class Mat3D const &,class Mat3D const &)
class Mat3D __cdecl operator-(class Mat3D const &)
class Mat3D __cdecl operator-(class Mat3D const &,class Mat3D const &)
class Mat3D __cdecl operator/(class Mat3D const &,double)
class Vec3D __cdecl Col(class Mat3D const &,enum index)
class Vec3D __cdecl Row(class Mat3D const &,enum index)

#endif

