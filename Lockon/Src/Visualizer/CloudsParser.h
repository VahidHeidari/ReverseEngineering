#ifndef CLOUDSPARSER_H_
#define CLOUDSPARSER_H_

class CloudsParser
{
	class viCloudNdistance
	{
	public: __thiscall CloudsParser::viCloudNdistance::viCloudNdistance(class viObject *)
	public: __thiscall CloudsParser::viCloudNdistance::viCloudNdistance(struct CloudsParser::viCloudNdistance const &)
	public: bool __thiscall CloudsParser::viCloudNdistance::operator<(struct CloudsParser::viCloudNdistance const &)const 
	public: struct CloudsParser::viCloudNdistance & __thiscall CloudsParser::viCloudNdistance::operator=(struct CloudsParser::viCloudNdistance const &)
	};

public: __thiscall CloudsParser::CloudsParser(class CloudsParser const &)
public: __thiscall CloudsParser::CloudsParser(void)
public: virtual __thiscall CloudsParser::~CloudsParser(void)
public: class CloudsParser & __thiscall CloudsParser::operator=(class CloudsParser const &)
public: virtual class Graphics::RenderObject * __thiscall CloudsParser::GetNextObject(void *)
public: virtual void __thiscall CloudsParser::DrawAll(void *)
public: virtual void __thiscall CloudsParser::InitFrame(int *,int *)
public: virtual void __thiscall CloudsParser::OnObjectReady(class Graphics::RenderObject *)
public: virtual void __thiscall CloudsParser::Parse(void)
protected: static bool __cdecl CloudsParser::OnSearchObject(class viObject *,class viSearch *,void *)
const CloudsParser::`vftable'
};

#endif

