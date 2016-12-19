#ifndef RESOURCE_H_
#define RESOURCE_H_

#include "Common.h"

enum ResourceType {};

`string'
class Resource * __cdecl GetResourceReference(class Resource *)
void __cdecl SetResourceReference(class Resource *,class Resource *)
void __cdecl SetResourceReference(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)

class Resource
{
public: __thiscall Resource(class Resource const &)
public: __thiscall Resource(void)
public: virtual __thiscall ~Resource(void)
public: class Resource & __thiscall operator=(class Resource const &)
public: virtual bool __thiscall CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall GetDebugString(void)
public: virtual int __thiscall GetDependentsLoadStep(void)
public: virtual unsigned int __thiscall GetLastFrame(void)
public: virtual bool __thiscall IsRegistered(void)
public: virtual void __thiscall LoadWithDependents(int)
public: virtual void __thiscall Refresh(void)
public: virtual void __thiscall Register(void)
public: virtual void __thiscall SetName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual enum ResourceType __thiscall Type(void)
public: virtual void __thiscall Unregister(void)
public: virtual void __thiscall UsedThisFrame(void)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Name(void)
const Resource::`vftable'
};

#endif

