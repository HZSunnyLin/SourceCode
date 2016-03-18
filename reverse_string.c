#include <stdio.h>

void reverse(char str[],int strlen,int rvslen)
{
	int i,j;
	char tmp;
	if(rvslen<0 || strlen <0)
		return;
	else
	{
		rvslen%=strlen;
		//
		i=0;j=strlen-rvslen-1;
		while(i<j)
		{
			tmp=str[i];
			str[i]=str[j];
			str[j]=tmp;
			i++;
			j--;
		}
		//
		i=strlen-rvslen;
		j=strlen-1;
		while(i<j)
		{
			tmp=str[i];
			str[i]=str[j];
			str[j]=tmp;
			i++;
			j--;
		}
		
		//
		i=0;
		j=strlen-1;
		while(i<j)
		{
			tmp=str[i];
			str[i]=str[j];
			str[j]=tmp;
			i++;
			j--;
		}
		
		printf("%s\n",str);
	}
}

int main(void) {
	// your code goes here
	int strlen=0;
	int rvslen=0;
	char str[10]="abcdefghi";
	strlen=9;
	rvslen=2;
	reverse(str,strlen,rvslen);
	return 0;
}
