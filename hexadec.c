#include<stdio.h>
void hexadecimal(int);
int main()
{
    int n;
   
    printf("enter a valid decimal number");
    scanf("%d",&n);
    hexadecimal(n);
    

    
}
void hexadecimal(int n)
{
    int r;
    if(n==0)
    return;
    else
    {
    r=n%16;
    hexadecimal(n/16);
    }
    if(r>9)
    printf("%c",'A'+(r-10));
    else
    printf("%d",r);
    
    
    
    
}