#include <stdio.h>
/*
斐波拉切数列时间复杂度o(n)的算法
*/

int fib1(int n)
{
	int i;
	int a=0,b=1,c;
	if(n<1)
		return a;
    i=1;
    while(i<=n)
    {
    	c=a+b;
    	b=a;
    	a=c;
    	i++;
    }
    return c;
}

int fib2(int n)
{
	int i;
	int *addr;
	int tmp;
	if(n<1)
		return 0;
	addr = (int *)malloc(sizeof(int)*(n+1));
	addr[0]=0;
	addr[1]=1;
	i=2;
	while(i<=n)
	{
		addr[i]=addr[i-1]+addr[i-2];
		i++;
	}
	tmp=addr[n];
	free(addr);
	return tmp;
	
}
int main(void) {
	// your code goes here
	printf("%d\n",fib1(10));
	printf("%d\n",fib2(10));
	return 0;
}
