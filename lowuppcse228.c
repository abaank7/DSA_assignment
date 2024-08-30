#include<stdio.h>
int main()
{
char str[10];


printf("enter a string in lowercase");
gets(str);
int i=0;
while(str[i]!='\0')
{
    str[i]=str[i]-32;
    i++;
    
   
}
puts(str);
}
