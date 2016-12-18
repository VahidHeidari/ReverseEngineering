#ifndef MAIL_H_
#define MAIL_H_

#include "Mem.h"

namespace Mail
{

class ByteReader
{
public: __thiscall Mail::ByteReader::ByteReader(class Mem::Ptr<class Mail::Chunk> const &)
public: __thiscall Mail::ByteReader::ByteReader(void)
public: __thiscall Mail::ByteReader::~ByteReader(void)
public: bool __thiscall Mail::ByteReader::init(class Mem::Ptr<class Mail::Chunk> const &)
public: class Mem::Ptr<class Mail::Chunk> __thiscall Mail::ByteReader::getData(unsigned int)
public: int __thiscall Mail::ByteReader::getInt(unsigned int)
public: void __thiscall Mail::ByteReader::add(class Mem::Ptr<class Mail::Chunk> const &)
public: unsigned int __thiscall Mail::ByteReader::getData(void *,unsigned int)
};

class Buffer
{
public: __thiscall Mail::Buffer::Buffer(void)
public: __thiscall Mail::Buffer::~Buffer(void)
private: static class Mem::PoolOf<class Mail::Buffer> Mail::Buffer::m_pool
};

class ByteWriter
{
public: __thiscall Mail::ByteWriter::ByteWriter(void)
public: __thiscall Mail::ByteWriter::~ByteWriter(void)
public: class Mail::ByteWriter & __thiscall Mail::ByteWriter::putData(void const *,unsigned int)
public: class Mail::ByteWriter & __thiscall Mail::ByteWriter::putInt(int,unsigned int)
public: class Mem::Ptr<class Mail::Chunk> __thiscall Mail::ByteWriter::end(void)
};

class Chunk
{
public: static class Mem::Ptr<class Mail::Chunk> __cdecl Mail::Chunk::alloc(unsigned int)
public: static class Mem::Ptr<class Mail::Chunk> __cdecl Mail::Chunk::try_alloc(unsigned int)
protected: class Mem::Ptr<class Mail::Chunk> __thiscall Mail::Chunk::rafter(unsigned int)const 
protected: class Mem::Ptr<class Mail::Chunk> __thiscall Mail::Chunk::rbefore(unsigned int)const 
private: static class Mem::PoolOf<class Mail::Chunk> Mail::Chunk::m_pool
};

class MsgImpl
{
private: static class Mem::PoolOf<class Mail::MsgImpl> Mail::MsgImpl::m_pool
};

class Reader
{
public: __thiscall Mail::Reader::Reader(class Mail::Message const &)
public: __thiscall Mail::Reader::Reader(struct Var::Nil const &)
public: __thiscall Mail::Reader::Reader(void)
public: virtual __thiscall Mail::Reader::~Reader(void)
public: unsigned long __thiscall Mail::Reader::get(unsigned char)
protected: virtual void __thiscall Mail::Reader::stream(void *,int)
private: void __thiscall Mail::Reader::init(void)
};

class Server
{
public: __thiscall Mail::Server::Server(class Mail::Server const &)
public: __thiscall Mail::Server::Server(void)
public: virtual __thiscall Mail::Server::~Server(void)
public: class Mail::Server & __thiscall Mail::Server::operator=(class Mail::Server const &)
const Mail::Server::`vftable'

class Mail::Server * globalMail
};

class Stream
{
public: virtual __thiscall Mail::Stream::~Stream(void)
};

class Writer
{
public: __thiscall Mail::Writer::Writer(class Mail::Message const &)
public: virtual __thiscall Mail::Writer::~Writer(void)
public: void __thiscall Mail::Writer::put(unsigned long,unsigned char)
protected: virtual void __thiscall Mail::Writer::stream(void *,int)
private: void __thiscall Mail::Writer::flush(void)
};

}		/// namespace Mail

#endif

