#ifndef VIOBJECTMANAGER_H_
#define VIOBJECTMANAGER_H_

class viObjectManager
{
public: __thiscall viObjectManager::viObjectManager(class viObjectManager const &)
public: __thiscall viObjectManager::viObjectManager(void)
public: virtual __thiscall viObjectManager::~viObjectManager(void)
public: class viObjectManager & __thiscall viObjectManager::operator=(class viObjectManager const &)
public: int __thiscall viObjectManager::GetBoxList(class E3::Vector const &,class E3::Vector const &,bool (__cdecl*)(class viObject *,class viSearch *,void *),void *,unsigned long)
public: int __thiscall viObjectManager::GetBoxList(class E3::Vector const &,class E3::Vector const &,class viObject * *,int,unsigned long)
public: int __thiscall viObjectManager::GetCameraList(class cPosition &,float,float,bool (__cdecl*)(class viObject *,class viSearch *,void *),void *,unsigned long)
public: int __thiscall viObjectManager::GetCameraList(class cPosition &,float,float,class viObject * *,int,unsigned long)
public: int __thiscall viObjectManager::GetObjects(class ClipVolume *,bool (__cdecl*)(class viObject *,class viSearch *,void *),void *,unsigned long)
public: int __thiscall viObjectManager::GetObjects(class ClipVolume *,class viObject * *,int,unsigned long)
public: int __thiscall viObjectManager::GetSegmentList(class E3::Vector const &,class E3::Vector const &,bool (__cdecl*)(class viObject *,class viSearch *,void *),void *,unsigned long)
public: int __thiscall viObjectManager::GetSegmentList(class E3::Vector const &,class E3::Vector const &,class viObject * *,int,unsigned long)
public: static class viObjectManager * __cdecl viObjectManager::Create(class Box const &)
const viObjectManager::`vftable'

public: static class viObjectManager * viObjectManager::instance
};

#endif

