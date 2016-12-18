#ifndef RESPARSER_H_
#define RESPARSER_H_

class ResParser
{
public: __thiscall ResParser::ResParser(char const *,int)
public: __thiscall ResParser::ResParser(class ResParser const &)
public: __thiscall ResParser::~ResParser(void)
public: class ResParser & __thiscall ResParser::operator=(class ResParser const &)
public: bool __thiscall ResParser::get(bool &)
public: bool __thiscall ResParser::get(class TPoint<float> &)
public: bool __thiscall ResParser::get(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: bool __thiscall ResParser::get(class std::list<class TPoint<float>,class std::allocator<class TPoint<float> > > &)
public: bool __thiscall ResParser::get(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &)
public: bool __thiscall ResParser::get(class std::list<float,class std::allocator<float> > &)
public: bool __thiscall ResParser::get(class std::list<int,class std::allocator<int> > &)
public: bool __thiscall ResParser::get(class std::vector<class TPoint<float>,class std::allocator<class TPoint<float> > > &,bool)
public: bool __thiscall ResParser::get(class std::vector<float,class std::allocator<float> > &,bool)
public: bool __thiscall ResParser::get(class std::vector<int,class std::allocator<int> > &,bool)
public: bool __thiscall ResParser::get(double &)
public: bool __thiscall ResParser::get(float &)
public: bool __thiscall ResParser::get(int &)
public: bool __thiscall ResParser::get(long &)
public: bool __thiscall ResParser::get(unsigned long &)
public: bool __thiscall ResParser::nextCommand(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: int __thiscall ResParser::getPos(void)const 
public: void __thiscall ResParser::setAvailableChars(char const *)
public: void __thiscall ResParser::setPos(int)
private: bool __thiscall ResParser::isAvailableChar(char)
private: bool __thiscall ResParser::nextArg(void)
};

#endif
