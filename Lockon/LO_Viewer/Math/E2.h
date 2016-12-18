#ifndef E2_H_
#define E2_H_

namespace E2
{

class Vector
{
public: __thiscall E2::Vector::Vector(class E2::Vector &)
public: __thiscall E2::Vector::Vector(float)
public: __thiscall E2::Vector::Vector(float,double)
public: __thiscall E2::Vector::Vector(float,float)
public: __thiscall E2::Vector::Vector(void)
public: bool __thiscall E2::Vector::operator!=(class E2::Vector &)
public: bool __thiscall E2::Vector::operator<(class E2::Vector &)
public: bool __thiscall E2::Vector::operator<=(class E2::Vector &)
public: bool __thiscall E2::Vector::operator==(class E2::Vector &)
public: bool __thiscall E2::Vector::operator>(class E2::Vector &)
public: bool __thiscall E2::Vector::operator>=(class E2::Vector &)
public: class E2::Vector & __thiscall E2::Vector::operator*=(float)
public: class E2::Vector & __thiscall E2::Vector::operator+=(class E2::Vector &)
public: class E2::Vector & __thiscall E2::Vector::operator-=(class E2::Vector &)
public: class E2::Vector & __thiscall E2::Vector::operator/=(float)
public: class E2::Vector & __thiscall E2::Vector::operator=(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::Scale(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::crossX(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::crossY(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::operator*(float)
public: class E2::Vector __thiscall E2::Vector::operator+(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::operator-(class E2::Vector &)
public: class E2::Vector __thiscall E2::Vector::operator-(void)
public: class E2::Vector __thiscall E2::Vector::operator/(float)
public: class E2::Vector __thiscall E2::Vector::ort(void)
public: class E2::Vector __thiscall E2::Vector::rot(double)
public: class E2::Vector __thiscall E2::Vector::rot(void)
public: float __thiscall E2::Vector::decompose(class E2::Vector &,class E2::Vector &,class E2::Vector &)
public: float __thiscall E2::Vector::getX(void)
public: float __thiscall E2::Vector::getY(void)
public: float __thiscall E2::Vector::norma(void)
public: float __thiscall E2::Vector::normaAbs(void)
public: float __thiscall E2::Vector::operator*(class E2::Vector &)
public: float __thiscall E2::Vector::operator^(class E2::Vector &)
public: double __thiscall E2::Vector::polar(void)
};

class Edge
{
public: __thiscall E2::Edge::Edge(class E2::Vector &,class E2::Vector &)
public: __thiscall E2::Edge::Edge(class E2::Edge &)
public: __thiscall E2::Edge::Edge(void)
public: bool __thiscall E2::Edge::operator!=(class E2::Edge &)
public: bool __thiscall E2::Edge::operator==(class E2::Edge &)
public: class E2::Edge & __thiscall E2::Edge::operator=(class E2::Edge &)
public: class E2::Edge __thiscall E2::Edge::flip(void)
public: class E2::Edge __thiscall E2::Edge::invert(void)
public: class E2::Edge __thiscall E2::Edge::rot(double)
public: class E2::Edge __thiscall E2::Edge::rotNorm(void)
public: class E2::Vector __thiscall E2::Edge::point(double)
public: class E2::Vector __thiscall E2::Edge::vector(void)
public: int __thiscall E2::Edge::classify(class E2::Vector &)
public: int __thiscall E2::Edge::cross(class E2::Edge &,double &,double &)
public: int __thiscall E2::Edge::intersect(class E2::Edge &,double &)
};

class Operator
{
public: __thiscall E2::Operator::Operator(class E2::Operator &)
public: __thiscall E2::Operator::Operator(float)
public: __thiscall E2::Operator::Operator(float,float,float,float)
public: __thiscall E2::Operator::Operator(void)
public: class E2::Operator & __thiscall E2::Operator::operator*=(float)
public: class E2::Operator & __thiscall E2::Operator::operator+=(class E2::Operator &)
public: class E2::Operator & __thiscall E2::Operator::operator-=(class E2::Operator &)
public: class E2::Operator & __thiscall E2::Operator::operator/=(float)
public: class E2::Operator & __thiscall E2::Operator::operator=(class E2::Operator &)
public: class E2::Operator __thiscall E2::Operator::I(void)
public: class E2::Operator __thiscall E2::Operator::T(void)
public: class E2::Operator __thiscall E2::Operator::operator*(class E2::Operator &)
public: class E2::Operator __thiscall E2::Operator::operator*(float)
public: class E2::Operator __thiscall E2::Operator::operator+(class E2::Operator &)
public: class E2::Operator __thiscall E2::Operator::operator-(class E2::Operator &)
public: class E2::Operator __thiscall E2::Operator::operator-(void)
public: class E2::Operator __thiscall E2::Operator::operator/(float)
public: class E2::Vector __thiscall E2::Operator::operator*(class E2::Vector &)
public: float __thiscall E2::Operator::Det(void)
};

class E2::Vector __cdecl operator*(float,class E2::Vector &)

}		/// namespace E2

#endif

