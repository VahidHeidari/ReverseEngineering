#ifndef COSMOS_H_
#define COSMOS_H_

#include "Mat3D.h"
#include "Vec3D.h"

enum index {};

`string'
`string'

class Vec3D __cdecl MoonPos(double)
class Vec3D __cdecl SunPos(double)
class Vec3D __cdecl operator*(class Mat3D const &,class Vec3D const &)
class Vec3D __cdecl operator*(class Vec3D const &,class Mat3D const &)
class Vec3D __cdecl operator*(class Mat3D const &,class Vec3D const &)
double __cdecl Ddd(int,int,double)
double __cdecl Frac(double)
double __cdecl Mjd(int,int,int,int,int,double)
double __cdecl Modulo(double,double)
void __cdecl AddThe(double,double,double,double,double &,double &)

#endif

