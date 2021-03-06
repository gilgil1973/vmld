// ----------------------------------------------------------------------------
// macro for c
// ----------------------------------------------------------------------------
#include "vmld_func_c.h"
#undef  malloc
#define malloc(SIZE)        vmld_malloc ((SIZE),          __FILE__, __LINE__)
#undef  calloc
#define calloc(NMEMB, SIZE) vmld_calloc ((NMEMB), (SIZE), __FILE__, __LINE__)
#undef  realloc
#define realloc(PTR, SIZE)  vmld_realloc((PTR), (SIZE),   __FILE__, __LINE__)
#undef  free
#define free(PTR)           vmld_free   ((PTR),           __FILE__, __LINE__)

// ----------------------------------------------------------------------------
// macro for cpp
// ----------------------------------------------------------------------------
#ifdef __cplusplus

#include "vmld_func_cpp.h"
#undef  vmld_new
#define vmld_new new(__FILE__, __LINE__)
#undef  new
#define new      vmld_new

#endif // __cplusplus
