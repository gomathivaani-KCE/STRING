#include<stdio.h>
#include<string.h>
int main()
{
char string[100];
scanf("%s",string);
	printf("%s",string);
int l=strlen(string);
printf("%d",l);
char string1[100];
int i=0,j=l-1;
while(i!=l)
{
	string1[i]=string[j];
	j--;
	i++;
}
	printf("%s",string1);
	return 0;
}
