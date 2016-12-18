#ifndef INPUT_H_
#define INPUT_H_

namespace EagleDynamics
{

namespace Input
{

class EagleDynamics::Input::ActionSystem * globalActionSystem
struct EagleDynamics::Input::DefaultAction * globalDefaultJoystickActionKeys
struct EagleDynamics::Input::DefaultAction * globalDefaultJoystickActions
struct EagleDynamics::Input::DefaultAction * globalDefaultKeyboardActions
struct EagleDynamics::Input::DefaultAction * globalMouseAxes
struct EagleDynamics::Input::DefaultAction * globalTrackIRAxes
struct EagleDynamics::Input::DefaultLayerKey * globalDefaultLayerKeys
struct EagleDynamics::Input::DefaultSwitchKey * globalDefaultKeyboardSwitchKeys

class ActionRepeater
{
public: __thiscall EagleDynamics::Input::ActionRepeater::ActionRepeater(class EagleDynamics::Input::ActionRepeater const &)
public: __thiscall EagleDynamics::Input::ActionRepeater::ActionRepeater(void)
public: virtual __thiscall EagleDynamics::Input::ActionRepeater::~ActionRepeater(void)
public: class EagleDynamics::Input::ActionRepeater & __thiscall EagleDynamics::Input::ActionRepeater::operator=(class EagleDynamics::Input::ActionRepeater const &)
public: void __thiscall EagleDynamics::Input::ActionRepeater::clear(void)
public: void __thiscall EagleDynamics::Input::ActionRepeater::setImbalanced(bool)
public: void __thiscall EagleDynamics::Input::ActionRepeater::update(class std::vector<unsigned long,class std::allocator<unsigned long> > &)
const EagleDynamics::Input::ActionRepeater::`vftable'
};

class ActionSystem
{
public: __thiscall EagleDynamics::Input::ActionSystem::ActionSystem(class EagleDynamics::Input::ActionSystem const &)
public: __thiscall EagleDynamics::Input::ActionSystem::ActionSystem(void)
public: virtual __thiscall EagleDynamics::Input::ActionSystem::~ActionSystem(void)
public: class EagleDynamics::Input::ActionSystem & __thiscall EagleDynamics::Input::ActionSystem::operator=(class EagleDynamics::Input::ActionSystem const &)
public: bool __thiscall EagleDynamics::Input::ActionSystem::freezed(void)
public: class ATL::CComPtr<class EagleDynamics::Input::Associator> __thiscall EagleDynamics::Input::ActionSystem::getAssociator(class ATL::CComPtr<class EagleDynamics::Input::IDevice>)
public: class ATL::CComPtr<class EagleDynamics::Input::Distributor> __thiscall EagleDynamics::Input::ActionSystem::getDistributor(class ATL::CComPtr<class EagleDynamics::Input::IDevice>)
public: class std::vector<struct EagleDynamics::Input::Impaction,class std::allocator<struct EagleDynamics::Input::Impaction> > & __thiscall EagleDynamics::Input::ActionSystem::getImpactions(void)
public: class std::vector<unsigned long,class std::allocator<unsigned long> > & __thiscall EagleDynamics::Input::ActionSystem::getActions(void)
public: struct EagleDynamics::Input::Reassignment * __thiscall EagleDynamics::Input::ActionSystem::getReassignment(class ATL::CComPtr<class EagleDynamics::Input::IDevice>)
public: virtual int __thiscall EagleDynamics::Input::ActionSystem::Init(void)
public: virtual int __thiscall EagleDynamics::Input::ActionSystem::Reinitialize(void)
public: virtual void __thiscall EagleDynamics::Input::ActionSystem::Finish(void)
public: virtual void __thiscall EagleDynamics::Input::ActionSystem::Process(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::addAction(unsigned long const &)
public: void __thiscall EagleDynamics::Input::ActionSystem::addImpaction(struct EagleDynamics::Input::Impaction const &)
public: void __thiscall EagleDynamics::Input::ActionSystem::clear(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::defaultReassignment(class ATL::CComPtr<class EagleDynamics::Input::IDevice>)
public: void __thiscall EagleDynamics::Input::ActionSystem::freeze(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::load(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::restore(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::save(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::setGrabber(class EagleDynamics::Input::IGrabber *,long const &)
public: void __thiscall EagleDynamics::Input::ActionSystem::toggleFreeze(void)
public: void __thiscall EagleDynamics::Input::ActionSystem::unfreeze(void)
const EagleDynamics::Input::ActionSystem::`vftable'
};

class Interpreter
{
public: __thiscall EagleDynamics::Input::Interpreter::Interpreter(class EagleDynamics::Input::Interpreter const &)
public: __thiscall EagleDynamics::Input::Interpreter::Interpreter(void)
public: virtual __thiscall EagleDynamics::Input::Interpreter::~Interpreter(void)
public: class EagleDynamics::Input::Interpreter & __thiscall EagleDynamics::Input::Interpreter::operator=(class EagleDynamics::Input::Interpreter const &)
public: virtual void __thiscall EagleDynamics::Input::Interpreter::interpret(unsigned long const &,class std::vector<unsigned long,class std::allocator<unsigned long> > &)
const EagleDynamics::Input::Interpreter::`vftable'
};

}		/// namespace Input

}		/// namespace EagleDynamics

#endif

