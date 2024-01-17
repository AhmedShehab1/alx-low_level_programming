#include <stdio.h>
#include <stdlib.h>
/**
* main - Store Student's marks Dynamically 
* Return: Always 0
*/
int main()
{
	int *ptr, index = 1,ans = 0,i = 1;

	//Allocate Memory For One Student
	ptr = (int*)calloc(1,sizeof(int));
	if (ptr == NULL)
	{
		printf("Cannot Allocate Memory Specified\n");
	}
	else
	{
	printf("ptr = %p\n",ptr);
	printf ("Enter Mark Of Student %d\n",i);
	scanf ("%d",&ptr[0]);
	printf("Wish To Add A New User? \n insert 1   or 0\n");
	scanf ("%d",&ans);
		while (ans == 1)
		{
			ptr = (int*)realloc(ptr,(index + 1)*sizeof(int));
			if (ptr == NULL)
			{
				printf("Reallocation Process Failed\n");
			}
			else
			{
				i++;
				printf ("Enter Mark Of Student %d\n",i);
				scanf ("%d",&ptr[index]);
			}
			printf("Wish To Add A New User? \n insert 1   or 0\n");
			scanf ("%d",&ans);
			if (ans == 1)
			{
				index++;
			}
		}
		for (int j = 0;j < i;j++)
		{
			printf("Mark Of Student No.%d is %d\n",j+1,ptr[j]);
		}
		free(ptr);
	}
	return (0);
}