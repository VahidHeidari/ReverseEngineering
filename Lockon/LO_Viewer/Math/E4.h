#ifndef E4_H_
#define E4_H_

namespace E4
{

class Vector
{
public: __thiscall E4::Vector::Vector(class E4::Vector &)
public: __thiscall E4::Vector::Vector(float)
public: __thiscall E4::Vector::Vector(float,float,float,float)
public: __thiscall E4::Vector::Vector(void)
public: bool __thiscall E4::Vector::operator!=(class E4::Vector &)
public: bool __thiscall E4::Vector::operator<(class E4::Vector &)
public: bool __thiscall E4::Vector::operator<=(class E4::Vector &)
public: bool __thiscall E4::Vector::operator==(class E4::Vector &)
public: bool __thiscall E4::Vector::operator>(class E4::Vector &)
public: bool __thiscall E4::Vector::operator>=(class E4::Vector &)
public: class E3::Vector __thiscall E4::Vector::BackHomogenius(void)
public: class E4::Vector & __thiscall E4::Vector::operator*=(float)
public: class E4::Vector & __thiscall E4::Vector::operator+=(class E4::Vector &)
public: class E4::Vector & __thiscall E4::Vector::operator-=(class E4::Vector &)
public: class E4::Vector & __thiscall E4::Vector::operator/=(float)
public: class E4::Vector & __thiscall E4::Vector::operator=(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::Scale(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::crossXYW(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::crossXYZ(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::crossXZW(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::crossYZW(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::operator*(float)
public: class E4::Vector __thiscall E4::Vector::operator+(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::operator-(class E4::Vector &)
public: class E4::Vector __thiscall E4::Vector::operator-(void)
public: class E4::Vector __thiscall E4::Vector::operator/(float)
public: class E4::Vector __thiscall E4::Vector::ort(float)
public: float __thiscall E4::Vector::getW(void)
public: float __thiscall E4::Vector::getX(void)
public: float __thiscall E4::Vector::getY(void)
public: float __thiscall E4::Vector::getZ(void)
public: float __thiscall E4::Vector::norma(void)
public: float __thiscall E4::Vector::normaAbs(void)
public: float __thiscall E4::Vector::operator*(class E4::Vector &)
};

class Operator
{
public: __thiscall E4::Operator::Operator(class E4::Operator &)
public: __thiscall E4::Operator::Operator(float)
public: __thiscall E4::Operator::Operator(float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float)
public: __thiscall E4::Operator::Operator(void)
public: class E4::Operator & __thiscall E4::Operator::operator*=(float)
public: class E4::Operator & __thiscall E4::Operator::operator+=(class E4::Operator &)
public: class E4::Operator & __thiscall E4::Operator::operator-=(class E4::Operator &)
public: class E4::Operator & __thiscall E4::Operator::operator/=(float)
public: class E4::Operator & __thiscall E4::Operator::operator=(class E4::Operator &)
public: class E4::Operator __thiscall E4::Operator::I(void)
public: class E4::Operator __thiscall E4::Operator::T(void)
public: class E4::Operator __thiscall E4::Operator::operator*(class E4::Operator &)
public: class E4::Operator __thiscall E4::Operator::operator*(float)
public: class E4::Operator __thiscall E4::Operator::operator+(class E4::Operator &)
public: class E4::Operator __thiscall E4::Operator::operator-(class E4::Operator &)
public: class E4::Operator __thiscall E4::Operator::operator-(void)
public: class E4::Operator __thiscall E4::Operator::operator/(float)
public: class E4::Vector __thiscall E4::Operator::operator*(class E4::Vector &)
public: float __thiscall E4::Operator::Det(void)
};

class E4::Vector __cdecl operator*(float,class E4::Vector &)

}		/// namespace E4

#endif

