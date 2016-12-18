#ifndef HINT_H_
#define HINT_H_

class Hint
{
public: __thiscall Hint::Hint(struct HintParameters const &)
public: __thiscall Hint::Hint(void)
public: virtual __thiscall Hint::~Hint(void)
public: int __thiscall Hint::getDelayTime(void)const 
public: int __thiscall Hint::getLifeTime(void)
public: virtual void __thiscall Hint::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Hint::arrange(struct HintParameters const &)
public: void __thiscall Hint::hide(bool)
public: void __thiscall Hint::setDelayTime(int)
public: void __thiscall Hint::setLifeTime(int)
public: void __thiscall Hint::show(char const *,class Control *)
protected: virtual struct MSGTABLE const * __thiscall Hint::getMessageTable(void)const 
protected: virtual void __thiscall Hint::onPaint(void)
private: void __thiscall Hint::calculateCoordinates(void)
private: void __thiscall Hint::thisArrange(struct HintParameters const &)
public: void __thiscall Hint::`vbase destructor'(void)
const Hint::`vbtable'{for `ControlWithVisibleAreas'}
const Hint::`vbtable'{for `UI::Button'}
const Hint::`vbtable'{for `UI::Switch'}
const Hint::`vftable'{for `Control'}
const Hint::`vftable'{for `UI::Element'}
const Hint::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const Hint::messageTable
private: static struct MSGTABLE_ENTRY const * const Hint::messageEntries
};

#endif
