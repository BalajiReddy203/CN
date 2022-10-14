#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 100
int main()
{
	char *p,*q;
	char temp;
	char in[MAXSIZE];
	char stuff[MAXSIZE];
	char destuff[MAXSIZE];
	int count=0;
	printf("Enter the input character strng(0s ,1s omly)\n");
	scanf("%s",in);
	p=in;
	q=stuff;
	while(*p!='\o')
	{
		if(*p=='0')
		{
			*q=*p;
			q++;
			p++;
		}
		else
		{
			while(*p=='1'&&count!=5)
			{
				count++;
				*q=*p;
				q++;
				p++;
			}
			if(count==5)
			{
				*q='0';
				q++;
			}
			count=0;
		}
	}
	*q='\o';
	printf("\n The stuffed character string is");
	printf("\n%s",stuff);
	p=stuff;
	q=destuff;
	while(*p!='\o')
	{
		if(*p=='0')
		{
			*q=*p;
			q++;
			p++;
		}
		else
		while(*p=='1'&&count!=5)
		{
			count++;
			*q=*p;
			q++;
			p++;
		}
		if(count==5)
		{
			p++;
		}
		count=0;
	}
	*q='\o';
	printf("\n The destuffed character string is");
	printf("\n%s\n",destuff);
	return 0;
}
