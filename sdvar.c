#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0, sum_sq = 0.0, mean, variance, sd;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);
        sum += x;
        sum_sq += x * x;
    }

    mean = sum / n;
    variance = (sum_sq - (sum * sum) / n) / (n - 1);
    sd = sqrt(variance);

    printf("Mean: %.3lf\n", mean);
    printf("Variance: %.3lf\n", variance);
    printf("Standard Deviation: %.3lf\n", sd);

    return 0;
}
