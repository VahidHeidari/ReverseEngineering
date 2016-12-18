#ifndef E3_H_
#define E3_H_

namespace E3
{
class Vector
{
public: __thiscall E3::Vector::Vector(class E3::Vector const &)
public: __thiscall E3::Vector::Vector(float const *)
public: __thiscall E3::Vector::Vector(float)
public: __thiscall E3::Vector::Vector(float,float,float)
public: __thiscall E3::Vector::Vector(struct D3DXVECTOR3)
public: __thiscall E3::Vector::Vector(void)
public: __thiscall E3::Vector::operator float *(void)
public: __thiscall E3::Vector::operator float const *(void)const 
public: __thiscall E3D::Vector::operator class E3::Vector(void)const 
public: bool __thiscall E3::Vector::operator!=(class E3::Vector const &)const 
public: bool __thiscall E3::Vector::operator<(class E3::Vector const &)const 
public: bool __thiscall E3::Vector::operator<=(class E3::Vector const &)const 
public: bool __thiscall E3::Vector::operator==(class E3::Vector const &)const 
public: bool __thiscall E3::Vector::operator>(class E3::Vector const &)const 
public: bool __thiscall E3::Vector::operator>=(class E3::Vector const &)const 
public: class E2::Vector __thiscall E3::Vector::VectorXY(void)const 
public: class E2::Vector __thiscall E3::Vector::VectorXZ(void)const 
public: class E2::Vector __thiscall E3::Vector::VectorYX(void)const 
public: class E2::Vector __thiscall E3::Vector::VectorYZ(void)const 
public: class E2::Vector __thiscall E3::Vector::VectorZX(void)const 
public: class E2::Vector __thiscall E3::Vector::VectorZY(void)const 
public: class E3::Vector & __thiscall E3::Vector::operator*=(float)
public: class E3::Vector & __thiscall E3::Vector::operator+=(class E3::Vector const &)
public: class E3::Vector & __thiscall E3::Vector::operator-=(class E3::Vector const &)
public: class E3::Vector & __thiscall E3::Vector::operator/=(float)
public: class E3::Vector & __thiscall E3::Vector::operator=(class E3::Vector const &)
public: class E3::Vector __thiscall E3::Vector::Scale(class E3::Vector const &)const 
public: class E3::Vector __thiscall E3::Vector::crossXY(class E3::Vector &)const 
public: class E3::Vector __thiscall E3::Vector::crossXZ(class E3::Vector &)const 
public: class E3::Vector __thiscall E3::Vector::crossYZ(class E3::Vector &)const 
public: class E3::Vector __thiscall E3::Vector::operator*(float)const 
public: class E3::Vector __thiscall E3::Vector::operator+(class E3::Vector const &)const 
public: class E3::Vector __thiscall E3::Vector::operator-(class E3::Vector const &)const 
public: class E3::Vector __thiscall E3::Vector::operator-(void)const 
public: class E3::Vector __thiscall E3::Vector::operator/(float)const 
public: class E3::Vector __thiscall E3::Vector::operator^(class E3::Vector const &)const 
public: class E3::Vector __thiscall E3::Vector::ort(void)const 
public: class E3::Vector __thiscall E3::Vector::rotX(double)
public: class E3::Vector __thiscall E3::Vector::rotXYZ(class E3::Vector &,float)
public: class E3::Vector __thiscall E3::Vector::rotY(double)
public: class E3::Vector __thiscall E3::Vector::rotZ(double)
public: double __thiscall E3::Vector::polarZX(void)const 
public: float __thiscall E3::Vector::getX(void)const 
public: float __thiscall E3::Vector::getY(void)const 
public: float __thiscall E3::Vector::getZ(void)const 
public: float __thiscall E3::Vector::length(void)const 
public: float __thiscall E3::Vector::length2(void)const 
public: float __thiscall E3::Vector::length2_ZX(void)const 
public: float __thiscall E3::Vector::norma(void)const 
public: float __thiscall E3::Vector::normaAbs(void)const 
public: float __thiscall E3::Vector::operator*(class E3::Vector const &)const 
public: void __thiscall E3::Vector::norm(void)
public: void __thiscall E3::Vector::normZX(void)
};

class Operator
{
public: __thiscall E3::Operator::Operator(class E3::Operator &)
public: __thiscall E3::Operator::Operator(class E3::Vector &,class E3::Vector &,class E3::Vector &)
public: __thiscall E3::Operator::Operator(float)
public: __thiscall E3::Operator::Operator(float,float,float,float,float,float,float,float,float)
public: __thiscall E3::Operator::Operator(void)
public: class E3::Operator & __thiscall E3::Operator::operator*=(float)
public: class E3::Operator & __thiscall E3::Operator::operator+=(class E3::Operator &)
public: class E3::Operator & __thiscall E3::Operator::operator-=(class E3::Operator &)
public: class E3::Operator & __thiscall E3::Operator::operator/=(float)
public: class E3::Operator & __thiscall E3::Operator::operator=(class E3::Operator &)
public: class E3::Operator __thiscall E3::Operator::I(void)
public: class E3::Operator __thiscall E3::Operator::T(void)
public: class E3::Operator __thiscall E3::Operator::operator*(class E3::Operator &)
public: class E3::Operator __thiscall E3::Operator::operator*(float)
public: class E3::Operator __thiscall E3::Operator::operator+(class E3::Operator &)
public: class E3::Operator __thiscall E3::Operator::operator-(class E3::Operator &)
public: class E3::Operator __thiscall E3::Operator::operator-(void)
public: class E3::Operator __thiscall E3::Operator::operator/(float)
public: class E3::Vector __thiscall E3::Operator::operator*(class E3::Vector &)
public: float __thiscall E3::Operator::Det(void)
};

class E3::Vector __cdecl operator*(float,class E3::Vector const &)

}		/// namespace E3

#endif

