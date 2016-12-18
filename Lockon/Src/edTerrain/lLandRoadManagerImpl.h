#ifndef LLANDROADMANAGERIMPL_H_
#define LLANDROADMANAGERIMPL_H_

class lLandRoadManagerImpl
{
public: __thiscall lLandRoadManagerImpl::lLandRoadManagerImpl(class lLandRoadManagerImpl const &)
public: __thiscall lLandRoadManagerImpl::lLandRoadManagerImpl(void)
public: __thiscall lLandRoadManagerImpl::~lLandRoadManagerImpl(void)
public: class lLandRoadManagerImpl & __thiscall lLandRoadManagerImpl::operator=(class lLandRoadManagerImpl const &)
public: virtual bool __thiscall lLandRoadManagerImpl::ConvertToSuperficial(char const *)
public: virtual bool __thiscall lLandRoadManagerImpl::Open(char const *)
public: virtual class lLandRoadManager::RoadSquare * __thiscall lLandRoadManagerImpl::GetSquareRails(struct intpoint)
public: virtual class lLandRoadManager::RoadSquare * __thiscall lLandRoadManagerImpl::GetSquareRoads(struct intpoint)
public: virtual int __thiscall lLandRoadManagerImpl::LoadScene(class viObjectManager *)
public: virtual struct superficial::lSuperficialFile * __thiscall lLandRoadManagerImpl::ConvertToSuperficial2(class misc::mmf_write &)
public: virtual void __thiscall lLandRoadManagerImpl::Close(void)
public: virtual void __thiscall lLandRoadManagerImpl::Release(void)
const lLandRoadManagerImpl::`vftable'
};

#endif

