#include<stdio.h>
int main()
{
char str1[10];


printf("enter string1");
gets(str1);


int i=0,l=0,j=0;
while(str1[i]!='\0')
{
   l++;
   
    i++;
}
for(i=0,j=l-1;i<=j;i++,j--)
{
   char ch=str1[i];
   str1[i]=str1[j];
   str1[j]=ch; 
}
puts(str1);
}
