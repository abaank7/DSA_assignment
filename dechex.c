#include <stdio.h>

void hexa(int n) {
    int r;
    if (n == 0) 
        return;
    else{
    r = n % 16;
    hexa(n / 16);
}
    if (r > 9) 
        printf("%c", 'A' + (r - 10));
     else 
        printf("%d", r);
    
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
   
    hexa(n);
    printf("\n");
    return 0;
}
