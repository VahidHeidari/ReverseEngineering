#ifndef ROADNETWORKFILE_H_
#define ROADNETWORKFILE_H_

class RoadnetworkFile
{
public: __thiscall RoadnetworkFile::RoadnetworkFile(class RoadnetworkFile const &)
public: __thiscall RoadnetworkFile::RoadnetworkFile(void)
public: __thiscall RoadnetworkFile::~RoadnetworkFile(void)
public: class RoadnetworkFile & __thiscall RoadnetworkFile::operator=(class RoadnetworkFile const &)
public: bool __thiscall RoadnetworkFile::ConvertToSuperficial(class std::list<struct lSuperficial *,class std::allocator<struct lSuperficial *> > &)
public: bool __thiscall RoadnetworkFile::ConvertToSuperficial2(class std::list<struct superficial::lSuperficialFile::Source,class std::allocator<struct superficial::lSuperficialFile::Source> > &,class misc::mmf_write &)
public: bool __thiscall RoadnetworkFile::Open(char const *)
public: bool __thiscall RoadnetworkFile::operator!(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall RoadnetworkFile::getName(void)
public: int __thiscall RoadnetworkFile::GetCrossroadCount(void)
public: int __thiscall RoadnetworkFile::GetRoadCount(void)
public: int __thiscall RoadnetworkFile::GetSceneObjectCount(void)
public: int __thiscall RoadnetworkFile::GetSquareCount(void)
public: int __thiscall RoadnetworkFile::getNumVertex(struct RoadsSection::Road *)
public: int __thiscall RoadnetworkFile::getNumVertex(struct SqrLinksSection::Square *)
public: struct CrossroadsSection::Crossroad * __thiscall RoadnetworkFile::GetCrossRoad(int)
public: struct RoadNetFileHeader * __thiscall RoadnetworkFile::GetHeader(void)
public: struct RoadsSection::Road * __thiscall RoadnetworkFile::GetRoad(int)
public: struct RoadsSection::Road::RoadCenterLine * __thiscall RoadnetworkFile::GetCentrline(unsigned long)
public: struct RoadsSection::Road::RoadStripe * __thiscall RoadnetworkFile::GetStrip(unsigned long)
public: struct SceneSection::Object * __thiscall RoadnetworkFile::GetSceneObject(int)
public: struct SqrLinksSection::Square * __thiscall RoadnetworkFile::GetSquare(int)
public: struct roads::lRoadFile * __thiscall RoadnetworkFile::ConvertToRoadFile(class misc::mmf_write &)
public: virtual int __thiscall RoadnetworkFile::LoadScene(class viObjectManager *,class std::list<struct BinarySceneAndTree::LinkDecl,class std::allocator<struct BinarySceneAndTree::LinkDecl> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: virtual int __thiscall RoadnetworkFile::LoadScene(class viObjectManager *,class std::list<struct SceneCache::Object,class std::allocator<struct SceneCache::Object> > &,class std::list<struct SceneCache::LinkDecl,class std::allocator<struct SceneCache::LinkDecl> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
const RoadnetworkFile::`vftable'
};

#endif

