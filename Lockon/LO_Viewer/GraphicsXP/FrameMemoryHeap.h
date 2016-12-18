#ifndef FRAMEMEMORYHEAP_H_
#define FRAMEMEMORYHEAP_H_

class FrameMemoryHeap
{
	struct free_chunk {};
class FrameMemoryHeap frame_heap

public: __thiscall FrameMemoryHeap(int,int)
public: __thiscall ~FrameMemoryHeap(void)
public: class FrameMemoryHeap & __thiscall operator=(class FrameMemoryHeap const &)
private: void __thiscall create_pool(int)
public: void __thiscall free_memory(void *,unsigned int)
private: struct free_chunk * __thiscall get_chunk(void *,int)
private: void * __thiscall get_from_pool(unsigned int)
public: int __thiscall get_max_memory(void)
public: void * __thiscall get_memory(unsigned int)
private: void __thiscall move_left(struct free_chunk *)
private: void __thiscall move_right(struct free_chunk *)
public: void * __thiscall quick_get_memory(unsigned int)
public: void __thiscall release_memory(void)
private: struct free_chunk * __thiscall remove_chunk(struct free_chunk *)
public: void __thiscall reset_memory(void)
public: void __thiscall FrameMemoryHeap::`default constructor closure'(void)
};

#endif

