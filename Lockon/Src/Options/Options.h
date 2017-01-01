#ifndef OPTIONS_H_
#define OPTIONS_H_

`string'

namespace Options
{

void __cdecl Options::applyTerrainDensity(void)
void __cdecl Options::showPilotNames(bool)

class Book
{
public: __thiscall Options::Book::Book(class Options::Book const &)
public: __thiscall Options::Book::Book(void)
public: __thiscall Options::Book::~Book(void)
public: class Options::Book & __thiscall Options::Book::operator=(class Options::Book const &)
public: class Options::PageBase * __thiscall Options::Book::view(void)const 
public: void __thiscall Options::Book::add(class std::auto_ptr<class Options::PageBase> const &)
public: void __thiscall Options::Book::for_each(void (__thiscall Options::PageBase::*)(void))
public: void __thiscall Options::Book::open(int)
};

class Cockpit
{
public: __thiscall Options::Cockpit::Cockpit(class Options::Cockpit const &)
public: __thiscall Options::Cockpit::Cockpit(void)
public: virtual __thiscall Options::Cockpit::~Cockpit(void)
public: class Options::Cockpit & __thiscall Options::Cockpit::operator=(class Options::Cockpit const &)
public: virtual void __thiscall Options::Cockpit::apply(void)
public: virtual void __thiscall Options::Cockpit::reset(void)
public: void __thiscall Options::Cockpit::`vbase destructor'(void)
const Options::Cockpit::`vbtable'
const Options::Cockpit::`vftable'
const Options::Cockpit::`vftable'{for `Control'}
const Options::Cockpit::`vftable'{for `UI::Element'}
};

class Difficulties
{
public: __thiscall Options::Difficulties::Difficulties(void)
public: virtual __thiscall Options::Difficulties::~Difficulties(void)
public: class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > & __thiscall Options::Difficulties::getCustomData(void)
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall Options::Difficulties::getCurrentMissionOptions(int)
public: int __thiscall Options::Difficulties::getCurrentMode(void)const 
public: static bool __cdecl Options::Difficulties::isReadOnly(void)
public: virtual void __thiscall Options::Difficulties::apply(void)
public: virtual void __thiscall Options::Difficulties::display(bool)
public: virtual void __thiscall Options::Difficulties::reset(void)
public: void __thiscall Options::Difficulties::onCustom(void)
public: void __thiscall Options::Difficulties::onSave(bool)
private: void __thiscall Options::Difficulties::fillData(class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > &,int)
private: void __thiscall Options::Difficulties::onSetGlobal(void)
private: void __thiscall Options::Difficulties::readData(int)
private: void __thiscall Options::Difficulties::saveData(int,bool)
private: class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > & __thiscall Options::Difficulties::getCurrentData(int)
public: void __thiscall Options::Difficulties::`vbase destructor'(void)
const Options::Difficulties::`vbtable'
const Options::Difficulties::`vftable'
const Options::Difficulties::`vftable'{for `Control'}
const Options::Difficulties::`vftable'{for `UI::Element'}
};

class DifficultySettings
{
public: __thiscall Options::DifficultySettings::DifficultySettings(char const *,bool)
public: __thiscall Options::DifficultySettings::~DifficultySettings(void)
public: bool __thiscall Options::DifficultySettings::isReadOnly(void)const 
public: class Signal::Notifier<class Options::DifficultySettings *> & __thiscall Options::DifficultySettings::changed(void)
public: void __thiscall Options::DifficultySettings::enabler(void)
public: void __thiscall Options::DifficultySettings::onAISkillChange(int)
public: void __thiscall Options::DifficultySettings::onSave(class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > &)
public: void __thiscall Options::DifficultySettings::onUserSkill(class UI::Ptr<class UI::Selector>)
public: void __thiscall Options::DifficultySettings::setControls(class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > const &)
private: void __thiscall Options::DifficultySettings::fillCombobox(class UI::Ptr<class UI::Chart>,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const &,int)
private: void __thiscall Options::DifficultySettings::onChange(void)
private: void __thiscall Options::DifficultySettings::readDefault(class std::vector<struct Options::OptionElement,class std::allocator<struct Options::OptionElement> > &,char const *)
private: void __thiscall Options::DifficultySettings::setDifficultiesProcessor(class Options::Difficulties *)
};

