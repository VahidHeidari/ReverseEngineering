#ifndef PLUGIN_H_
#define PLUGIN_H_

class Plugin
{
public: __thiscall Plugin(class Plugin const &)
public: __thiscall Plugin(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __thiscall ~Plugin(void)
public: class Plugin & __thiscall operator=(class Plugin const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall GetName(void)
public: virtual bool __thiscall initialize(void)
public: virtual void __thiscall uninitialize(void)
const Plugin::`vftable'
};

#endif

