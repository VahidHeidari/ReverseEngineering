#ifndef CPOSITION_H_
#define CPOSITION_H_

class cPosition
{
public: __thiscall cPosition::cPosition(class E3::Operator const &,class E3::Vector const &)
public: __thiscall cPosition::cPosition(class E3::Vector const &,class E3::Vector const &,class E3::Vector const &,class E3::Vector const &)
public: __thiscall cPosition::cPosition(class cPosition const &)
public: __thiscall cPosition::cPosition(double const * const)
public: __thiscall cPosition::cPosition(void)
public: __thiscall cPosition::operator class Position3(void)const 
public: bool __thiscall cPosition::checkOrtNorm(void)
public: bool const __thiscall cPosition::operator!=(class cPosition const &)
public: bool const __thiscall cPosition::operator==(class cPosition const &)
public: class cPosition & __thiscall cPosition::operator=(class Position3 const &)
public: class cPosition & __thiscall cPosition::operator=(class cPosition const &)
public: class cPosition __thiscall cPosition::operator*(float)
public: class cPosition __thiscall cPosition::operator+(class cPosition &)
public: class cPosition __thiscall cPosition::operator-(class cPosition &)
public: class cPosition __thiscall cPosition::operator/(float)
public: void __thiscall cPosition::ONE(void)
public: void __thiscall cPosition::ONEBASIS(void)
public: void __thiscall cPosition::X_Y_Z(void)
public: void __thiscall cPosition::Y_Z_X(void)
public: void __thiscall cPosition::Z_X_Y(void)
public: void __thiscall cPosition::fromMatrix(double const *)
public: void __thiscall cPosition::invert(class cPosition &)const 
public: void __thiscall cPosition::move(class E3::Vector const &)
public: void __thiscall cPosition::mult(class cPosition const &,class cPosition &)const 
public: void __thiscall cPosition::norm_X_Y(void)
public: void __thiscall cPosition::norm_X_Y_Z(void)
public: void __thiscall cPosition::norm_Y_Z_X(void)
public: void __thiscall cPosition::norm_Z_X_Y(void)
public: void __thiscall cPosition::putToMatrix(double *)const 
public: void __thiscall cPosition::rotVec(float,float,float,float)
public: void __thiscall cPosition::rotX(float)
public: void __thiscall cPosition::rotY(float)
public: void __thiscall cPosition::rotZ(float)
public: void __thiscall cPosition::rot_X(float)
public: void __thiscall cPosition::rot_Y(float)
public: void __thiscall cPosition::rot_Z(float)
public: void __thiscall cPosition::scale(class E3::Vector const &)
public: void __thiscall cPosition::scale(float)
public: void __thiscall cPosition::transp(class cPosition &)

public: static class cPosition cPosition::POS_ONE
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,class cPosition &)

#endif

