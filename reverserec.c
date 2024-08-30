#include <stdio.h>

int reverse(int num) {
    static int rev = 0;
    if (num == 0) 
        return rev;
    
    rev = rev * 10 + num % 10;
    return reverse(num / 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int reversed_num = reverse(n);
    printf("Reversed number: %d", reversed_num);
    return 0;
}
