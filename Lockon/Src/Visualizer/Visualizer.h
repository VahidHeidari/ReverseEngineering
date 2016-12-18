#ifndef VISUALIZER_H_
#define VISUALIZER_H_

#include "Math.h"
#include "smCamera_Implement.h"
#include "viObjectNode.h"

`string'

float __cdecl GetShadowTransform(class Position3 const &,class Position3 &,class Vector3 const &,class Vector3 const &,class Vector3 const &)
float __cdecl GetShadowTransform(class Position3 const &,class Position3 &,class Vector3 const &,float)
void __cdecl DrawChildShadow(class viObjectNode *,class smCamera_Implement *,class ClipVolumePlanes *,class Position3 *,float)
void __cdecl DrawShadow(class viObject *,class Position3 const &,class smCamera_Implement *,float,float)

#endif

