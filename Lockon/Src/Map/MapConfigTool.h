#ifndef MAPCONFIGTOOL_H_
#define MAPCONFIGTOOL_H_

class MapConfigTool
{
public: __thiscall MapConfigTool::MapConfigTool(class MapConfigTool const &)
public: __thiscall MapConfigTool::MapConfigTool(void)
public: __thiscall MapConfigTool::~MapConfigTool(void)
public: class MapConfigTool & __thiscall MapConfigTool::operator=(class MapConfigTool const &)
protected: bool __thiscall MapConfigTool::readFile(char const *,class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *> > &)
protected: bool __thiscall MapConfigTool::scanVariable(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *> > &,class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *> >::iterator &,c
protected: void __thiscall MapConfigTool::freeList(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *> > &)
};

#endif

