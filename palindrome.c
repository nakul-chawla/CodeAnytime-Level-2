#include<stdio.h>
int main()
{
char arr[100];
int i,n,a,b;

a= 0;
printf("Enter the length of string");
scanf("%d",&n);
b= n-1;
for(i=0;i<n;i++)
{
  scanf("%c",&arr[i]);
}
for(i=0;i<n;i++)
{
  printf("%c",arr[i]);
}
for(i=0;i<n;i++)
{
  if (arr[a]== arr[b])
  {
     a++;
    b--;
  }
  else
    printf("The string is not a palindrome");
}
return 0;
}
