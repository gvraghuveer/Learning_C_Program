# Pointers in C
- A variable that stores address of another variable

## 1. Applications:
1. In Structures
2. In Arrays
3. In Functions
4. In DMA
5. Pointer Arithmentic

## 2. Main Types of Pointers:
1. Integer Pointer (int *)
2. Char Pointer (char *)
3. Float Pointer (float *)
4. Double Pointer (double *)
5. Null Pointer
6. Pointer to Pointer (**)
7. Pointer as Array
8. Array of Pointers

# Dynamic Memory Allocation
- Allocates memory while runtime
- It is a part of <stdlib.h>

## 1. DMA Function
1. malloc()
- Memory Allocation
- Single parameter that is size
- Stores garbage values

2. calloc()
- Contiguous allocation
- Number of elements and size are parameter
- Stores zero at initilization

3. realloc()
- Resize allocation
- Exisiting pointer and size is the parameter

4. free()