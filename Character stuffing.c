#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
	int i=0,j=0,n,pos;
	char a[20],b[50],ch;
	printf("Enter string\n");
	scanf("%s",&a);
	n=strlen(a);
	printf("Enter position\n");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("Invalid position,Enter again");
		scanf("%d",&pos);
	}
	printf("Enter the character\n");
	ch=getch();
	b[0]='d';
	b[1]='T';
	b[2]='e';
	b[3]='s';
	b[4]='r';
	b[5]='%';
	j=6;
	while(i<n)
	{
		if(i==pos-1)
		{
			b[j]='d';
			b[j+1]='T';
			b[j+2]='e';
			b[j+3]=ch;
			b[j+4]='d';
			b[j+5]='T';
			b[j+6]='e';
			j=j+7;
		}
	if(a[i]=='d'&&a[i+1]=='T'&&a[i+2]=='e')
	{
		b[j]='d';
		b[j+1]='T';
		b[j+2]='e';
		j=j+3;
	}
	b[j]=a[i];
	i++;
	j++;
}
b[j]='d';
b[j+1]='T';
b[j+2]='e';
b[j+3]='e';
b[j+4]='t';
b[j+5]='x';
b[j+6]='o';
printf("\n Frame after stuffing:\n");
printf("%s",b);
getch();
}
