#ifndef SCENEFILEMANAGER_H_
#define SCENEFILEMANAGER_H_

class SceneFileManager
{
public: __thiscall SceneFileManager::SceneFileManager(class SceneFileManager const &)
public: __thiscall SceneFileManager::SceneFileManager(void)
public: __thiscall SceneFileManager::~SceneFileManager(void)
public: class SceneFileManager & __thiscall SceneFileManager::operator=(class SceneFileManager const &)
public: bool __thiscall SceneFileManager::Open(char const *)
public: class std::list<struct SceneFileHeader::Square *,class std::allocator<struct SceneFileHeader::Square *> > & __thiscall SceneFileManager::GetSquare(int)
public: int __thiscall SceneFileManager::getSquareCount(void)
};

#endif

