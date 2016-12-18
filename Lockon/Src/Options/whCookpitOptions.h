#ifndef WHCOOKPITOPTIONS_H_
#define WHCOOKPITOPTIONS_H_

class whCookpitOptions
{
public: __thiscall whCockpitOptions::whCockpitOptions(char const *)
public: __thiscall whCockpitOptions::whCockpitOptions(class whCockpitOptions const &)
public: __thiscall whCockpitOptions::~whCockpitOptions(void)
public: class whCockpitOptions & __thiscall whCockpitOptions::operator=(class whCockpitOptions const &)
public: __thiscall whCockpitOptions::OptionsData::OptionsData(void)
public: struct whCockpitOptions::OptionsData & __thiscall whCockpitOptions::OptionsData::operator=(struct whCockpitOptions::OptionsData const &)
public: struct whCockpitOptions::OptionsData * __thiscall whCockpitOptions::get(void)
public: struct whCockpitOptions::OptionsData * __thiscall whCockpitOptions::getDefault(void)
public: void __thiscall whCockpitOptions::load(void)
public: void __thiscall whCockpitOptions::save(void)
public: void __thiscall whCockpitOptions::set(struct whCockpitOptions::OptionsData const *)
private: void __thiscall whCockpitOptions::read(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
private: void __thiscall whCockpitOptions::write(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall whCockpitOptions::`default constructor closure'(void)
};

#endif

