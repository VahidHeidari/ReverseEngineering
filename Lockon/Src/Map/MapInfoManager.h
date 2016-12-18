#ifndef MAPINFOMANAGER_H_
#define MAPINFOMANAGER_H_

class MapInfoManager
{
public: __thiscall MapInfoManager::MapInfoManager(class MapInfoManager const &)
public: __thiscall MapInfoManager::MapInfoManager(void)
public: __thiscall MapInfoManager::~MapInfoManager(void)
public: class MapInfoManager & __thiscall MapInfoManager::operator=(class MapInfoManager const &)
public: class MapObjInfo * __thiscall MapInfoManager::getInfo(class MapObj *)
public: void __thiscall MapInfoManager::setInfo(class MapObj *,class MapObjInfo *)
};

class MapInfoManager * globalMapInfoManager

#endif

