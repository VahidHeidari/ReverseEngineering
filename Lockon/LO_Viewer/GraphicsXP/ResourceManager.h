#ifndef RESOURCEMANAGER_H_
#define RESOURCEMANAGER_H_

class ResourceManager * resourcer

class ResourceManager
{
public: __thiscall ResourceManager(class ResourceManager const &)
public: __thiscall ResourceManager(void)
public: virtual __thiscall ~ResourceManager(void)
public: class ResourceManager & __thiscall operator=(class ResourceManager const &)
const ResourceManager::`vftable'
};

class DefResourceManager
{
public: __thiscall DefResourceManager(class DefResourceManager const &)
public: __thiscall DefResourceManager(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __thiscall ~DefResourceManager(void)
public: class DefResourceManager & __thiscall operator=(class DefResourceManager const &)
public: virtual class Resource * __thiscall CreateByName(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall initialize(void)
public: virtual void __thiscall uninitialize(void)
const DefResourceManager::`vftable'
};

class ReferenceResource
{
public: __thiscall ReferenceResource(class ReferenceResource const &)
public: __thiscall ReferenceResource(void)
public: class ReferenceResource & __thiscall operator=(class ReferenceResource const &)
const ReferenceResource::`vftable'
};

#endif

