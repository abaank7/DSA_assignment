#include <stdio.h>

int main() {
    int n,i,pro=1,num;

    printf("Enter the number of numbers to be multiplied: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &num);
        pro *= num;
    }

    printf("Product of numbers = %d\n", pro);

    return 0;
}
