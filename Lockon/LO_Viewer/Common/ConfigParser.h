/**
 * This file is part of Flight Dream, an Iran territory space flight simulator
 * project.
 *
 * This program is property intellectual. You can't copy or distribute nor this
 * file neither any other files of project without express permission of owner
 * of this project. All sources, files, informations, documentations, and even
 * special hardwares are proprietary.
 *
 *            Copyright (c) 2015-2016 by Vahid Heidari (DeltaCode).
 *                           All rights reserved.
 */

#ifndef CONFIGPARSER_H_
#define CONFIGPARSER_H_

class ConfigParser
{
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,float)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,double)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertBlock(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertBool(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertBool(bool)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertDouble(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,double)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertDouble(double)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertFloat(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,float)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertFloat(float)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertInt(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertInt(int)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertString(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::insertString(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall ConfigParser::iterator::isEnd(void)const
public: bool __thiscall ConfigParser::iterator::isLast(void)const
public: __thiscall ConfigParser::iterator::iterator(class ConfigParser::iterator const &)
public: __thiscall ConfigParser::iterator::iterator(class std::tree<class Token *> *,class std::tree<class Token *>::iterator,bool)
public: __thiscall ConfigParser::iterator::iterator(void)
public: class ConfigParser::iterator & __thiscall ConfigParser::iterator::operator=(class ConfigParser::iterator const &)
public: bool __thiscall ConfigParser::iterator::operator==(class ConfigParser::iterator const &)const
public: bool __thiscall ConfigParser::iterator::operator!=(class ConfigParser::iterator const &)const
public: class Token * __thiscall ConfigParser::iterator::operator*(void)
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::operator++(int)
public: class ConfigParser::iterator & __thiscall ConfigParser::iterator::operator++(void)
public: class ConfigParser::iterator __thiscall ConfigParser::begin(void)const
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::begin(void)const
public: class ConfigParser::iterator __thiscall ConfigParser::end(void)const
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::end(void)const
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::erase(void)
public: class ConfigParser::iterator __thiscall ConfigParser::find(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)const
public: class ConfigParser::iterator __thiscall ConfigParser::iterator::find(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)const
public: bool __thiscall ConfigParser::iterator::get(int &)const
public: bool __thiscall ConfigParser::iterator::get(float &)const
public: bool __thiscall ConfigParser::iterator::get(double &)const
public: bool __thiscall ConfigParser::iterator::get(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)const
public: bool __thiscall ConfigParser::iterator::get(bool &)const
public: bool __thiscall ConfigParser::iterator::getBool(bool &)const
public: bool __thiscall ConfigParser::iterator::getBool(void)const
public: double __thiscall ConfigParser::iterator::getDouble(void)const
public: bool __thiscall ConfigParser::iterator::getDouble(double &)const
public: float __thiscall ConfigParser::iterator::getFloat(void)const
public: int __thiscall ConfigParser::iterator::getInt(void)const
public: bool __thiscall ConfigParser::iterator::getInt(int &)const
public: bool __thiscall ConfigParser::iterator::getList(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &)const
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall ConfigParser::iterator::getString(void)const
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall ConfigParser::iterator::name(void)const
public: bool __thiscall ConfigParser::iterator::getString(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)const
public: enum ConfigParser::iterator::Type __thiscall ConfigParser::iterator::getType(void)const
public: bool __thiscall ConfigParser::iterator::getVector(class std::vector<int,class std::allocator<int> > &)const
public: bool __thiscall ConfigParser::iterator::set(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall ConfigParser::iterator::set(int)
public: bool __thiscall ConfigParser::iterator::set(float)
public: bool __thiscall ConfigParser::iterator::set(double)
public: bool __thiscall ConfigParser::iterator::set(bool)
public: bool __thiscall ConfigParser::iterator::setBool(bool)
public: bool __thiscall ConfigParser::iterator::setDouble(double)
public: bool __thiscall ConfigParser::iterator::setFloat(float)
public: bool __thiscall ConfigParser::iterator::setInt(int)
public: bool __thiscall ConfigParser::iterator::setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall ConfigParser::iterator::setString(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)

public: __thiscall Error::Error(class ConfigParser::Error const &)
public: __thiscall Error::Error(void)
public: __thiscall Error::~Error(void)
public: class ConfigParser::Error & __thiscall ConfigParser::Error::operator=(class ConfigParser::Error const &)
public: void __thiscall ConfigParser::Error::reset(void)

public: __thiscall ConfigParser(class ConfigParser const &)
public: __thiscall ConfigParser(void)
public: virtual __thiscall ~ConfigParser(void)
public: bool __thiscall isInitialized(void)
public: class ConfigParser & __thiscall operator=(class ConfigParser const &)
private: void __thiscall appendBuffer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int)
private: void __thiscall dump(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: int __thiscall getErrorColumn(void)
public: int __thiscall getErrorLine(void)
public: bool __thiscall getLastError(class ConfigParser::Error &)
private: bool __thiscall getRowAndTextFromOffset(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,unsigned long,unsigned long,unsigned long *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)
public: bool __thiscall parse(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall parse(char const *,long)
public: void __thiscall reset(void)
public: bool __thiscall save(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall save(char * *,long &)
public: bool __thiscall save(void)
private: bool __thiscall saveItem(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class ConfigParser::iterator,int &)
const ConfigParser::`vftable'
};

#endif

