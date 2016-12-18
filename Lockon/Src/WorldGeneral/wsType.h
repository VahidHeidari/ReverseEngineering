#ifndef WSTYPE_H_
#define WSTYPE_H_

class wsType
{
public: __thiscall wsType::wsType(class wsType const &)
public: __thiscall wsType::wsType(unsigned char,unsigned char,unsigned char,unsigned char)
public: __thiscall wsType::wsType(unsigned long)
public: __thiscall wsType::wsType(void)
public: bool const __thiscall wsType::operator!=(class wsType const &)const 
public: bool const __thiscall wsType::operator==(class wsType const &)const 
public: int const __thiscall wsType::size(void)const 
public: unsigned char const __thiscall wsType::Level1(void)const 
public: unsigned char const __thiscall wsType::Level2(void)const 
public: unsigned char const __thiscall wsType::Level3(void)const 
public: unsigned char const __thiscall wsType::Level4(void)const 
public: unsigned long const __thiscall wsType::Level1_3(void)const 
public: unsigned long const __thiscall wsType::Type(class wsType const &)
public: unsigned long const __thiscall wsType::Type(void)const 
public: unsigned long const __thiscall wsType::operator=(class wsType const &)
public: void __thiscall wsType::Level1(unsigned char)
public: void __thiscall wsType::Level2(unsigned char)
public: void __thiscall wsType::Level3(unsigned char)
public: void __thiscall wsType::Level4(unsigned char)
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,class wsType &)

#endif

