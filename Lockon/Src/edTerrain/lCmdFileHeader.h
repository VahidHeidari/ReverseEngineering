#ifndef LCMDFILEHEADER_H_
#define LCMDFILEHEADER_H_

class lCmdFileHeader
{
	struct ObjectName
	{
	public: __thiscall lCmdFileHeader::ObjectName::ObjectName(struct lCmdFileHeader::ObjectName const &)
	public: __thiscall lCmdFileHeader::ObjectName::ObjectName(void)
	public: struct lCmdFileHeader::ObjectName & __thiscall lCmdFileHeader::ObjectName::operator=(struct lCmdFileHeader::ObjectName const &)
	};

	struct ObjectShape
	{
	public: __thiscall lCmdFileHeader::ObjectShape::ObjectShape(struct lCmdFileHeader::ObjectShape const &)
	public: __thiscall lCmdFileHeader::ObjectShape::ObjectShape(void)
	public: struct lCmdFileHeader::ObjectShape & __thiscall lCmdFileHeader::ObjectShape::operator=(struct lCmdFileHeader::ObjectShape const &)
	public: struct lCmdFileHeader::Shape * __thiscall lCmdFileHeader::ObjectShape::getShape(unsigned long)
	};

	struct TextureName
	{
	public: __thiscall lCmdFileHeader::TextureName::TextureName(void)
	public: struct lCmdFileHeader::TextureName & __thiscall lCmdFileHeader::TextureName::operator=(struct lCmdFileHeader::TextureName const &)
	};

public: __thiscall lCmdFileHeader::lCmdFileHeader(struct lCmdFileHeader const &)
public: __thiscall lCmdFileHeader::lCmdFileHeader(void)
public: struct lCmdFileHeader & __thiscall lCmdFileHeader::operator=(struct lCmdFileHeader const &)
public: char * __thiscall lCmdFileHeader::getTexture(int)
public: struct lCmdFileHeader::ObjectShape * __thiscall lCmdFileHeader::getObjectShape(int,char * &)
};

#endif

