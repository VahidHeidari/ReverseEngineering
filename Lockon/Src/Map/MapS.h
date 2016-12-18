#ifndef MAPS_H_
#define MAPS_H_

namespace MapS
{

class Rec
{
public: __thiscall MapS::Rect::Rect(class MapS::Rect const &)
public: __thiscall MapS::Rect::Rect(class MapS::Vector const &,class MapS::Vector const &)
public: __thiscall MapS::Rect::Rect(double const &,double const &,double const &,double const &)
public: __thiscall MapS::Rect::Rect(void)
public: __thiscall MapS::Rect::~Rect(void)
public: bool __thiscall MapS::Rect::IsIntersect(class MapS::Rect const &)
public: bool const __thiscall MapS::Rect::IsEmpty(void)const 
public: bool const __thiscall MapS::Rect::IsInclude(class MapS::Vector const &)const 
public: bool const __thiscall MapS::Rect::operator!=(class MapS::Rect const &)const 
public: bool const __thiscall MapS::Rect::operator==(class MapS::Rect const &)const 
public: class E3::Vector const __thiscall MapS::Rect::center(void)const 
public: class MapS::Rect const & __thiscall MapS::Rect::operator&=(class MapS::Rect const &)
public: class MapS::Rect const & __thiscall MapS::Rect::operator*=(double const &)
public: class MapS::Rect const & __thiscall MapS::Rect::operator+=(class E3::Vector const &)
public: class MapS::Rect const & __thiscall MapS::Rect::operator+=(class MapS::Vector const &)
public: class MapS::Rect const & __thiscall MapS::Rect::operator=(class MapS::Rect const &)
public: class MapS::Rect const & __thiscall MapS::Rect::operator|=(class MapS::Rect const &)
public: class MapS::Rect const __thiscall MapS::Rect::operator&(class MapS::Rect const &)const 
public: class MapS::Rect const __thiscall MapS::Rect::operator|(class MapS::Rect const &)const 
public: class MapS::Vector const __thiscall MapS::Rect::Center(void)const 
public: double const __thiscall MapS::Rect::Height(void)const 
public: double const __thiscall MapS::Rect::Width(void)const 
public: void __thiscall MapS::Rect::Inflate(class E3::Vector const &)
public: void __thiscall MapS::Rect::Inflate(class MapS::Rect const &)
public: void __thiscall MapS::Rect::Inflate(class MapS::Vector const &)
public: void __thiscall MapS::Rect::Inflate(double const &)
public: void __thiscall MapS::Rect::set(double const &,double const &,double const &,double const &)
};

class Vector
{
public: __thiscall MapS::Vector::Vector(class E3::Vector const &)
public: __thiscall MapS::Vector::Vector(class MapS::Vector const &)
public: __thiscall MapS::Vector::Vector(double const &,double const &)
public: __thiscall MapS::Vector::Vector(void)
public: bool const __thiscall MapS::Vector::isColliniar(class MapS::Vector const &)const 
public: class MapS::Vector __thiscall MapS::Vector::getNorm(double)const 
public: class MapS::Vector __thiscall MapS::Vector::getPerp(void)const 
public: class MapS::Vector const & __thiscall MapS::Vector::operator=(class MapS::Vector const &)
public: class MapS::Vector const __thiscall MapS::Vector::operator*(double const &)const 
public: class MapS::Vector const __thiscall MapS::Vector::operator+(class MapS::Vector const &)const 
public: class MapS::Vector const __thiscall MapS::Vector::operator-(class MapS::Vector const &)const 
public: class MapS::Vector const __thiscall MapS::Vector::operator/(double const &)const 
public: double const __thiscall MapS::Vector::length(void)const 
public: double const __thiscall MapS::Vector::operator*(class MapS::Vector const &)const 
public: double const __thiscall MapS::Vector::operator^(class MapS::Vector const &)const 
public: void __thiscall MapS::Vector::set(double,double)
public: void __thiscall MapS::Vector::setNorm(double const &)
public: void __thiscall MapS::Vector::trace(void)
};

};

#endif

