#include <stdio.h>

int sod(int n) {
    if (n == 0) 
        return 0;
     else 
        return (n % 10 + sod(n / 10));
    
}

int main() {
    int n, s;
    printf("Enter number: ");
    scanf("%d", &n);
    s = sod(n);
    printf("Sum of digits of %d is %d", n, s);
    return 0;
}
