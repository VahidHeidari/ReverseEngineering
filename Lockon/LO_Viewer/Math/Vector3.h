#ifndef VECTOR3_H_
#define VECTOR3_H_

class Vector3
{
public: __thiscall Vector3::Vector3(class Vector3 const &)
public: __thiscall Vector3::Vector3(float const *)
public: __thiscall Vector3::Vector3(float,float,float)
public: __thiscall Vector3::Vector3(void)
public: __thiscall Vector3::operator float *(void)
public: __thiscall Vector3::operator float const *(void)const 
public: bool __thiscall Vector3::less_all(class Vector3 const &)const 
public: bool __thiscall Vector3::less_any(class Vector3 const &)const 
public: bool __thiscall Vector3::more_all(class Vector3 const &)const 
public: bool __thiscall Vector3::more_any(class Vector3 const &)const 
public: bool __thiscall Vector3::operator!=(class Vector3 const &)const 
public: bool __thiscall Vector3::operator==(class Vector3 const &)const 
public: class Vector3 & __thiscall Vector3::operator*=(float)
public: class Vector3 & __thiscall Vector3::operator+=(class Vector3 const &)
public: class Vector3 & __thiscall Vector3::operator-=(class Vector3 const &)
public: class Vector3 & __thiscall Vector3::operator/=(float)
public: class Vector3 & __thiscall Vector3::operator=(class Vector3 const &)
public: class Vector3 & __thiscall Vector3::operator^=(class Vector3 const &)
public: class Vector3 & __thiscall Vector3::scale(float)
public: class Vector3 __thiscall Vector3::normed(void)const 
public: class Vector3 __thiscall Vector3::operator*(float)const 
public: class Vector3 __thiscall Vector3::operator+(class Vector3 const &)const 
public: class Vector3 __thiscall Vector3::operator+(void)const 
public: class Vector3 __thiscall Vector3::operator-(class Vector3 const &)const 
public: class Vector3 __thiscall Vector3::operator-(void)const 
public: class Vector3 __thiscall Vector3::operator/(float)const 
public: class Vector3 __thiscall Vector3::operator^(class Vector3 const &)const 
public: float __thiscall Vector3::length(void)const 
public: float __thiscall Vector3::lengthSq(void)const 
public: float __thiscall Vector3::operator*(class Vector3 const &)const 
public: void __thiscall Vector3::norm(void)
public: void __thiscall Vector3::null(void)
public: void __thiscall Vector3::set(float,float,float)
public: void __thiscall Vector3::set_length(float)
};


#endif

