#ifndef WASUN_H_
#define WASUN_H_

#include "Graphics.h"
#include "Math.h"

class waSun
{
public: __thiscall waSun(class waSun const &)
public: __thiscall waSun(void)
public: __thiscall ~waSun(void)
public: class waSun & __thiscall operator=(class waSun const &)
public: class Vector3 const & __thiscall GetSun(void)
public: void __thiscall AddToEffects(class HeapVector<class VolumeEffect *> *)
public: void __thiscall Draw(unsigned int)
public: void __thiscall FillOutputObjects(void)
public: void __thiscall Finish(void)
public: void __thiscall Init(void)
public: float __thiscall Get_Sun_Zenit(void)
public: virtual class Position3 const & __thiscall GetPosition(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall waSun::ClassName(void)
private: void __thiscall DrawStars(class Vector3 const &,float)
private: void __thiscall GetAstR0(double *,int const *,double)
private: void __thiscall GetMoon(double *,int const *,double)
private: void __thiscall GetPlanetDirection(class Vector3 &,float,float)
private: void __thiscall GetPlanetRA_Dec(int,int,int,double)
private: void __thiscall GetSunColor(class Vector3 const &)
private: void __thiscall InitMoonFace(void)
private: void __thiscall InitMoonLight(void)
private: void __thiscall InitSphereClipPlane(void)
private: void __thiscall InitStars(void)
private: void __thiscall InitSunFace(void)
private: void __thiscall InitSunLight(void)
private: void __thiscall Lat_Long(class cPosition &)
private: void __thiscall ReadSkyObjects(struct StarData * &,int *,char const *)
private: void __thiscall SetSunColorAndHaloSize(void)
private: void __thiscall Sun_Psi_h(void)
private: void __thiscall TransformStarRA_Dec(void)
private: void __thiscall getMoonPos(int,int,int,double,double &,double &)
private: double __thiscall getStarTime(double)
private: double __thiscall getUT_sec(void)
private: float __thiscall GetMoonPhase(void)
private: int __thiscall Get_n_day(void)
private: class Vector3 __thiscall GetSkyColor(class Vector3 const &,class Vector3 const &,float)
const waSun::`vftable'
};

class waSun theSun

#endif

