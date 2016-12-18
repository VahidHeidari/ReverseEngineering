#ifndef UI_H_
#define UI_H_

namespace UI
{

public: static class UI::Button * __cdecl UI::Ptr<class UI::Button>::stub(void)
public: static class UI::Chart * __cdecl UI::Ptr<class UI::Chart>::stub(void)
public: static class UI::Editor * __cdecl UI::Ptr<class UI::Editor>::stub(void)
public: static class UI::Element * __cdecl UI::Ptr<class UI::Element>::stub(void)
public: static class UI::Selector * __cdecl UI::Ptr<class UI::Selector>::stub(void)
public: static class UI::Switch * __cdecl UI::Ptr<class UI::Switch>::stub(void)
public: static class UI::Tuner * __cdecl UI::Ptr<class UI::Tuner>::stub(void)

class Chart
{
public: __thiscall UI::Chart::Chart(void)
public: virtual __thiscall UI::Chart::~Chart(void)
Public: class Signal::Notifier<class UI::Chart *> & __thiscall UI::Chart::valueChanged(void)
public: class Signal::Notifier<class UI::Chart *> & __thiscall UI::Chart::selectionChanged(void)
public: int __thiscall UI::Chart::numRecords(void)const 
public: virtual int __thiscall UI::Chart::numFields(void)const 
public: virtual int __thiscall UI::Chart::size(void)const 
public: virtual void __thiscall UI::Chart::resize(int)
public: void __thiscall UI::Chart::`vbase destructor'(void)
const UI::Chart::`vbtable'
const UI::Chart::`vftable'{for `UI::Chart'}
const UI::Chart::`vftable'{for `UI::Element'}
};

class Dialog
{
public: __thiscall UI::Dialog::Dialog(char const *)
public: __thiscall UI::Dialog::Dialog(class UI::Dialog const &)
public: __thiscall UI::Dialog::Dialog(class UI::Element *)
public: __thiscall UI::Dialog::~Dialog(void)
public: class UI::Dialog & __thiscall UI::Dialog::operator=(class UI::Dialog const &)
Public: class UI::Element * __thiscall UI::Dialog::window(void)const 
public: class UI::Element * __thiscall UI::Dialog::child(int)const 
public: void __thiscall UI::Dialog::hide(void)
public: void __thiscall UI::Dialog::show(void)
};

class Element
{
protected: __thiscall UI::Element::Element(class UI::Element const &)
protected: __thiscall UI::Element::Element(void)
protected: virtual __thiscall UI::Element::~Element(void)
protected: void __thiscall UI::Element::operator=(class UI::Element const &)
public: class Signal::Notifier<class UI::Element *> & __thiscall UI::Element::destroyed(void)
public: virtual void __thiscall UI::Element::hide(void)
public: virtual void __thiscall UI::Element::show(bool)
public: void __thiscall UI::Element::disable(bool)
public: void __thiscall UI::Element::enable(void)
public: void __thiscall UI::Element::freeze(bool)
public: void __thiscall UI::Element::unfreeze(void)
const UI::Element::`vftable'
};

class Button
{
public: __thiscall UI::Button::Button(void)
public: virtual __thiscall UI::Button::~Button(void)
public: class Signal::Notifier<class UI::Button *> & __thiscall UI::Button::clicked(void)
public: void __thiscall UI::Button::`vbase destructor'(void)
const UI::Button::`vbtable'
const UI::Button::`vftable'
};

class Editor
{
public: __thiscall UI::Editor::Editor(void)
public: virtual __thiscall UI::Editor::~Editor(void)
public: class Signal::Notifier<class UI::Editor *> & __thiscall UI::Editor::changed(void)
public: void __thiscall UI::Editor::`vbase destructor'(void)
const UI::Editor::`vbtable'
const UI::Editor::`vftable'{for `UI::Editor'}
const UI::Editor::`vftable'{for `UI::Element'}
};

class Manager
{
public: __thiscall UI::Manager::Manager(class UI::Manager const &)
public: __thiscall UI::Manager::Manager(void)
public: virtual __thiscall UI::Manager::~Manager(void)
public: class UI::Manager & __thiscall UI::Manager::operator=(class UI::Manager const &)
public: static class UI::Manager * __cdecl UI::Ptr<class UI::Manager>::stub(void)
public: void __thiscall UI::Manager::`vbase destructor'(void)
const UI::Manager::`vbtable'
const UI::Manager::`vftable'{for `UI::Element'}
const UI::Manager::`vftable'{for `UI::Manager'}
};

class Selector
{
public: __thiscall UI::Selector::Selector(void)
public: virtual __thiscall UI::Selector::~Selector(void)
public: class Signal::Notifier<class UI::Selector *> & __thiscall UI::Selector::changed(void)
public: void __thiscall UI::Selector::`vbase destructor'(void)
const UI::Selector::`vbtable'
const UI::Selector::`vftable'{for `UI::Element'}
const UI::Selector::`vftable'{for `UI::Selector'}
};

class Switch
{
public: __thiscall UI::Switch::Switch(void)
public: virtual __thiscall UI::Switch::~Switch(void)
public: class Signal::Notifier<class UI::Switch *> & __thiscall UI::Switch::changed(void)
public: void __thiscall UI::Switch::`vbase destructor'(void)
const UI::Switch::`vbtable'
const UI::Switch::`vftable'{for `UI::Element'}
const UI::Switch::`vftable'{for `UI::Switch'}
};

class Tuner
{
public: __thiscall UI::Tuner::Tuner(void)
public: virtual __thiscall UI::Tuner::~Tuner(void)
public: class Signal::Notifier<class UI::Tuner *> & __thiscall UI::Tuner::changed(void)
public: void __thiscall UI::Tuner::`vbase destructor'(void)
const UI::Tuner::`vbtable'
const UI::Tuner::`vftable'{for `UI::Element'}
const UI::Tuner::`vftable'{for `UI::Tuner'}
};

}		/// namespace UI

#endif
