#ifndef VECTOR4_H_
#define VECTOR4_H_

class Vector4
{
public: __thiscall Vector4::Vector4(float const *)
public: __thiscall Vector4::Vector4(float,float,float,float)
public: __thiscall Vector4::Vector4(struct D3DXVECTOR3 const &,float)
public: __thiscall Vector4::Vector4(struct D3DXVECTOR4 const &)
public: __thiscall Vector4::Vector4(void)
public: __thiscall Vector4::operator float *(void)
public: __thiscall Vector4::operator float const *(void)const 
public: bool __thiscall Vector4::operator!=(class Vector4 const &)const 
public: bool __thiscall Vector4::operator==(class Vector4 const &)const 
public: class Vector4 & __thiscall Vector4::add(class Vector4 const &,class Vector4 const &)
public: class Vector4 & __thiscall Vector4::baryCentric(class Vector4 const &,class Vector4 const &,class Vector4 const &,float,float)
public: class Vector4 & __thiscall Vector4::catmullRom(class Vector4 const &,class Vector4 const &,class Vector4 const &,class Vector4 const &,float)
public: class Vector4 & __thiscall Vector4::cross(class Vector4 const &,class Vector4 const &,class Vector4 const &)
public: class Vector4 & __thiscall Vector4::hermite(class Vector4 const &,class Vector4 const &,class Vector4 const &,class Vector4 const &,float)
public: class Vector4 & __thiscall Vector4::lerp(class Vector4 const &,class Vector4 const &,float)
public: class Vector4 & __thiscall Vector4::maximize(class Vector4 const &,class Vector4 const &)
public: class Vector4 & __thiscall Vector4::minimize(class Vector4 const &,class Vector4 const &)
public: class Vector4 & __thiscall Vector4::normalize(void)
public: class Vector4 & __thiscall Vector4::operator()(float,float,float,float)const 
public: class Vector4 & __thiscall Vector4::operator()(struct D3DXVECTOR3 const &,float)const 
public: class Vector4 & __thiscall Vector4::operator*=(float)
public: class Vector4 & __thiscall Vector4::operator+=(class Vector4 const &)
public: class Vector4 & __thiscall Vector4::operator-=(class Vector4 const &)
public: class Vector4 & __thiscall Vector4::operator/=(float)
public: class Vector4 & __thiscall Vector4::operator=(class Vector4 const &)
public: class Vector4 & __thiscall Vector4::operator=(struct D3DXVECTOR3 const &)
public: class Vector4 & __thiscall Vector4::scale(class Vector4 const &,float)
public: class Vector4 & __thiscall Vector4::subtract(class Vector4 const &,class Vector4 const &)
public: class Vector4 & __thiscall Vector4::transform(class Vector4 const &,struct D3DXMATRIX const &)
public: class Vector4 & __thiscall Vector4::transform(struct D3DXVECTOR3 const &,struct D3DXMATRIX const &)
public: class Vector4 __thiscall Vector4::operator*(float)const 
public: class Vector4 __thiscall Vector4::operator+(class Vector4 const &)const 
public: class Vector4 __thiscall Vector4::operator+(void)const 
public: class Vector4 __thiscall Vector4::operator-(class Vector4 const &)const 
public: class Vector4 __thiscall Vector4::operator-(void)const 
public: class Vector4 __thiscall Vector4::operator/(float)const 
public: float & __thiscall Vector4::operator[](int)const 
public: float __thiscall Vector4::dot(class Vector4 const &)
public: float __thiscall Vector4::length(void)
public: float __thiscall Vector4::lengthSq(void)
public: float __thiscall Vector4::operator*(class Vector4 const &)const 
};

#endif

