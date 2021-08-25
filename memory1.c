/*Memory mangment:
-------------------to store anything in computer,we should have to allocate the 
memory first.This memory allocation is conducted in two ways.
	1)Static memory allocation
	2)Dynamic memory allocation
in static memory allocation,the memory is specified at compile/desgin time,based
on data type of array size.This type of memory management is called compile time
memory management.
in static memory allocation,the memory size is fixed at compile time and we cant
change this memory size at run time.It causes some times memory wastage/shortage.

To avoid this problem,the only solution is dynamic memory allocation.

In dynamic memory allocation,the memory is allocated at run time,based on the user
input,instantly.This type of memory managment.

To conduct dynamic memory allocation,we should have to use pointers.

In dynamic memory allocation the memory is allocated in HEAP area.

To manage the dynamic memory,we are using some predefined finctions like
malloc()
calloc()
realloc()
free()
All this functions are avilable in <alloc.h>
malloc(),realloc(),calloc() functions are able to allocate the memory of 64kb maximum
at a time.
To allocate more than 64KB memory,use the functions
farmalloc()
farcalloc()
farrealloc()

NOTE:
-----When we are working with dynamic memory allocation,we have to allocate the 
memory for any data type.Due to this all these functions return datatype is void *
which is generic type.Due to this we should have to provide explicit type casting
for all these functions.*/


