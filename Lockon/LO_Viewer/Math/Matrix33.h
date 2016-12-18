#ifndef MATRIX33_H_
#define MATRIX33_H_

class Matrix33
{
public: __thiscall Matrix33::Matrix33(class Matrix33 const &)
public: __thiscall Matrix33::Matrix33(class Vector3 const &)
public: __thiscall Matrix33::Matrix33(class Vector3 const &,class Vector3 const &,class Vector3 const &)
public: __thiscall Matrix33::Matrix33(void)
public: class Matrix33 & __thiscall Matrix33::operator*=(class Matrix33 const &)
public: class Matrix33 & __thiscall Matrix33::operator=(class Matrix33 const &)
public: class Matrix33 __thiscall Matrix33::operator*(class Matrix33 const &)const 
public: class Matrix33 __thiscall Matrix33::operator~(void)const 
public: class Vector3 __thiscall Matrix33::operator*(class Vector3 const &)const 
public: static class Matrix33 __cdecl Matrix33::Rotation(class Vector3 const &,class Vector3 const &)
public: static class Matrix33 __cdecl Matrix33::Rotation(class Vector3 const &,float)
public: static class Matrix33 __cdecl Matrix33::Rotation(float,float,float,float)
public: static class Matrix33 __cdecl Matrix33::Scaling(class Vector3 const &)
public: static class Matrix33 __cdecl Matrix33::Scaling(float,float,float)
public: void __thiscall Matrix33::GaussInvert(void)
public: void __thiscall Matrix33::Rotate(class Vector3 const &,float)
public: void __thiscall Matrix33::Rotate(float,float,float,float)
public: void __thiscall Matrix33::RotateX(float)
public: void __thiscall Matrix33::RotateY(float)
public: void __thiscall Matrix33::RotateZ(float)
public: void __thiscall Matrix33::Scale(class Vector3 const &)
public: void __thiscall Matrix33::Scale(float)
public: void __thiscall Matrix33::Scale(float,float,float)
public: void __thiscall Matrix33::Transp(void)

public: static class Matrix33 const Matrix33::One
public: static class Matrix33 const Matrix33::Zero
};

#endif

