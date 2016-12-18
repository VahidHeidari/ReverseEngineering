#ifndef DPOSITION_H_
#define DPOSITION_H_

class dPosition
{
public: __thiscall dPosition::dPosition(class E3::Operator const &,class E3::Vector const &)
public: __thiscall dPosition::dPosition(class E3D::Vector const &,class E3D::Vector const &,class E3D::Vector const &,class E3D::Vector const &)
public: __thiscall dPosition::dPosition(class dPosition const &)
public: __thiscall dPosition::dPosition(double const * const)
public: __thiscall dPosition::dPosition(void)
public: __thiscall dPosition::operator class Position3(void)const 
public: bool __thiscall dPosition::checkOrtNorm(void)
public: bool const __thiscall dPosition::operator!=(class dPosition const &)
public: bool const __thiscall dPosition::operator==(class dPosition const &)
public: class dPosition & __thiscall dPosition::operator=(class Position3 const &)
public: class dPosition & __thiscall dPosition::operator=(class dPosition const &)
public: class dPosition __thiscall dPosition::operator*(double)
public: class dPosition __thiscall dPosition::operator+(class dPosition &)
public: class dPosition __thiscall dPosition::operator-(class dPosition &)
public: class dPosition __thiscall dPosition::operator/(double)
public: void __thiscall dPosition::ONE(void)
public: void __thiscall dPosition::ONEBASIS(void)
public: void __thiscall dPosition::X_Y_Z(void)
public: void __thiscall dPosition::Y_Z_X(void)
public: void __thiscall dPosition::Z_X_Y(void)
public: void __thiscall dPosition::fromMatrix(double const *)
public: void __thiscall dPosition::invert(class dPosition &)const 
public: void __thiscall dPosition::move(class E3D::Vector const &)
public: void __thiscall dPosition::mult(class dPosition const &,class dPosition &)const 
public: void __thiscall dPosition::norm_X_Y(void)
public: void __thiscall dPosition::norm_X_Y_Z(void)
public: void __thiscall dPosition::norm_Y_Z_X(void)
public: void __thiscall dPosition::norm_Z_X_Y(void)
public: void __thiscall dPosition::putToMatrix(double *)const 
public: void __thiscall dPosition::rotVec(double,double,double,double)
public: void __thiscall dPosition::rotX(double)
public: void __thiscall dPosition::rotY(double)
public: void __thiscall dPosition::rotZ(double)
public: void __thiscall dPosition::rot_X(double)
public: void __thiscall dPosition::rot_Y(double)
public: void __thiscall dPosition::rot_Z(float)
public: void __thiscall dPosition::scale(class E3D::Vector const &)
public: void __thiscall dPosition::scale(double)
public: void __thiscall dPosition::transp(class dPosition &)

public: static class dPosition dPosition::POS_ONE
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,class dPosition &)

#endif

