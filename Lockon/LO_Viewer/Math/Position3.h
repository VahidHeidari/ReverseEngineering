#ifndef POSITION3_H_
#define POSITION3_H_

class Position3
{
public: __thiscall Position3::Position3(class Matrix33 const &)
public: __thiscall Position3::Position3(class Position3 const &)
public: __thiscall Position3::Position3(class Vector3 const &)
public: __thiscall Position3::Position3(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &)
public: __thiscall Position3::Position3(void)
public: class Position3 & __thiscall Position3::operator*=(class Position3 const &)
public: class Position3 & __thiscall Position3::operator+=(class Vector3 const &)
public: class Position3 & __thiscall Position3::operator-=(class Vector3 const &)
public: class Position3 & __thiscall Position3::operator/=(class Position3 const &)
public: class Position3 & __thiscall Position3::operator=(class Position3 const &)
public: class Position3 __thiscall Position3::TrueInverted(void)const 
public: class Position3 __thiscall Position3::operator*(class Position3 const &)const 
public: class Position3 __thiscall Position3::operator+(class Vector3 const &)const 
public: class Position3 __thiscall Position3::operator-(class Vector3 const &)const 
public: class Position3 __thiscall Position3::operator/(class Position3 const &)const 
public: class Position3 __thiscall Position3::operator~(void)const 
public: class Vector3 __thiscall Position3::operator*(class Vector3 const &)const 
public: void __thiscall Position3::Invert(void)
public: void __thiscall Position3::Move(class Vector3 const &)
public: void __thiscall Position3::Move(float,float,float)
public: void __thiscall Position3::Norm(void)
public: void __thiscall Position3::NormXYZ(void)
public: void __thiscall Position3::NormXZY(void)
public: void __thiscall Position3::NormYXZ(void)
public: void __thiscall Position3::NormYZX(void)
public: void __thiscall Position3::NormZXY(void)
public: void __thiscall Position3::NormZYX(void)
public: void __thiscall Position3::Scale(class Vector3 const &)
public: void __thiscall Position3::Scale(float)
public: void __thiscall Position3::Scale(float,float,float)
public: void __thiscall Position3::SetTransform(class Matrix33 const &)
public: void __thiscall Position3::TrueInvert(void)
public: void __thiscall Position3::YZX(void)

public: static class Position3 const Position3::One
public: static class Position3 const Position3::Zero
};

#endif

