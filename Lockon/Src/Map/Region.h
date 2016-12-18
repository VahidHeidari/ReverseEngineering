#ifndef REGION_H_
#define REGION_H_

class Region
{
public: __thiscall Region::Region(class Region const &)
public: __thiscall Region::Region(unsigned long)
public: __thiscall Region::~Region(void)
public: class E3::Vector const & __thiscall Region::getCenter(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Region::getName(void)const 
public: struct Region::DrawInfo const * __thiscall Region::getDrawInfo(void)
public: unsigned long const __thiscall Region::getId(void)const 
public: void __thiscall Region::setCenter(class E3::Vector const &)
public: void __thiscall Region::setDrawInfo(struct Region::DrawInfo *)
public: void __thiscall Region::setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
};

#endif

