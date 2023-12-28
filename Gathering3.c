#include<stdio.h>
int length(int a[])
{
	int i, count=0;
	
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	return count;
}
void main()
{
	int a[100] = {2,22,3,35,66,76,98,3,44,12,76};
	
	length(a);
	printf("\nLenth Of Array = %d",length(a));
}