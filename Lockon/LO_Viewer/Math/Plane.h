#ifndef PLANE_H_
#define PLANE_H_

class Plane
{
public: __thiscall Plane::Plane(class Plane const &)
public: __thiscall Plane::Plane(class Vector3 const &,class Vector3 const &)
public: __thiscall Plane::Plane(class Vector3 const &,class Vector3 const &,class Vector3 const &)
public: __thiscall Plane::Plane(float const *)
public: __thiscall Plane::Plane(float,float,float,float)
public: __thiscall Plane::Plane(void)
public: bool __thiscall Plane::operator!=(class Plane const &)const 
public: bool __thiscall Plane::operator==(class Plane const &)const 
public: class Plane & __thiscall Plane::normalize(void)
public: class Plane & __thiscall Plane::operator=(class Plane const &)
public: class Plane __thiscall Plane::operator-(void)const 
public: class Plane const & __thiscall Plane::operator()(class Vector3 const &,class Vector3 const &)
public: class Plane const & __thiscall Plane::operator()(class Vector3 const &,class Vector3 const &,class Vector3 const &)
public: class Plane const & __thiscall Plane::operator()(float,float,float,float)
public: float __thiscall Plane::distanceToPoint(class Vector3 const &)const 
};

#endif

