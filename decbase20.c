#include <stdio.h>
int b;
void convert(int n) {
    int r;
    if (n == 0) 
        return;
    else
{
    r = n % b;
    convert(n / b);
}
    if (r > 9) 
        printf("%c", 'A' + (r - 10));
     else 
        printf("%d", r);
    
}

int main() {
    int n;
    printf("Enter decimal no.: ");
    scanf("%d", &n);
    printf("Enter base less or equal to 20: ");
    scanf("%d", &b);
    convert(n);
    return 0;
}
