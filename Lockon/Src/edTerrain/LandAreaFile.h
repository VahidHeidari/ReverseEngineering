#ifndef LANDAREAFILE_H_
#define LANDAREAFILE_H_

class LandAreaFile
{
public: __thiscall LandAreaFile::LandAreaFile(class LandAreaFile const &)
public: __thiscall LandAreaFile::LandAreaFile(void)
public: __thiscall LandAreaFile::~LandAreaFile(void)
public: class LandAreaFile & __thiscall LandAreaFile::operator=(class LandAreaFile const &)
public: unsigned long __thiscall LandAreaFile::getLandSquareFileCount(void)
public: unsigned long __thiscall LandAreaFile::getSquareCount(void)
public: unsigned long __thiscall LandAreaFile::getTemplateCount(void)
public: void __thiscall LandAreaFile::Close(void)
public: void __thiscall LandAreaFile::getRegionsBound(struct intpoint &,struct intpoint &)
public: void __thiscall LandAreaFile::getSquaresBound(struct intpoint &,struct intpoint &)
public: struct landscape_old::LandscapeSquareSection::Square * * __thiscall LandAreaFile::getRegions(int &)
public: struct landscape_old::LandscapeSquareSection::Square * * __thiscall LandAreaFile::getSquares(int &)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getRegion(int,struct intpoint)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getRegionTemplate(int,int)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getSquare(int)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getSquare(int,struct intpoint)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getSquareTemplate(int,int)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandAreaFile::getTemplate(int)
public: bool __thiscall LandAreaFile::ConvertToNewFormat(char const *)
public: bool __thiscall LandAreaFile::Open(char const *,struct _FILETIME &,bool)
public: bool __thiscall LandAreaFile::operator!(void)const 
public: char const * __thiscall LandAreaFile::GetError(void)
public: class LandSquareFile * __thiscall LandAreaFile::getLandSquareFile(int)
public: int __thiscall LandAreaFile::getRegionType(struct intpoint)
public: int __thiscall LandAreaFile::getSquareType(struct intpoint)
};

#endif

