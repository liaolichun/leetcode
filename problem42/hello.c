#include <stdio.h>
int main(int argc,int *argv[])
{
	int a[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	int size;
	size = trap(1,12);
	printf("%d\n",size);
	return 0;
}
