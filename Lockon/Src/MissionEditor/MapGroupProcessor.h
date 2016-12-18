#ifndef MAPGROUPPROCESSOR_H_
#define MAPGROUPPROCESSOR_H_

class MapGroupProcessor
{
public: __thiscall MapGroupProcessor::MapGroupProcessor(class MapGroupProcessor const &)
public: __thiscall MapGroupProcessor::MapGroupProcessor(void)
public: virtual __thiscall MapGroupProcessor::~MapGroupProcessor(void)
public: class MapGroupProcessor & __thiscall MapGroupProcessor::operator=(class MapGroupProcessor const &)
public: bool __thiscall MapGroupProcessor::findClosestTarget(struct TargetData &,float,float,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: bool __thiscall MapGroupProcessor::groupTypeOrSideFiltered(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: bool __thiscall MapGroupProcessor::setEnableDrag(bool)
public: bool const __thiscall MapGroupProcessor::isEnableDrag(void)const 
public: class MapListener * __thiscall MapGroupProcessor::getCapture(void)const 
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall MapGroupProcessor::findGroup(double const &,double const &)
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall MapGroupProcessor::getGroup(long,long)
public: enum MapConverterTypes::MissSide const __thiscall MapGroupProcessor::getMissSideMask(void)const 
public: enum MapConverterTypes::MissType const __thiscall MapGroupProcessor::getMissTypeMask(void)const 
public: enum MapGroupProcessor::Mode const __thiscall MapGroupProcessor::getMode(void)const 
public: long __thiscall MapGroupProcessor::findWayPoint(double const &,double const &)
public: static bool __cdecl MapGroupProcessor::findClosestPoint(struct IMapImage::Point &,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,struct IMapImage::Point &)
public: static class ActiveInfo & __cdecl MapGroupProcessor::getActiveInfo(void)
public: static double __cdecl MapGroupProcessor::dist(struct IMapImage::Point &,struct IMapImage::Point &)
public: virtual bool __thiscall MapGroupProcessor::initialize(void)
public: virtual bool __thiscall MapGroupProcessor::process(void)
public: virtual bool __thiscall MapGroupProcessor::uninitialize(void)
public: virtual void __thiscall MapGroupProcessor::onActiveEvent(struct ActiveListener::ActiveEvent *)
public: virtual void __thiscall MapGroupProcessor::onMapEvent(struct MapListener::MapEvent *)
public: void __thiscall MapGroupProcessor::SetParentProcessor(class TwoWayProcessor const *)
public: void __thiscall MapGroupProcessor::addDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long)
public: void __thiscall MapGroupProcessor::changeRouteDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,bool)
public: void __thiscall MapGroupProcessor::flushMaps(void)
public: void __thiscall MapGroupProcessor::recreateAllZones(void)
public: void __thiscall MapGroupProcessor::removeDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: void __thiscall MapGroupProcessor::setCapture(class MapListener *)
public: void __thiscall MapGroupProcessor::setMode(enum MapGroupProcessor::Mode)
public: void __thiscall MapGroupProcessor::setSideFilter(enum MapConverterTypes::MissSide)
public: void __thiscall MapGroupProcessor::setTypeFilter(enum MapConverterTypes::MissType,bool)
public: void __thiscall MapGroupProcessor::setTypeMask(enum MapConverterTypes::MissType)
public: void __thiscall MapGroupProcessor::setViewKillingAndFindingZonesState(enum MapConverterTypes::MissType)
public: void __thiscall MapGroupProcessor::setViewKillingAndFindingZonesState(enum MapConverterTypes::MissType,bool)
public: void __thiscall MapGroupProcessor::updateAll(void)
public: void __thiscall MapGroupProcessor::updateDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,bool)
protected: class MapDragger * __thiscall MapGroupProcessor::getDragger(class IMapObjInfo *)
protected: enum MapGroupProcessor::DrawMode __thiscall MapGroupProcessor::getDrawMode(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long)
protected: int __thiscall MapGroupProcessor::GetRouteMode(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: static class ActiveInfo MapGroupProcessor::theActiveInfo
protected: struct MapGroupProcessor::ImageInfo * __thiscall MapGroupProcessor::getInfo(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: struct MapGroupProcessor::ImageInfo * __thiscall MapGroupProcessor::getRoot(struct MapGroupProcessor::ImageInfo *)
protected: void __thiscall MapGroupProcessor::addUpdate(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long)
protected: void __thiscall MapGroupProcessor::buildNumberDraw(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int,double const &,double const &,struct MapGroupProcessor::ImageInfo *)
protected: void __thiscall MapGroupProcessor::buildRouteDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,struct MapGroupProcessor::ImageInfo *)
protected: void __thiscall MapGroupProcessor::buildUnitsDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,struct MapGroupProcessor::ImageInfo *)
protected: void __thiscall MapGroupProcessor::drawGroups(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: void __thiscall MapGroupProcessor::drawGroups(void)
protected: void __thiscall MapGroupProcessor::flushDraw(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: void __thiscall MapGroupProcessor::flushDraw(struct MapGroupProcessor::ImageInfo *,bool)
protected: void __thiscall MapGroupProcessor::isActive(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: void __thiscall MapGroupProcessor::isActive(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long)
protected: void __thiscall MapGroupProcessor::removeUpdate(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
protected: void __thiscall MapGroupProcessor::setActive(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,int,bool)
protected: void __thiscall MapGroupProcessor::setActiveGroup(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,unsigned long,bool)
protected: void __thiscall MapGroupProcessor::setActiveWayPoint(int,bool)
protected: void __thiscall MapGroupProcessor::updateDragPos(double const &,double const &)
private: static enum MapConverterTypes::MissSide MapGroupProcessor::storedMissSide
private: static enum MapConverterTypes::MissSide __cdecl MapGroupProcessor::getStoredMissSide(void)
private: static enum MapConverterTypes::MissType MapGroupProcessor::storedMissType
private: static enum MapConverterTypes::MissType __cdecl MapGroupProcessor::getStoredMissType(void)
private: static int __cdecl MapGroupProcessor::setStoredMissSide(enum MapConverterTypes::MissSide)
private: static int __cdecl MapGroupProcessor::setStoredMissType(enum MapConverterTypes::MissType)
const MapGroupProcessor::`vftable'{for `ActiveListener'}
const MapGroupProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const MapGroupProcessor::`vftable'{for `MapListener'}
const MapGroupProcessor::`vftable'{for `System'}

protected: static int MapGroupProcessor::imageAttribId
};

#endif

