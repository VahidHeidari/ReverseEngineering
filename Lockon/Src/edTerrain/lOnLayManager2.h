#ifndef LONLAYMANAGER2_H_
#define LONLAYMANAGER2_H_

class lOnLayManager2
{
	class onlaysemstruct
	{
	public: __thiscall lOnLayManager2::onlaysemstruct::onlaysemstruct(struct lOnLayManager2::onlaysemstruct const &)
	public: __thiscall lOnLayManager2::onlaysemstruct::onlaysemstruct(void)
	public: __thiscall lOnLayManager2::onlaysemstruct::~onlaysemstruct(void)
	public: struct lOnLayManager2::onlaysemstruct & __thiscall lOnLayManager2::onlaysemstruct::operator=(struct lOnLayManager2::onlaysemstruct const &)
	public: int __thiscall lOnLayManager2::onlaysemstruct::getSemanticCount(void)
	public: int __thiscall lOnLayManager2::onlaysemstruct::getSemanticType(int)
	public: bool __thiscall lOnLayManager2::onlaysemstruct::empty(void)
	public: struct lOnLayManager2::onlaytexstruct * __thiscall lOnLayManager2::onlaysemstruct::getSemantic(int)
	};

	class onlaytexstruct
	{
	public: __thiscall lOnLayManager2::onlaytexstruct::onlaytexstruct(struct lOnLayManager2::onlaytexstruct const &)
	public: __thiscall lOnLayManager2::onlaytexstruct::onlaytexstruct(void)
	public: __thiscall lOnLayManager2::onlaytexstruct::~onlaytexstruct(void)
	public: class std::list<struct OnLaySquareSection::OnLay *,class std::allocator<struct OnLaySquareSection::OnLay *> > & __thiscall lOnLayManager2::onlaytexstruct::getTex(int,char const * &)
	public: int __thiscall lOnLayManager2::onlaytexstruct::getTexCount(void)
	public: struct lOnLayManager2::onlaytexstruct & __thiscall lOnLayManager2::onlaytexstruct::operator=(struct lOnLayManager2::onlaytexstruct const &)
	public: void __thiscall lOnLayManager2::onlaytexstruct::preload(void)
	};

public: __thiscall lOnLayManager2::lOnLayManager2(class lOnLayManager2 const &)
public: __thiscall lOnLayManager2::lOnLayManager2(void)
public: __thiscall lOnLayManager2::~lOnLayManager2(void)
public: class lOnLayManager2 & __thiscall lOnLayManager2::operator=(class lOnLayManager2 const &)
public: bool __thiscall lOnLayManager2::Open(char const *)
public: bool __thiscall lOnLayManager2::SaveToComplexOnLayFile(char const *)
public: bool __thiscall lOnLayManager2::SaveToSuperficialFile(char const *)
public: void __thiscall lOnLayManager2::Close(void)
public: void __thiscall lOnLayManager2::getSquareData(struct intpoint,int,struct lOnLayManager2::onlaysemstruct &)
};

#endif

