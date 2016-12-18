#ifndef MAPPROCESSOR_H_
#define MAPPROCESSOR_H_

class MapProcessor
{
public: __thiscall MapProcessor::MapProcessor(class MapProcessor const &)
public: __thiscall MapProcessor::MapProcessor(void)
public: virtual __thiscall MapProcessor::~MapProcessor(void)
public: class MapProcessor & __thiscall MapProcessor::operator=(class MapProcessor const &)
public: class DlgMap * __thiscall MapProcessor::getDlgMap(void)
public: class MapEvoker * __thiscall MapProcessor::getMapEvoker(void)
public: int __thiscall MapProcessor::getCursor(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __cdecl MapProcessor::getObjName(void)
public: static void __cdecl MapProcessor::deleteImage(struct IMapImage *)
public: static void __cdecl MapProcessor::deleteMapObjInfo(class IMapObjInfo *)
public: static void __cdecl MapProcessor::deleteObjects(void)
public: struct MapProcessor::ControlInfo & __thiscall MapProcessor::getControlInfo(void)
public: virtual bool __thiscall MapProcessor::initialize(void)
public: virtual bool __thiscall MapProcessor::process(void)
public: virtual bool __thiscall MapProcessor::uninitialize(void)
public: void __thiscall MapProcessor::changeStyle(int,bool)
public: void __thiscall MapProcessor::setCursor(int)
public: void __thiscall MapProcessor::zoom100(void)
public: void __thiscall MapProcessor::zoomBack(void)
public: void __thiscall MapProcessor::zoomForward(void)
public: void __thiscall MapProcessor::zoomIn(void)
public: void __thiscall MapProcessor::zoomOut(void)
protected: static class std::list<class IMapObjInfo *,class std::allocator<class IMapObjInfo *> > MapProcessor::objInfoToDelete
protected: static class std::list<struct IMapImage *,class std::allocator<struct IMapImage *> > MapProcessor::imagesToDelete
const MapProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const MapProcessor::`vftable'{for `System'}
};

#endif

