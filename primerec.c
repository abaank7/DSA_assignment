#include <stdio.h>

int isprimerec(int num, int divisor) {
    if (num <= 1) 
        return 0;
    
    if (divisor * divisor > num) 
        return 1;
    
    if (num % divisor == 0) 
        return 0;
    
    return isprimerec(num, divisor + 1);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isprimerec(num, 2)) 
        printf("%d is a prime number", num);
     else 
        printf("%d is not a prime number", num);
    

    return 0;
}
