#ifndef FLIGHT_H_
#define FLIGHT_H_

#include "Common.h"

double __cdecl getFogDensity(double,double,double)
double __cdecl getTurbulence(double,double,double)
void __cdecl getWind(double,double,double,double *,double *)

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,struct RunWay &)

#endif

