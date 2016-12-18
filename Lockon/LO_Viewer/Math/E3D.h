#ifndef E3D_H_
#define E3D_H_

namespace E3D
{

class Vector
{
class E3D::Vector __cdecl operator*(double,class E3D::Vector const &)
public: __thiscall E3D::Vector::Vector(class E3::Vector const &)
public: __thiscall E3D::Vector::Vector(class E3D::Vector const &)
public: __thiscall E3D::Vector::Vector(double)
public: __thiscall E3D::Vector::Vector(double,double,double)
public: __thiscall E3D::Vector::Vector(void)
public: bool __thiscall E3D::Vector::operator!=(class E3D::Vector const &)const 
public: bool __thiscall E3D::Vector::operator<(class E3D::Vector const &)const 
public: bool __thiscall E3D::Vector::operator<=(class E3D::Vector const &)const 
public: bool __thiscall E3D::Vector::operator==(class E3D::Vector const &)const 
public: bool __thiscall E3D::Vector::operator>(class E3D::Vector const &)const 
public: bool __thiscall E3D::Vector::operator>=(class E3D::Vector const &)const 
public: class E2::Vector __thiscall E3D::Vector::VectorXY(void)const 
public: class E2::Vector __thiscall E3D::Vector::VectorXZ(void)const 
public: class E2::Vector __thiscall E3D::Vector::VectorYX(void)const 
public: class E2::Vector __thiscall E3D::Vector::VectorYZ(void)const 
public: class E2::Vector __thiscall E3D::Vector::VectorZX(void)const 
public: class E2::Vector __thiscall E3D::Vector::VectorZY(void)const 
public: class E3D::Vector & __thiscall E3D::Vector::operator*=(double)
public: class E3D::Vector & __thiscall E3D::Vector::operator+=(class E3D::Vector const &)
public: class E3D::Vector & __thiscall E3D::Vector::operator-=(class E3D::Vector const &)
public: class E3D::Vector & __thiscall E3D::Vector::operator/=(double)
public: class E3D::Vector & __thiscall E3D::Vector::operator=(class E3::Vector const &)
public: class E3D::Vector & __thiscall E3D::Vector::operator=(class E3D::Vector const &)
public: class E3D::Vector __thiscall E3D::Vector::Scale(class E3D::Vector const &)const 
public: class E3D::Vector __thiscall E3D::Vector::crossXY(class E3D::Vector &)const 
public: class E3D::Vector __thiscall E3D::Vector::crossXZ(class E3D::Vector &)const 
public: class E3D::Vector __thiscall E3D::Vector::crossYZ(class E3D::Vector &)const 
public: class E3D::Vector __thiscall E3D::Vector::operator*(double)const 
public: class E3D::Vector __thiscall E3D::Vector::operator+(class E3D::Vector const &)const 
public: class E3D::Vector __thiscall E3D::Vector::operator-(class E3D::Vector const &)const 
public: class E3D::Vector __thiscall E3D::Vector::operator-(void)const 
public: class E3D::Vector __thiscall E3D::Vector::operator/(double)const 
public: class E3D::Vector __thiscall E3D::Vector::operator^(class E3D::Vector const &)const 
public: class E3D::Vector __thiscall E3D::Vector::ort(void)const 
public: class E3D::Vector __thiscall E3D::Vector::rotX(double)
public: class E3D::Vector __thiscall E3D::Vector::rotXYZ(class E3D::Vector &,double)
public: class E3D::Vector __thiscall E3D::Vector::rotY(double)
public: class E3D::Vector __thiscall E3D::Vector::rotZ(double)
public: double __thiscall E3D::Vector::getX(void)const 
public: double __thiscall E3D::Vector::getY(void)const 
public: double __thiscall E3D::Vector::getZ(void)const 
public: double __thiscall E3D::Vector::length(void)const 
public: double __thiscall E3D::Vector::length2(void)const 
public: double __thiscall E3D::Vector::length2_ZX(void)const 
public: double __thiscall E3D::Vector::norma(void)const 
public: double __thiscall E3D::Vector::normaAbs(void)const 
public: double __thiscall E3D::Vector::operator*(class E3D::Vector const &)const 
public: double __thiscall E3D::Vector::polarZX(void)const 
public: void __thiscall E3D::Vector::norm(void)
public: void __thiscall E3D::Vector::normZX(void)
};

class Operator
{
public: __thiscall E3D::Operator::Operator(class E3D::Operator &)
public: __thiscall E3D::Operator::Operator(class E3D::Vector &,class E3D::Vector &,class E3D::Vector &)
public: __thiscall E3D::Operator::Operator(double,double,double,double,double,double,double,double,double)
public: __thiscall E3D::Operator::Operator(float)
public: __thiscall E3D::Operator::Operator(void)
public: class E3D::Operator & __thiscall E3D::Operator::operator*=(float)
public: class E3D::Operator & __thiscall E3D::Operator::operator+=(class E3D::Operator &)
public: class E3D::Operator & __thiscall E3D::Operator::operator-=(class E3D::Operator &)
public: class E3D::Operator & __thiscall E3D::Operator::operator/=(double)
public: class E3D::Operator & __thiscall E3D::Operator::operator=(class E3D::Operator &)
public: class E3D::Operator __thiscall E3D::Operator::I(void)
public: class E3D::Operator __thiscall E3D::Operator::T(void)
public: class E3D::Operator __thiscall E3D::Operator::operator*(class E3D::Operator &)
public: class E3D::Operator __thiscall E3D::Operator::operator*(double)
public: class E3D::Operator __thiscall E3D::Operator::operator+(class E3D::Operator &)
public: class E3D::Operator __thiscall E3D::Operator::operator-(class E3D::Operator &)
public: class E3D::Operator __thiscall E3D::Operator::operator-(void)
public: class E3D::Operator __thiscall E3D::Operator::operator/(double)
public: class E3D::Vector __thiscall E3D::Operator::operator*(class E3D::Vector &)
public: double __thiscall E3D::Operator::Det(void)
};

}		/// namespace E3D

#endif

