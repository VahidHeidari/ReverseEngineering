#ifndef BOX_H_
#define BOX_H_

class Box
{
public: __thiscall Box::Box(class Box const &)
public: __thiscall Box::Box(class Vector3 const &,class Vector3 const &)
public: __thiscall Box::Box(class Vector3 const &,float)
public: __thiscall Box::Box(float,float,float,float,float,float)
public: __thiscall Box::Box(void)
public: class Box & __thiscall Box::operator=(class Box const &)
public: bool __thiscall Box::intersectSegment(class Vector3 const &,class Vector3 const &)const 
public: bool __thiscall Box::intersectionXZ(class Box const &)const 
public: bool __thiscall Box::intersectionXZ(class Box const &,class Box &)const 
public: bool __thiscall Box::isInside(class Vector3 const &)const 
public: bool __thiscall Box::isInsideXZ(class Vector3 const &)const 
public: bool __thiscall Box::isValid(void)const 
public: bool __thiscall Box::operator!=(class Box const &)const 
public: bool __thiscall Box::operator==(class Box const &)const 
public: class Vector3 __thiscall Box::XYZ(void)const 
public: class Vector3 __thiscall Box::XYz(void)const 
public: class Vector3 __thiscall Box::XyZ(void)const 
public: class Vector3 __thiscall Box::Xyz(void)const 
public: class Vector3 __thiscall Box::center(void)const 
public: class Vector3 __thiscall Box::corner(int)const 
public: class Vector3 __thiscall Box::xYZ(void)const 
public: class Vector3 __thiscall Box::xYz(void)const 
public: class Vector3 __thiscall Box::xyZ(void)const 
public: class Vector3 __thiscall Box::xyz(void)const 
public: float __thiscall Box::DX(void)const 
public: float __thiscall Box::DY(void)const 
public: float __thiscall Box::DZ(void)const 
public: float __thiscall Box::diameter(void)const 
public: float __thiscall Box::distanceTo(class Vector3 const &)const 
public: float __thiscall Box::radius(void)const 
public: void __thiscall Box::InsertPoint(class Vector3 const &,bool)
public: void __thiscall Box::insertBox(class Box const &)
public: void __thiscall Box::reset(void)
};

#endif

