#ifndef MENUPROCESSOR_H_
#define MENUPROCESSOR_H_

class MenuProcessor
{
public: __thiscall MenuProcessor::MenuProcessor(class MenuProcessor const &)
public: __thiscall MenuProcessor::MenuProcessor(void)
public: virtual __thiscall MenuProcessor::~MenuProcessor(void)
public: class MenuProcessor & __thiscall MenuProcessor::operator=(class MenuProcessor const &)
public: virtual bool __thiscall MenuProcessor::initialize(void)
public: virtual bool __thiscall MenuProcessor::uninitialize(void)
public: virtual void __thiscall MenuProcessor::onCreate(void)
public: void __thiscall MenuProcessor::onClose(void)
public: void __thiscall MenuProcessor::onExit(void)
public: void __thiscall MenuProcessor::setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
protected: virtual struct MSGTABLE const * __thiscall MenuProcessor::getMessageTable(void)const 
public: void __thiscall MenuProcessor::`vbase destructor'(void)
const MenuProcessor::`vbtable'
const MenuProcessor::`vftable'{for `Control'}
const MenuProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const MenuProcessor::`vftable'{for `System'}
const MenuProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const MenuProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const MenuProcessor::messageEntries
};

#endif

