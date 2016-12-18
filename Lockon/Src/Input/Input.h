#ifndef INPUT_H_
#define INPUT_H_

namespace EagleDynamics
{

namespace Input
{

float EagleDynamics::Input::SmoothFactor

class ATL::CComPtr<class EagleDynamics::Input::IDeviceFactory> __cdecl EagleDynamics::Input::getDeviceFactory(void)
class ATL::CComPtr<struct EagleDynamics::Input::IForceEffectFactory> __cdecl EagleDynamics::Input::getForceEffectFactory(void)
class ATL::CComPtr<class EagleDynamics::Input::IDeviceFactory> __cdecl EagleDynamics::Input::getTrackIRFactory(void)

class ActionAssociation
{
public: __thiscall EagleDynamics::Input::ActionAssociation::ActionAssociation(struct EagleDynamics::Input::ActionAssociation const &)
public: __thiscall EagleDynamics::Input::ActionAssociation::ActionAssociation(void)
public: __thiscall EagleDynamics::Input::ActionAssociation::~ActionAssociation(void)
public: struct EagleDynamics::Input::ActionAssociation const & __thiscall EagleDynamics::Input::ActionAssociation::operator=(struct EagleDynamics::Input::ActionAssociation const &)
public: bool __thiscall EagleDynamics::Input::ActionAssociation::operator==(struct EagleDynamics::Input::ActionAssociation const &)const 
public: bool __thiscall EagleDynamics::Input::ActionAssociation::operator!=(struct EagleDynamics::Input::ActionAssociation const &)const 
public: class std::map<unsigned long,class std::map<char,class std::vector<struct EagleDynamics::Input::ActionAssociation *,class std::allocator<struct EagleDynamics::Input::ActionAssociation *> >,struct std::less<char>,class std::allocator<class std::vector<struct EagleDynamics::Input::ActionAssociation *,class std::allocator<struct EagleDynamics::Input::ActionAssociation *> > > >,struct std::less<unsigned long>,class std::allocator<class std::map<char,class std::vector<struct EagleDynamics::Input::Actio
};

class Associator
{
public: __thiscall EagleDynamics::Input::Associator::Associator(class EagleDynamics::Input::Associator const &)
public: __thiscall EagleDynamics::Input::Associator::Associator(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,struct EagleDynamics::Input::Reassignment *,class ATL::CComPtr<class EagleDynamics::Input::Distributor>)
public: virtual __thiscall EagleDynamics::Input::Associator::~Associator(void)
public: class EagleDynamics::Input::Associator & __thiscall EagleDynamics::Input::Associator::operator=(class EagleDynamics::Input::Associator const &)
protected: void __thiscall EagleDynamics::Input::Associator::assignActionAssociation(unsigned long const &,struct EagleDynamics::Input::ActionAssociation *)
public: void __thiscall EagleDynamics::Input::Associator::assignActionAssociations(unsigned long const &,struct EagleDynamics::Input::ActionAssociation *)
protected: void __thiscall EagleDynamics::Input::Associator::assignImpactAssociation(unsigned long const &,struct EagleDynamics::Input::ImpactAssociation *,unsigned long)
public: void __thiscall EagleDynamics::Input::Associator::assignImpactAssociations(unsigned long const &,struct EagleDynamics::Input::ImpactAssociation *,unsigned long)
public: void __thiscall EagleDynamics::Input::Associator::assignSwitchKeyAssociation(unsigned long)
protected: void __thiscall EagleDynamics::Input::Associator::buildActionsTable(unsigned long const &)
public: void __thiscall EagleDynamics::Input::Associator::buildAssociations(void)
protected: void __thiscall EagleDynamics::Input::Associator::buildImpactsTable(unsigned long const &)
protected: void __thiscall EagleDynamics::Input::Associator::buildSwitchKeysCache(void)
protected: void __thiscall EagleDynamics::Input::Associator::clearActionAssociation(unsigned long const &,struct EagleDynamics::Input::ActionAssociation *)
public: void __thiscall EagleDynamics::Input::Associator::clearActionAssociations(unsigned long const &,struct EagleDynamics::Input::ActionAssociation *)
protected: void __thiscall EagleDynamics::Input::Associator::clearImpactAssociation(unsigned long const &,struct EagleDynamics::Input::ImpactAssociation *)
public: void __thiscall EagleDynamics::Input::Associator::clearImpactAssociations(unsigned long const &,struct EagleDynamics::Input::ImpactAssociation *)
public: void __thiscall EagleDynamics::Input::Associator::clearSwitchKeyAssociation(unsigned long)
protected: bool __thiscall EagleDynamics::Input::Associator::findAction(unsigned long const &,struct EagleDynamics::Input::ActionAssociation *)
protected: bool __thiscall EagleDynamics::Input::Associator::findImpact(unsigned long const &,struct EagleDynamics::Input::ImpactAssociation *)
public: class std::map<unsigned long,class std::vector<struct EagleDynamics::Input::ImpactAssociation *,class std::allocator<struct EagleDynamics::Input::ImpactAssociation *> >,struct std::less<unsigned long>,class std::allocator<class std::vector<struct EagleDynamics::Input::ImpactAssociation *,class std::allocator<struct EagleDynamics::Input::ImpactAssociation *> > > > * __thiscall EagleDynamics::Input::Associator::getImpactsTable(void)
public: unsigned char __thiscall EagleDynamics::Input::Associator::getKey(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 
public: class std::list<unsigned char,class std::allocator<unsigned char> > const * __thiscall EagleDynamics::Input::Associator::getKeyList(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall EagleDynamics::Input::Associator::getKeyName(unsigned char const &)const 
public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const * __thiscall EagleDynamics::Input::Associator::getKeyNameList(void)const 
public: class std::vector<struct EagleDynamics::Input::SwitchKeyCache,class std::allocator<struct EagleDynamics::Input::SwitchKeyCache> > * __thiscall EagleDynamics::Input::Associator::getSwitchKeysCache(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall EagleDynamics::Input::Associator::getElementName(struct EagleDynamics::Input::Element const &)const 
const EagleDynamics::Input::Associator::`vftable'
};

class Builder
{
public: __thiscall EagleDynamics::Input::Builder::Builder(class EagleDynamics::Input::Builder const &)
public: __thiscall EagleDynamics::Input::Builder::Builder(void)
public: virtual __thiscall EagleDynamics::Input::Builder::~Builder(void)
public: class EagleDynamics::Input::Builder & __thiscall EagleDynamics::Input::Builder::operator=(class EagleDynamics::Input::Builder const &)
public: static void __cdecl EagleDynamics::Input::Builder::build(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,struct EagleDynamics::Input::Reassignment *,struct EagleDynamics::Input::DefaultSwitchKey *,unsigned long,struct EagleDynamics::Input::DefaultAction *,unsigned long,struct EagleDynamics::Input::DefaultAction *,unsigned long,struct EagleDynamics::Input::DefaultLayerKey *,unsigned long)
public: static void __cdecl EagleDynamics::Input::Builder::clear(class ATL::CComPtr<class EagleDynamics::Input::IDevice>)
public: static void __cdecl EagleDynamics::Input::Builder::correct(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,struct EagleDynamics::Input::Reassignment *)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl EagleDynamics::Input::Builder::generateName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static void __cdecl EagleDynamics::Input::Builder::getAvailableElements(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,class std::list<struct EagleDynamics::Input::Element,class std::allocator<struct EagleDynamics::Input::Element> > *)
public: static void __cdecl EagleDynamics::Input::Builder::getAvailableKeys(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,class std::list<unsigned char,class std::allocator<unsigned char> > *)
public: static void __cdecl EagleDynamics::Input::Builder::load(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,struct EagleDynamics::Input::Reassignment &)
public: static void __cdecl EagleDynamics::Input::Builder::save(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,struct EagleDynamics::Input::Reassignment &)
const EagleDynamics::Input::Builder::`vftable'
};

class Distributor
{
public: __thiscall EagleDynamics::Input::Distributor::Distributor(class EagleDynamics::Input::Distributor const &)
public: __thiscall EagleDynamics::Input::Distributor::Distributor(void)
public: virtual __thiscall EagleDynamics::Input::Distributor::~Distributor(void)
public: class EagleDynamics::Input::Distributor & __thiscall EagleDynamics::Input::Distributor::operator=(class EagleDynamics::Input::Distributor const &)
public: void __thiscall EagleDynamics::Input::Distributor::add(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,class std::map<unsigned char,unsigned long,struct std::less<unsigned char>,class std::allocator<unsigned long> > *,class std::list<struct EagleDynamics::Input::Element,class std::allocator<struct EagleDynamics::Input::Element> >)
public: struct EagleDynamics::Input::Element __thiscall EagleDynamics::Input::Distributor::getElement(void)
public: unsigned long __thiscall EagleDynamics::Input::Distributor::getSwitchKey(void)
public: void __thiscall EagleDynamics::Input::Distributor::initialize(void)
public: bool __thiscall EagleDynamics::Input::Distributor::isWaiting(void)
public: bool __thiscall EagleDynamics::Input::Distributor::process(void)
protected: bool __thiscall EagleDynamics::Input::Distributor::processDevice(void)
public: void __thiscall EagleDynamics::Input::Distributor::uninitialize(void)
const EagleDynamics::Input::Distributor::`vftable'
};

class Element
{
public: __thiscall EagleDynamics::Input::Element::Element(struct EagleDynamics::Input::Element const &)
public: __thiscall EagleDynamics::Input::Element::Element(unsigned char)
public: __thiscall EagleDynamics::Input::Element::Element(unsigned char,unsigned short,float)
public: __thiscall EagleDynamics::Input::Element::Element(int)
public: __thiscall EagleDynamics::Input::Element::Element(void)
public: struct EagleDynamics::Input::Element const & __thiscall EagleDynamics::Input::Element::operator=(struct EagleDynamics::Input::Element const &)
public: bool __thiscall EagleDynamics::Input::Element::operator==(struct EagleDynamics::Input::Element const &)const 
public: bool __thiscall EagleDynamics::Input::Element::operator<(struct EagleDynamics::Input::Element const &)const 
};

class IConditionEffect
{
public: __thiscall EagleDynamics::Input::IConditionEffect::IConditionEffect(struct EagleDynamics::Input::IConditionEffect const &)
public: __thiscall EagleDynamics::Input::IConditionEffect::IConditionEffect(void)
public: struct EagleDynamics::Input::IConditionEffect & __thiscall EagleDynamics::Input::IConditionEffect::operator=(struct EagleDynamics::Input::IConditionEffect const &)
const EagleDynamics::Input::IConditionEffect::`vftable'
};

class IConstantEffect
{
public: __thiscall EagleDynamics::Input::IConstantEffect::IConstantEffect(struct EagleDynamics::Input::IConstantEffect const &)
public: __thiscall EagleDynamics::Input::IConstantEffect::IConstantEffect(void)
public: struct EagleDynamics::Input::IConstantEffect & __thiscall EagleDynamics::Input::IConstantEffect::operator=(struct EagleDynamics::Input::IConstantEffect const &)
const EagleDynamics::Input::IConstantEffect::`vftable'
};

class IDevice
{
public: __thiscall EagleDynamics::Input::IDevice::IDevice(class EagleDynamics::Input::IDevice const &)
public: __thiscall EagleDynamics::Input::IDevice::IDevice(void)
public: virtual __thiscall EagleDynamics::Input::IDevice::~IDevice(void)
public: class EagleDynamics::Input::IDevice & __thiscall EagleDynamics::Input::IDevice::operator=(class EagleDynamics::Input::IDevice const &)
const EagleDynamics::Input::IDevice::`vftable'
};

class IDeviceFactory
{
public: __thiscall EagleDynamics::Input::IDeviceFactory::IDeviceFactory(class EagleDynamics::Input::IDeviceFactory const &)
public: __thiscall EagleDynamics::Input::IDeviceFactory::IDeviceFactory(void)
public: class EagleDynamics::Input::IDeviceFactory & __thiscall EagleDynamics::Input::IDeviceFactory::operator=(class EagleDynamics::Input::IDeviceFactory const &)
public: static void __cdecl EagleDynamics::Input::IDeviceFactory::initialize(struct HWND__ *)
public: static void __cdecl EagleDynamics::Input::IDeviceFactory::uninitialize(void)
const EagleDynamics::Input::IDeviceFactory::`vftable'
};

class IForceEffect
{
public: __thiscall EagleDynamics::Input::IForceEffect::IForceEffect(struct EagleDynamics::Input::IForceEffect const &)
public: __thiscall EagleDynamics::Input::IForceEffect::IForceEffect(void)
public: struct EagleDynamics::Input::IForceEffect & __thiscall EagleDynamics::Input::IForceEffect::operator=(struct EagleDynamics::Input::IForceEffect const &)
const EagleDynamics::Input::IForceEffect::`vftable'
};

class IForceEffectFactory
{
public: __thiscall EagleDynamics::Input::IForceEffectFactory::IForceEffectFactory(struct EagleDynamics::Input::IForceEffectFactory const &)
public: __thiscall EagleDynamics::Input::IForceEffectFactory::IForceEffectFactory(void)
public: struct EagleDynamics::Input::IForceEffectFactory & __thiscall EagleDynamics::Input::IForceEffectFactory::operator=(struct EagleDynamics::Input::IForceEffectFactory const &)
const EagleDynamics::Input::IForceEffectFactory::`vftable'
};

class IGrabber
{
public: __thiscall EagleDynamics::Input::IGrabber::IGrabber(class EagleDynamics::Input::IGrabber const &)
public: __thiscall EagleDynamics::Input::IGrabber::IGrabber(void)
public: virtual __thiscall EagleDynamics::Input::IGrabber::~IGrabber(void)
public: class EagleDynamics::Input::IGrabber & __thiscall EagleDynamics::Input::IGrabber::operator=(class EagleDynamics::Input::IGrabber const &)
const EagleDynamics::Input::IGrabber::`vftable'
};

class IInterpreter
{
public: __thiscall EagleDynamics::Input::IInterpreter::IInterpreter(class EagleDynamics::Input::IInterpreter const &)
public: __thiscall EagleDynamics::Input::IInterpreter::IInterpreter(void)
public: virtual __thiscall EagleDynamics::Input::IInterpreter::~IInterpreter(void)
public: class EagleDynamics::Input::IInterpreter & __thiscall EagleDynamics::Input::IInterpreter::operator=(class EagleDynamics::Input::IInterpreter const &)
const EagleDynamics::Input::IInterpreter::`vftable'
};

class IMapper
{
public: __thiscall EagleDynamics::Input::IMapper::IMapper(class EagleDynamics::Input::IMapper const &)
public: __thiscall EagleDynamics::Input::IMapper::IMapper(void)
public: virtual __thiscall EagleDynamics::Input::IMapper::~IMapper(void)
public: class EagleDynamics::Input::IMapper & __thiscall EagleDynamics::Input::IMapper::operator=(class EagleDynamics::Input::IMapper const &)
public: virtual void __thiscall EagleDynamics::Input::IMapper::freeze(bool)
public: virtual bool __thiscall EagleDynamics::Input::IMapper::freezed(void)
public: virtual void __thiscall EagleDynamics::Input::IMapper::getAssociator(class ATL::CComPtr<class EagleDynamics::Input::Associator> *)
public: virtual class EagleDynamics::Common::Identifier __thiscall EagleDynamics::Input::IMapper::getIdentifier(void)
public: virtual unsigned long const & __thiscall EagleDynamics::Input::IMapper::getLayerKey(void)
public: virtual unsigned long const & __thiscall EagleDynamics::Input::IMapper::getSwitchKey(void)
public: virtual void __thiscall EagleDynamics::Input::IMapper::setAssociator(class ATL::CComPtr<class EagleDynamics::Input::Associator>)
public: virtual void __thiscall EagleDynamics::Input::IMapper::setGrabber(class EagleDynamics::Input::IGrabber *)
public: virtual void __thiscall EagleDynamics::Input::IMapper::setLayerKey(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
public: virtual void __thiscall EagleDynamics::Input::IMapper::setSwitchKey(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
public: virtual void __thiscall EagleDynamics::Input::IMapper::unfreeze(void)
unsigned long `public: virtual unsigned long const & __thiscall EagleDynamics::Input::IMapper::getLayerKey(void)'::`2'::lk
unsigned long `public: virtual unsigned long const & __thiscall EagleDynamics::Input::IMapper::getSwitchKey(void)'::`2'::sk
const EagleDynamics::Input::IMapper::`vftable'
};

struct IPeriodicEffect
{
public: __thiscall EagleDynamics::Input::IPeriodicEffect::IPeriodicEffect(struct EagleDynamics::Input::IPeriodicEffect const &)
public: __thiscall EagleDynamics::Input::IPeriodicEffect::IPeriodicEffect(void)
public: struct EagleDynamics::Input::IPeriodicEffect & __thiscall EagleDynamics::Input::IPeriodicEffect::operator=(struct EagleDynamics::Input::IPeriodicEffect const &)
const EagleDynamics::Input::IPeriodicEffect::`vftable'
};

struct ImpactAssociation
{
public: __thiscall EagleDynamics::Input::ImpactAssociation::ImpactAssociation(struct EagleDynamics::Input::ImpactAssociation const &)
public: __thiscall EagleDynamics::Input::ImpactAssociation::ImpactAssociation(void)
public: __thiscall EagleDynamics::Input::ImpactAssociation::~ImpactAssociation(void)
public: struct EagleDynamics::Input::ImpactAssociation const & __thiscall EagleDynamics::Input::ImpactAssociation::operator=(struct EagleDynamics::Input::ImpactAssociation const &)

public: static class std::map<unsigned long,struct EagleDynamics::Input::ImpactAssociation,struct std::less<unsigned long>,class std::allocator<struct EagleDynamics::Input::ImpactAssociation> > EagleDynamics::Input::Informator::impactAssociations
};

class Impaction
{
public: __thiscall EagleDynamics::Input::Impaction::Impaction(unsigned long,float)
public: struct EagleDynamics::Input::Impaction & __thiscall EagleDynamics::Input::Impaction::operator=(struct EagleDynamics::Input::Impaction const &)
};

class Informator
{
public: __thiscall EagleDynamics::Input::Informator::Informator(class EagleDynamics::Input::Informator const &)
public: __thiscall EagleDynamics::Input::Informator::Informator(void)
public: virtual __thiscall EagleDynamics::Input::Informator::~Informator(void)
public: class EagleDynamics::Input::Informator & __thiscall EagleDynamics::Input::Informator::operator=(class EagleDynamics::Input::Informator const &)
public: static unsigned long __cdecl EagleDynamics::Input::Informator::getAction(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl EagleDynamics::Input::Informator::getActionName(unsigned long const &)
public: static unsigned long __cdecl EagleDynamics::Input::Informator::getImpact(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl EagleDynamics::Input::Informator::getImpactName(unsigned long const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl EagleDynamics::Input::Informator::getLayerKeyName(unsigned long const &)
public: static unsigned long __cdecl EagleDynamics::Input::Informator::getSwitchKey(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl EagleDynamics::Input::Informator::getSwitchKeyName(unsigned long const &)
public: static void __cdecl EagleDynamics::Input::Informator::registerActions(struct EagleDynamics::Input::DefaultAction *,unsigned long)
public: static void __cdecl EagleDynamics::Input::Informator::registerImpacts(struct EagleDynamics::Input::DefaultAction *,unsigned long)
public: static void __cdecl EagleDynamics::Input::Informator::registerLayerKeys(struct EagleDynamics::Input::DefaultLayerKey *,unsigned long)
public: static void __cdecl EagleDynamics::Input::Informator::registerSheaf(unsigned long (*)[2],unsigned long)
public: static void __cdecl EagleDynamics::Input::Informator::registerSwitchKeys(struct EagleDynamics::Input::DefaultSwitchKey *,unsigned long)
public: static void __cdecl EagleDynamics::Input::Informator::unregister(void)
const EagleDynamics::Input::Informator::`vftable'

public: static class std::map<unsigned long,struct EagleDynamics::Input::ActionAssociation,struct std::less<unsigned long>,class std::allocator<struct EagleDynamics::Input::ActionAssociation> > EagleDynamics::Input::Informator::actionAssociations
public: static class std::vector<class std::vector<unsigned long,class std::allocator<unsigned long> >,class std::allocator<class std::vector<unsigned long,class std::allocator<unsigned long> > > > EagleDynamics::Input::Informator::actionSheafs
public: static class std::vector<struct EagleDynamics::Input::LayerKeyAssociation,class std::allocator<struct EagleDynamics::Input::LayerKeyAssociation> > EagleDynamics::Input::Informator::layerKeyAssociations
public: static class std::vector<struct EagleDynamics::Input::SwitchKeyAssociation,class std::allocator<struct EagleDynamics::Input::SwitchKeyAssociation> > EagleDynamics::Input::Informator::switchKeyAssociations
};

class Layer
{
public: __thiscall EagleDynamics::Input::Layer::Layer(struct EagleDynamics::Input::Layer const &)
public: __thiscall EagleDynamics::Input::Layer::Layer(void)
public: __thiscall EagleDynamics::Input::Layer::~Layer(void)
public: struct EagleDynamics::Input::Layer & __thiscall EagleDynamics::Input::Layer::operator=(struct EagleDynamics::Input::Layer const &)
};

class LayerKeyAssociation
{
public: __thiscall EagleDynamics::Input::LayerKeyAssociation::LayerKeyAssociation(struct EagleDynamics::Input::LayerKeyAssociation const &)
public: __thiscall EagleDynamics::Input::LayerKeyAssociation::LayerKeyAssociation(void)
public: __thiscall EagleDynamics::Input::LayerKeyAssociation::~LayerKeyAssociation(void)
public: struct EagleDynamics::Input::LayerKeyAssociation & __thiscall EagleDynamics::Input::LayerKeyAssociation::operator=(struct EagleDynamics::Input::LayerKeyAssociation const &)
};

class MultiSwitcher
{
public: __thiscall EagleDynamics::Input::MultiSwitcher::MultiSwitcher(class EagleDynamics::Input::MultiSwitcher const &)
public: __thiscall EagleDynamics::Input::MultiSwitcher::MultiSwitcher(class std::vector<class ATL::CComPtr<class EagleDynamics::Input::IMapper>,class std::allocator<class ATL::CComPtr<class EagleDynamics::Input::IMapper> > >)
public: virtual __thiscall EagleDynamics::Input::MultiSwitcher::~MultiSwitcher(void)
public: class EagleDynamics::Input::MultiSwitcher & __thiscall EagleDynamics::Input::MultiSwitcher::operator=(class EagleDynamics::Input::MultiSwitcher const &)
public: virtual void __thiscall EagleDynamics::Input::MultiSwitcher::initialize(void)
public: virtual bool __thiscall EagleDynamics::Input::MultiSwitcher::initialized(void)
public: virtual bool __thiscall EagleDynamics::Input::MultiSwitcher::isImbalanced(void)
public: virtual void __thiscall EagleDynamics::Input::MultiSwitcher::uninitialize(void)
public: virtual void __thiscall EagleDynamics::Input::MultiSwitcher::update(class std::vector<unsigned long,class std::allocator<unsigned long> > *,class std::vector<struct EagleDynamics::Input::Impaction,class std::allocator<struct EagleDynamics::Input::Impaction> > *)
const EagleDynamics::Input::MultiSwitcher::`vftable'
};

class Reassignment
{
public: __thiscall EagleDynamics::Input::Reassignment::Reassignment(struct EagleDynamics::Input::Reassignment const &)
public: __thiscall EagleDynamics::Input::Reassignment::Reassignment(void)
public: __thiscall EagleDynamics::Input::Reassignment::~Reassignment(void)
public: struct EagleDynamics::Input::Reassignment & __thiscall EagleDynamics::Input::Reassignment::operator=(struct EagleDynamics::Input::Reassignment const &)
};

class StateRedefiner
{
public: __thiscall EagleDynamics::Input::StateRedefiner::StateRedefiner(class EagleDynamics::Input::StateRedefiner const &)
public: __thiscall EagleDynamics::Input::StateRedefiner::StateRedefiner(float,float)
public: __thiscall EagleDynamics::Input::StateRedefiner::StateRedefiner(void)
public: __thiscall EagleDynamics::Input::StateRedefiner::~StateRedefiner(void)
public: class EagleDynamics::Input::StateRedefiner const & __thiscall EagleDynamics::Input::StateRedefiner::operator=(class EagleDynamics::Input::StateRedefiner const &)
public: void __thiscall EagleDynamics::Input::StateRedefiner::enable(bool)
public: bool __thiscall EagleDynamics::Input::StateRedefiner::enabled(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getCenter(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getCurvature(void)
public: bool __thiscall EagleDynamics::Input::StateRedefiner::getInvert(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getLeftLimit(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getLeftResponse(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getMaximum(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getMinimum(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getRightLimit(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::getRightResponse(void)
public: bool __thiscall EagleDynamics::Input::StateRedefiner::getStyle(void)
public: float __thiscall EagleDynamics::Input::StateRedefiner::redefine(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setCenter(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setCurvature(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setInvert(bool)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setLeftLimit(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setLeftResponse(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setMaximum(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setMinimum(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setRightLimit(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setRightResponse(float)
public: void __thiscall EagleDynamics::Input::StateRedefiner::setStyle(bool)
};

class SwitchKeyAssociation
{
public: __thiscall EagleDynamics::Input::SwitchKeyAssociation::SwitchKeyAssociation(struct EagleDynamics::Input::SwitchKeyAssociation const &)
public: __thiscall EagleDynamics::Input::SwitchKeyAssociation::SwitchKeyAssociation(void)
public: __thiscall EagleDynamics::Input::SwitchKeyAssociation::~SwitchKeyAssociation(void)
public: struct EagleDynamics::Input::SwitchKeyAssociation & __thiscall EagleDynamics::Input::SwitchKeyAssociation::operator=(struct EagleDynamics::Input::SwitchKeyAssociation const &)
};

class Switcher
{
public: __thiscall EagleDynamics::Input::Switcher::Switcher(class EagleDynamics::Input::Switcher const &)
public: __thiscall EagleDynamics::Input::Switcher::Switcher(class ATL::CComPtr<class EagleDynamics::Input::IDevice>,class ATL::CComPtr<class EagleDynamics::Input::IInterpreter>,struct EagleDynamics::Input::Reassignment *)
public: virtual __thiscall EagleDynamics::Input::Switcher::~Switcher(void)
public: class EagleDynamics::Input::Switcher & __thiscall EagleDynamics::Input::Switcher::operator=(class EagleDynamics::Input::Switcher const &)
public: virtual void __thiscall EagleDynamics::Input::Switcher::getAssociator(class ATL::CComPtr<class EagleDynamics::Input::Associator> *)
public: virtual class EagleDynamics::Common::Identifier __thiscall EagleDynamics::Input::Switcher::getIdentifier(void)
public: virtual unsigned long const & __thiscall EagleDynamics::Input::Switcher::getLayerKey(void)
public: virtual unsigned long const & __thiscall EagleDynamics::Input::Switcher::getSwitchKey(void)
public: virtual void __thiscall EagleDynamics::Input::Switcher::initialize(void)
public: virtual bool __thiscall EagleDynamics::Input::Switcher::initialized(void)
public: virtual bool __thiscall EagleDynamics::Input::Switcher::isImbalanced(void)
protected: bool __thiscall EagleDynamics::Input::Switcher::processLayerKey(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
protected: bool __thiscall EagleDynamics::Input::Switcher::processSwitchKey(struct EagleDynamics::Input::Element const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
public: virtual void __thiscall EagleDynamics::Input::Switcher::setAssociator(class ATL::CComPtr<class EagleDynamics::Input::Associator>)
public: virtual void __thiscall EagleDynamics::Input::Switcher::setGrabber(class EagleDynamics::Input::IGrabber *)
public: virtual void __thiscall EagleDynamics::Input::Switcher::setLayerKey(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
public: virtual void __thiscall EagleDynamics::Input::Switcher::setSwitchKey(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > *)
public: virtual void __thiscall EagleDynamics::Input::Switcher::uninitialize(void)
public: virtual void __thiscall EagleDynamics::Input::Switcher::update(class std::vector<unsigned long,class std::allocator<unsigned long> > *,class std::vector<struct EagleDynamics::Input::Impaction,class std::allocator<struct EagleDynamics::Input::Impaction> > *)
const EagleDynamics::Input::Switcher::`vftable'
};

struct KeyNameAssociation
{
public: struct KeyNameAssociation & __thiscall KeyNameAssociation::operator=(struct KeyNameAssociation const &)
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

class 
{
};

}		/// namespace Input

}		/// namespace EagleDynamics

#endif

