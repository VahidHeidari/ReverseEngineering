#ifndef QUATERNION_H_
#define QUATERNION_H_

class Quaternion
{
public: __thiscall Quaternion::Quaternion(class Matrix33 const &)
public: __thiscall Quaternion::Quaternion(class Quaternion const &)
public: __thiscall Quaternion::Quaternion(float,class Vector3 const &)
public: __thiscall Quaternion::Quaternion(float,float,float,float)
public: __thiscall Quaternion::Quaternion(void)
public: __thiscall Quaternion::operator class Matrix33(void)const 
public: bool __thiscall Quaternion::operator==(class Quaternion const &)const 
public: class Quaternion & __thiscall Quaternion::operator*=(class Quaternion const &)
public: class Quaternion & __thiscall Quaternion::operator*=(float)
public: class Quaternion & __thiscall Quaternion::operator+=(class Quaternion const &)
public: class Quaternion & __thiscall Quaternion::operator-=(class Quaternion const &)
public: class Quaternion & __thiscall Quaternion::operator/=(class Quaternion const &)
public: class Quaternion & __thiscall Quaternion::operator/=(float)
public: class Quaternion & __thiscall Quaternion::operator=(class Quaternion const &)
public: class Quaternion __thiscall Quaternion::normed(void)const 
public: class Quaternion __thiscall Quaternion::operator*(class Quaternion const &)const 
public: class Quaternion __thiscall Quaternion::operator*(float)const 
public: class Quaternion __thiscall Quaternion::operator+(class Quaternion const &)const 
public: class Quaternion __thiscall Quaternion::operator-(class Quaternion const &)const 
public: class Quaternion __thiscall Quaternion::operator/(class Quaternion const &)const 
public: class Quaternion __thiscall Quaternion::operator/(float)const 
public: class Quaternion __thiscall Quaternion::operator~(void)const 
public: class Vector3 __thiscall Quaternion::get_axis(void)const 
public: float __thiscall Quaternion::get_angle(void)const 
public: void __thiscall Quaternion::GetEulerAngles(float &,float &,float &)const 
public: void __thiscall Quaternion::SetEulerAngles(float,float,float)
public: void __thiscall Quaternion::invert(void)
public: void __thiscall Quaternion::norm(void)
public: void __thiscall Quaternion::set_2_vectors(class Vector3 const &,class Vector3 const &,bool)
public: void __thiscall Quaternion::set_angle(float)
public: void __thiscall Quaternion::set_axis(class Vector3 const &)
public: void __thiscall Quaternion::set_axis_angle(class Vector3 const &,float)
public: void __thiscall Quaternion::unit(void)

public: static class Quaternion Quaternion::One
};

class Quaternion __cdecl operator*(float,class Quaternion const &)

#endif

