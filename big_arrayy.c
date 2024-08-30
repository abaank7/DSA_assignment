#include <stdio.h>

int findBig(int arr[], int n) {
    if (n == 1) 
        return arr[0];
    
    return (arr[n - 1] > findBig(arr, n - 1)) ? arr[n - 1] : findBig(arr, n - 1);
}

int main() {
    int arr[] = {10, 15, 25, 35, 90};
    int max = findBig(arr, 5);
    printf("Maximum element: %d\n", max);
    return 0;
}
