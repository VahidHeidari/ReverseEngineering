#ifndef PLANE3D_H_
#define PLANE3D_H_

class Plane3D
{
public: __thiscall Plane3D::Plane3D(class Plane3D const &)
public: __thiscall Plane3D::Plane3D(class Vector3 const &,float)
public: __thiscall Plane3D::Plane3D(void)
public: class Plane3D & __thiscall Plane3D::operator=(class Plane3D const &)
public: class Vector3 __thiscall Plane3D::Intersect(class Vector3 const &)
public: float __thiscall Plane3D::DistanceFromPoint(class Vector3 const &)
public: void __thiscall Plane3D::ClipDo(float)
public: void __thiscall Plane3D::ClipFa(float)
public: void __thiscall Plane3D::ClipLe(float)
public: void __thiscall Plane3D::ClipNe(float)
public: void __thiscall Plane3D::ClipRi(float)
public: void __thiscall Plane3D::ClipUp(float)
public: void __thiscall Plane3D::Norm(void)
public: void __thiscall Plane3D::Transform(class Position3 const &)
};

#endif

