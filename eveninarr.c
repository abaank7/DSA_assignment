#include <stdio.h>

int main() {
    int arr[10];
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
            printf("%d ", arr[i]);
        
    }

    return 0;
}
