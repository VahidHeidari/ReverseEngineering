#ifndef LSUPERFICIALFILE_H_
#define LSUPERFICIALFILE_H_

class lSuperficialFile
{
public: bool __thiscall lSuperficialFile::BuildFile(class std::list<struct lSuperficial *,class std::allocator<struct lSuperficial *> > &,class misc::mmf_write &)
public: static bool __cdecl lSuperficialFile::SortPredicate(class misc::ptr<struct lSuperficial> const &,class misc::ptr<struct lSuperficial> const &)
public: static struct lSuperficialFile * __cdecl lSuperficialFile::Open(char const *,class misc::mmf &)
public: struct lSuperficial * __thiscall lSuperficialFile::FindByName(char const *)
public: struct lSuperficial * __thiscall lSuperficialFile::FindBySquare(struct intpoint,int)
};

#endif

