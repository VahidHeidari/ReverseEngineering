#ifndef MAPOBJ_H_
#define MAPOBJ_H_

class MapObj
{
public: __thiscall MapObj::MapObj(class MapObj const &)
public: __thiscall MapObj::MapObj(unsigned int)
public: __thiscall MapObj::MapObj(unsigned int,int)
public: __thiscall MapObjInfo::MapObjInfo(class MapObj *)
public: bool __thiscall MapObj::IsChanged(void)
public: int __thiscall MapObj::setPriority(int)
public: int const __thiscall MapObj::getPriority(void)const 
public: struct MapObj::DrawInfo * __thiscall MapObj::getDrawInfo(void)
public: unsigned int const __thiscall MapObj::getType(void)const 
public: void __thiscall MapObj::ChangeDraw(void)
public: void __thiscall MapObj::UpdateDraw(void)
public: void __thiscall MapObj::setDrawInfo(struct MapObj::DrawInfo *)
protected: virtual __thiscall MapObj::~MapObj(void)
const MapObj::`vftable'
};

#endif

