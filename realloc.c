#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
ptr = (int *)malloc(sizeof(int)*1024);
ptr = (int *)realloc(ptr,sizeof(int));
printf("%lu",sizeof(ptr));
return 0;
}
