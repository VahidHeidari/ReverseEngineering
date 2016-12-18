#ifndef TERRITORYMANAGER_H_
#define TERRITORYMANAGER_H_

class TerritoryManager
{
public: __thiscall TerritoryManager::TerritoryManager(class RegionDrawInfo const &)
public: __thiscall TerritoryManager::TerritoryManager(class TerritoryManager const &)
public: virtual __thiscall TerritoryManager::~TerritoryManager(void)
public: class Graph<unsigned long> const * __thiscall TerritoryManager::getGraph(void)const 
public: class std::list<unsigned long,class std::allocator<unsigned long> > const * __thiscall TerritoryManager::getOwnedRegionsBy(unsigned long)
public: unsigned long const __thiscall TerritoryManager::getRegionContaining(class E3::Vector const &)const 
public: virtual bool __thiscall TerritoryManager::areNeighbours(unsigned long,unsigned long)const 
public: virtual bool __thiscall TerritoryManager::getRegionBound(unsigned long,double &,double &,double &,double &)const 
public: virtual bool __thiscall TerritoryManager::getRegionCenter(unsigned long,double &,double &)
public: virtual bool __thiscall TerritoryManager::initialize(void)
public: virtual bool __thiscall TerritoryManager::uninitialize(void)
public: virtual class std::list<unsigned long,class std::allocator<unsigned long> > const & __thiscall TerritoryManager::getRegionBases(unsigned long)const 
public: virtual class std::list<unsigned long,class std::allocator<unsigned long> > const & __thiscall TerritoryManager::getRegionsList(void)const 
public: virtual unsigned long __thiscall TerritoryManager::findRegion(unsigned long)
public: virtual unsigned long __thiscall TerritoryManager::getOwner(unsigned long)const 
public: virtual unsigned long __thiscall TerritoryManager::getRegionContaining(double const &,double const &)const 
public: virtual unsigned long __thiscall TerritoryManager::setNewOwner(unsigned long,unsigned long)
public: virtual void __thiscall TerritoryManager::addRegionBase(unsigned long,unsigned long)
public: virtual void __thiscall TerritoryManager::findObjects(unsigned long,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::list<struct ITerritoryManager::ObjectInfo,class std::allocator<struct ITerritoryManager::ObjectInfo> > &)
public: virtual void __thiscall TerritoryManager::flushOwners(void)
public: virtual void __thiscall TerritoryManager::getNeighbours(class std::list<unsigned long,class std::allocator<unsigned long> > const &,class std::list<unsigned long,class std::allocator<unsigned long> > &)
public: virtual void __thiscall TerritoryManager::getNeighbours(unsigned long,class std::list<unsigned long,class std::allocator<unsigned long> > &)
public: virtual void __thiscall TerritoryManager::setDrawRegions(bool)
public: virtual void __thiscall TerritoryManager::update(void)
public: void __thiscall TerritoryManager::readRegionDrawFeatures(char const *,int)
protected: struct TerritoryManager::RegionInfo * __thiscall TerritoryManager::getRegionInfo(unsigned long)
protected: struct TerritoryManager::RegionInfo * __thiscall TerritoryManager::readRegionData(char const *,char const *,char const *,unsigned long)
protected: struct TerritoryManager::RegionInfo const * __thiscall TerritoryManager::getRegionInfo(unsigned long)const 
protected: void __thiscall TerritoryManager::buildMapObjects(class MapObjContainer &)
protected: void __thiscall TerritoryManager::clearOwnerRegionsMap(void)
protected: void __thiscall TerritoryManager::updateOwnerRegionsMap(void)
const TerritoryManager::`vftable'
};

#endif

