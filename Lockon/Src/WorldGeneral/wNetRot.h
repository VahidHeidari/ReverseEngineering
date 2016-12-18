#ifndef WNETROT_H_
#define WNETROT_H_

class wNetRot
{
	class Rot
	{
	public: __thiscall wNetRot::Rot::Rot(class wNetRot::Rot const &)
	public: __thiscall wNetRot::Rot::Rot(float,class Quaternion const &,float,class Quaternion const &)
	public: __thiscall wNetRot::Rot::Rot(void)
	public: class wNetRot::Rot & __thiscall wNetRot::Rot::operator=(class wNetRot::Rot const &)
	public: void __thiscall wNetRot::Rot::init(float,class Quaternion const &,float,class Quaternion const &)
	public: void __thiscall wNetRot::Rot::value(float,class Quaternion &)
	};

public: __thiscall wNetRot::wNetRot(class wNetRot const &)
public: __thiscall wNetRot::wNetRot(void)
public: class wNetRot & __thiscall wNetRot::operator=(class wNetRot const &)
public: void __thiscall wNetRot::addRot(float,float,class Quaternion const &)
public: void __thiscall wNetRot::getRot(float,class Quaternion &)
public: void __thiscall wNetRot::init(float,class Quaternion const &)
};

#endif

