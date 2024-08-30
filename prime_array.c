#include <stdio.h>

int isprime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0;
        
    }
    return 1;
}

int main() {
    int arr[10], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Enter elements: ");
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (isprime(arr[i])) 
            printf("%d ", arr[i]);
        
    }
    printf("\n");

    return 0;
}
