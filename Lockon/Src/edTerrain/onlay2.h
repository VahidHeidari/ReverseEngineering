#ifndef ONLAY2_H_
#define ONLAY2_H_

class onlay2
{
	class OnLayFile
	{
public: class onlay2::OnLayFile & __thiscall onlay2::OnLayFile::operator=(class onlay2::OnLayFile const &)
public: __thiscall onlay2::OnLayFile::OnLayFile(class onlay2::OnLayFile const &)
public: __thiscall onlay2::OnLayFile::OnLayFile(void)
	const onlay2::OnLayFile::`vftable'
	};

	class OnLayFileImpl
	{
	public: __thiscall onlay2::OnLayFileImpl::OnLayFileImpl(class onlay2::OnLayFileImpl const &)
	public: __thiscall onlay2::OnLayFileImpl::OnLayFileImpl(void)
	public: __thiscall onlay2::OnLayFileImpl::~OnLayFileImpl(void)
	public: class onlay2::OnLayFileImpl & __thiscall onlay2::OnLayFileImpl::operator=(class onlay2::OnLayFileImpl const &)
	public: virtual bool __thiscall onlay2::OnLayFileImpl::Open(char const *)
	public: virtual char const * __thiscall onlay2::OnLayFileImpl::GetError(void)
	public: virtual struct onlay2::OnLayFileHeader::Square * __thiscall onlay2::OnLayFileImpl::getSquare(struct intpoint,int)
	public: virtual void __thiscall onlay2::OnLayFileImpl::Close(void)
	public: virtual void __thiscall onlay2::OnLayFileImpl::Release(void)
	const onlay2::OnLayFileImpl::`vftable'
	};

class onlay2::OnLayFile * __cdecl onlay2::CreateOnLayFile(void)
};

#endif

