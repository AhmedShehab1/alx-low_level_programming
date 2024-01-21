#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Sreallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: Pointer To Newly Allocated Memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *New_Alloc_Mem;
	size_t Counter = 0;
	char *oldcharPtr, *NewCharPtr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	New_Alloc_Mem = malloc(new_size);
	if (New_Alloc_Mem == NULL)
	{
		return (NULL);
	}
	else
	{
		oldcharPtr = ptr;
		NewCharPtr = New_Alloc_Mem;
		for (; Counter < old_size; Counter++)
		{
			NewCharPtr[Counter] = oldcharPtr[Counter];
		}
	}
	free(ptr);
	return (New_Alloc_Mem);
}
