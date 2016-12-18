#ifndef TRACKREWINDER_H_
#define TRACKREWINDER_H_

class TrackRewinder
{
public: __thiscall TrackRewinder::TrackRewinder(class TrackRewinder const &)
public: __thiscall TrackRewinder::TrackRewinder(void)
public: virtual __thiscall TrackRewinder::~TrackRewinder(void)
public: class TrackRewinder & __thiscall TrackRewinder::operator=(class TrackRewinder const &)
public: virtual bool __thiscall TrackRewinder::applyReactions(class std::vector<struct Reaction,class std::allocator<struct Reaction> > const &)
public: virtual bool __thiscall TrackRewinder::completePart(void)
public: virtual bool __thiscall TrackRewinder::initialize(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > const &,class std::vector<unsigned long,class std::allocator<unsigned long> > const &,enum TrackType const &)
public: virtual void __thiscall TrackRewinder::complete(void)
public: void __thiscall TrackRewinder::setTracker(void)
protected: unsigned long __thiscall TrackRewinder::formID(int const &,int const &)
const TrackRewinder::`vftable'
};

#endif

