#ifndef __VMLD_FUNC_CPP_H__
#define __VMLD_FUNC_CPP_H__

#include <new>      // bad_alloc
#include <stddef.h> // size_t

void* operator new     (size_t size, const char* file, const int line) throw(std::bad_alloc);
void* operator new[]   (size_t size, const char* file, const int line) throw(std::bad_alloc);
void  operator delete  (void* ptr) throw();
void  operator delete[](void* ptr) throw();
void  foo(void); // gilgil temp

#endif // __VMLD_FUNC_CPP_H__
