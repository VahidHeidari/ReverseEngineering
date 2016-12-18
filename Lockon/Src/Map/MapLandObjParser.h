#ifndef MAPLANDOBJPARSER_H_
#define MAPLANDOBJPARSER_H_

class MapLandObjParser
{
public: __thiscall MapLandObjParser::MapLandObjParser(class MapLandObjParser const &)
public: __thiscall MapLandObjParser::MapLandObjParser(void)
public: virtual __thiscall MapLandObjParser::~MapLandObjParser(void)
public: class MapLandObjParser & __thiscall MapLandObjParser::operator=(class MapLandObjParser const &)
public: virtual class Graphics::RenderObject * __thiscall MapLandObjParser::GetNextObject(void *)
public: virtual void __thiscall MapLandObjParser::DrawAll(void *)
public: virtual void __thiscall MapLandObjParser::InitFrame(int *,int *)
public: virtual void __thiscall MapLandObjParser::OnObjectReady(class Graphics::RenderObject *)
public: void __thiscall MapLandObjParser::ClearRobjects(void)
public: void __thiscall MapLandObjParser::SetEffectState(class HeapVector<class Graphics::VolumeEffect *> *)
public: void __thiscall MapLandObjParser::SetRobjList(class std::multimap<int,class Graphics::MapRenderObject *,struct std::less<int>,class std::allocator<class Graphics::MapRenderObject *> > *)
const MapLandObjParser::`vftable'
};

#endif