class Graphics
{
public: __thiscall Options::Graphics::Graphics(class Options::Graphics const &)
public: __thiscall Options::Graphics::Graphics(void)
public: virtual __thiscall Options::Graphics::~Graphics(void)
public: virtual void __thiscall Options::Graphics::apply(void)
public: virtual void __thiscall Options::Graphics::display(bool)
public: virtual void __thiscall Options::Graphics::reset(void)
public: static int __cdecl Options::Graphics::getCivTraffic(int)
public: static int __cdecl Options::Graphics::getScenes(int)
public: static void __cdecl Options::Graphics::LoadPlugins(void)
public: static void __cdecl Options::Graphics::ParseConfig(void)
public: class Options::Graphics & __thiscall Options::Graphics::operator=(class Options::Graphics const &)
public: void __thiscall Options::Graphics::enabler(void)
public: void __thiscall Options::Graphics::onDefHigh(void)
public: void __thiscall Options::Graphics::onDefLow(void)
public: void __thiscall Options::Graphics::onDefMedium(void)
protected: virtual struct MSGTABLE const * __thiscall Options::Graphics::getMessageTable(void)const 
private: class Options::Graphics::Param * __thiscall Options::Graphics::initParam(class Options::Graphics::Param * (__cdecl*)(class ConfigParser::iterator,class ComboBox *),char const *,int)
private: void __thiscall Options::Graphics::onCivTraffic(void)
private: void __thiscall Options::Graphics::onScenes(void)
public: void __thiscall Options::Graphics::`vbase destructor'(void)
const Options::Graphics::`vbtable'
const Options::Graphics::`vftable'
const Options::Graphics::`vftable'{for `Control'}
const Options::Graphics::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const Options::Graphics::messageTable
private: static int * Options::Graphics::scenes
private: static bool * Options::Graphics::civTraffic
private: static struct MSGTABLE_ENTRY const * const Options::Graphics::messageEntries
};

class InputPage
{
public: __thiscall Options::InputPage::InputPage(class Options::InputPage const &)
public: __thiscall Options::InputPage::InputPage(void)
public: virtual __thiscall Options::InputPage::~InputPage(void)
public: class Options::InputPage & __thiscall Options::InputPage::operator=(class Options::InputPage const &)
public: virtual void __thiscall Options::InputPage::apply(void)
public: virtual void __thiscall Options::InputPage::display(bool)
public: virtual void __thiscall Options::InputPage::reset(void)
public: virtual void __thiscall Options::InputPage::undo(void)
const Options::InputPage::`vftable'
};

class OptionElement
{
public: __thiscall Options::OptionElement::OptionElement(int,int,int)
public: __thiscall Options::OptionElement::OptionElement(void)
public: struct Options::OptionElement & __thiscall Options::OptionElement::operator=(struct Options::OptionElement const &)
};

class Page
{
public: __thiscall Options::Page::Page(char const *)
public: __thiscall Options::Page::Page(class Options::Page const &)
public: virtual __thiscall Options::Page::~Page(void)
public: class Options::Page & __thiscall Options::Page::operator=(class Options::Page const &)
public: virtual void __thiscall Options::Page::display(bool)
public: void __thiscall Options::Page::`vbase destructor'(void)
const Options::Page::`vbtable'
const Options::Page::`vftable'
const Options::Page::`vftable'{for `Control'}
const Options::Page::`vftable'{for `UI::Element'}
};

class PageBase
{
public: __thiscall Options::PageBase::PageBase(class Options::PageBase const &)
public: __thiscall Options::PageBase::PageBase(void)
public: virtual __thiscall Options::PageBase::~PageBase(void)
public: class Options::PageBase & __thiscall Options::PageBase::operator=(class Options::PageBase const &)
public: virtual void __thiscall Options::PageBase::apply(void)
public: virtual void __thiscall Options::PageBase::reset(void)
public: virtual void __thiscall Options::PageBase::undo(void)
const Options::PageBase::`vftable'
};

class SoundPage
{
public: __thiscall Options::SoundPage::SoundPage(class Options::SoundPage const &)
public: __thiscall Options::SoundPage::SoundPage(void)
public: virtual __thiscall Options::SoundPage::~SoundPage(void)
public: class Options::SoundPage & __thiscall Options::SoundPage::operator=(class Options::SoundPage const &)
public: virtual void __thiscall Options::SoundPage::apply(void)
public: virtual void __thiscall Options::SoundPage::reset(void)
public: virtual void __thiscall Options::SoundPage::undo(void)
private: void __thiscall Options::SoundPage::onButton(int)
private: void __thiscall Options::SoundPage::onKnob(int)
private: void __thiscall Options::SoundPage::update(void)
public: void __thiscall Options::SoundPage::`vbase destructor'(void)
const Options::SoundPage::`vbtable'
const Options::SoundPage::`vftable'
const Options::SoundPage::`vftable'{for `Control'}
const Options::SoundPage::`vftable'{for `UI::Element'}
};

}		/// namespace Options

#endif

