#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j,k,count=0,count1=0;
	char str[20],ch,str1[20];
	printf("enter the string\n"); 
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		ch=str[i];
		for(j=0;j<l;j++)
		{
			if(ch==str[j])
			count++;
		}
			str1[i]=ch;
		for(k=0;k<=i;k++)
		{
			if(ch==str[k])
			count1++;
		}
		if(count1==1)
		printf("\n frequency of %c = %d",ch, count);
		count=0;
		count1=0;
	}
}