#ifndef SUPERFICIAL_H_
#define SUPERFICIAL_H_

namespace superficial
{


class lSuperficial
{
public: __thiscall superficial::lSuperficial::lSuperficial(struct superficial::lSuperficial &,class misc::mmf_write &)
public: __thiscall superficial::lSuperficial::lSuperficial(void)
};

class lSuperficialFile
{
	class 
	{
	public: __thiscall superficial::lSuperficialFile::Source::Source(struct intpoint,unsigned long,unsigned long,struct geometry::GeometryItem *)
	public: __thiscall superficial::lSuperficialFile::Source::Source(struct intpoint,unsigned long,unsigned long,struct geometry::GeometryItem *,class cPosition &,class misc::mmf_write &)
	public: __thiscall superficial::lSuperficialFile::Source::Source(struct superficial::lSuperficialFile::Source const &)
	public: __thiscall superficial::lSuperficialFile::Source::Source(void)
	public: struct superficial::lSuperficialFile::Source & __thiscall superficial::lSuperficialFile::Source::operator=(struct superficial::lSuperficialFile::Source const &)
	};

public: __thiscall superficial::lSuperficialFile::lSuperficialFile(void)
public: bool __thiscall superficial::lSuperficialFile::IsSemantic(char const *,class E3::Vector const &)
public: int __thiscall superficial::lSuperficialFile::GetSemantics(class E3::Vector const &,char * *,int)
public: static struct superficial::lSuperficialFile * __cdecl superficial::lSuperficialFile::BuildFile(class std::list<struct superficial::lSuperficialFile::Source,class std::allocator<struct superficial::lSuperficialFile::Source> > &,class misc::mmf_write &)
public: static struct superficial::lSuperficialFile * __cdecl superficial::lSuperficialFile::Open(char const *,class misc::mmf &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall superficial::lSuperficialFile::DumpLevel(int)
public: void __thiscall superficial::lSuperficialFile::BuildSemanticBmp(class Box &,class math::matrixMN<struct math::t_rgb<unsigned char> > &)
};

}		/// namespace superficial

#endif

