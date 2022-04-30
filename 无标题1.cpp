#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,t=0;
	printf("please input a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	} 
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("The order of the number is:\n");
	printf( "%-5d%-5d%-5d\n", a, b, c);
	return 0;
}
