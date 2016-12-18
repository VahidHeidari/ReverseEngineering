#ifndef CONTROLLIST_H_
#define CONTROLLIST_H_

class ControlList
{
public: __thiscall ControlList::ControlList(int)
public: __thiscall ControlList::ControlList(struct ControlList const &)
public: virtual __thiscall ControlList::~ControlList(void)
public: struct ControlList & __thiscall ControlList::operator=(struct ControlList const &)
public: static class ResourceKeeper<struct ControlList> & __cdecl ControlList::resourceKeeper(void)
public: virtual void __thiscall ControlList::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall ControlList::read(char const *,int)
public: void __thiscall ControlList::`default constructor closure'(void)
const ControlList::`vftable'
};

#endif
