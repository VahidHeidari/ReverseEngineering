#ifndef WNETPOS_H_
#define WNETPOS_H_

class wNetPos
{

	class Path
	{
	public: class wNetPos::Path & __thiscall wNetPos::Path::operator=(class wNetPos::Path const &)
	public: __thiscall wNetPos::Path::Path(class wNetPos::Path const &)
	public: __thiscall wNetPos::Path::Path(float,class E3::Vector const &,class E3::Vector const &,float,class E3::Vector const &,class E3::Vector const &)
	public: __thiscall wNetPos::Path::Path(void)
	public: void __thiscall wNetPos::Path::init(float,class E3::Vector const &,class E3::Vector const &,float,class E3::Vector const &,class E3::Vector const &)
	public: void __thiscall wNetPos::Path::value(float,class E3::Vector &,class E3::Vector &)
	};

public: __thiscall wNetPos::wNetPos(class wNetPos const &)
public: __thiscall wNetPos::wNetPos(void)
public: class wNetPos & __thiscall wNetPos::operator=(class wNetPos const &)
public: float __thiscall wNetPos::lastUpdate(void)const 
public: void __thiscall wNetPos::addPos(float,float,class E3::Vector const &,class E3::Vector const &)
public: void __thiscall wNetPos::getPos(float,class E3::Vector &,class E3::Vector &)
public: void __thiscall wNetPos::init(float,class E3::Vector const &,class E3::Vector const &)
};

#endif

