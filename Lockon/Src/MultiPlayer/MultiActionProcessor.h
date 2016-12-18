#ifndef MULTIACTIONPROCESSOR_H_
#define MULTIACTIONPROCESSOR_H_

class MultiActionProcessor
{
public: __thiscall MultiActionProcessor::MultiActionProcessor(class MultiActionProcessor const &)
public: __thiscall MultiActionProcessor::MultiActionProcessor(class Net::Worker *)
public: virtual __thiscall MultiActionProcessor::~MultiActionProcessor(void)
public: class MultiActionProcessor & __thiscall MultiActionProcessor::operator=(class MultiActionProcessor const &)
public: unsigned long const & __thiscall MultiActionProcessor::getLocalID(void)const 
public: virtual bool __thiscall MultiActionProcessor::applyReactions(class std::vector<struct Reaction,class std::allocator<struct Reaction> > const &)
public: virtual bool __thiscall MultiActionProcessor::checkControlAction(double const &,struct Press *,bool)
public: virtual bool __thiscall MultiActionProcessor::checkPromptitude(double const &)
public: virtual bool __thiscall MultiActionProcessor::completePart(void)
public: virtual bool __thiscall MultiActionProcessor::engine(class Net::BaseSamplingNotifier *,class Net::BaseEvent *,class EagleDynamics::Common::Identifier const *)
public: virtual bool __thiscall MultiActionProcessor::eraseUnanswers(double const &)
public: virtual bool __thiscall MultiActionProcessor::initialize(void)
public: virtual bool __thiscall MultiActionProcessor::prepareActions(double const &,class std::vector<struct Press,class std::allocator<struct Press> > const &)
public: virtual bool __thiscall MultiActionProcessor::process(void)
public: virtual bool __thiscall MultiActionProcessor::sendControlAction(double const &,struct Press const &)
public: virtual bool __thiscall MultiActionProcessor::uninitialize(void)
public: virtual void __thiscall MultiActionProcessor::accomplish(void)
public: virtual void __thiscall MultiActionProcessor::applyActions(void)
public: virtual void __thiscall MultiActionProcessor::checkSyncRequest(void)
public: virtual void __thiscall MultiActionProcessor::complete(void)
public: virtual void __thiscall MultiActionProcessor::onAppendHotJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::onAppendJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::onCheckHotJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::onEveryTimeJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::onHotJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::onTime(void)
public: virtual void __thiscall MultiActionProcessor::onUnJoin(struct HotJoiner *)
public: virtual void __thiscall MultiActionProcessor::syncActions(double const &)
public: void __thiscall MultiActionProcessor::clearQuantQueue(double const &)
public: void __thiscall MultiActionProcessor::setActivator(bool)
public: void __thiscall MultiActionProcessor::setJoinersMap(class std::map<unsigned long,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,struct std::less<unsigned long>,class std::allocator<class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > > > const &,long const &,bool)
public: void __thiscall MultiActionProcessor::setLocalID(unsigned long const &)
public: void __thiscall MultiActionProcessor::setQuantor(bool)
public: void __thiscall MultiActionProcessor::setTracker(void)
protected: bool __thiscall MultiActionProcessor::setReJoiner(unsigned long const &)
protected: bool __thiscall MultiActionProcessor::updateJoiner(double const &,unsigned long const &,bool)
protected: void __thiscall MultiActionProcessor::displayLatentObject(double const &,unsigned long const &)
protected: void __thiscall MultiActionProcessor::setNewJoiner(unsigned long const &,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
const MultiActionProcessor::`vftable'{for `EagleDynamics::Common::TimeKeeper::TimeListener'}
const MultiActionProcessor::`vftable'{for `HotJoinListener'}
const MultiActionProcessor::`vftable'{for `Net::SamplingListener'}
const MultiActionProcessor::`vftable'{for `Rewinder'}
const MultiActionProcessor::`vftable'{for `System'}
};

#endif

