#ifndef MODELS_H_
#define MODELS_H_

namespace models
{

class lModel {};

class File
{
public: class models::lModel * __thiscall models::File::getModel(char const *)
public: class models::lModel * __thiscall models::File::getModel(int)
public: int __thiscall models::File::getModelCount(void)
public: static struct models::File * __cdecl models::File::BuildFile(class std::list<struct models::File::Source,class std::allocator<struct models::File::Source> > &,class misc::mmf_write &)
public: static struct models::File * __cdecl models::File::Open(char const *,class misc::mmf &)
};

}		/// namespace models

#endif

