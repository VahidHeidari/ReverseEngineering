#ifndef SERIALIZERKEEPER_H_
#define SERIALIZERKEEPER_H_

class SerializerKeeper * __cdecl serializerKeeper(void)

class SerializerKeeper
{
public: __thiscall SerializerKeeper::SerializerKeeper(class SerializerKeeper const &)
public: __thiscall SerializerKeeper::SerializerKeeper(void)
public: virtual __thiscall SerializerKeeper::~SerializerKeeper(void)
public: class SerializerKeeper & __thiscall SerializerKeeper::operator=(class SerializerKeeper const &)
public: int __thiscall SerializerKeeper::getMode(void)
public: void __thiscall SerializerKeeper::closeSerializer(void)
public: void __thiscall SerializerKeeper::getSerializer(class EagleDynamics::Common::Serializer * *)
public: void __thiscall SerializerKeeper::openSerializer(void)
public: void __thiscall SerializerKeeper::setMode(int)
const SerializerKeeper::`vftable'
};

#endif
