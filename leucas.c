#include <stdio.h>

int leucas(int n) {
    if (n == 1 || n == 2 || n == 3) 
        return 1;
    else 
        return leucas(n - 3) + leucas(n - 2) + leucas(n - 1);
    
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int d = leucas(i);
        printf("%d\t", d);
    }
    return 0;
}
