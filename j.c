#include <stdio.h>

double average(int n, double arr[]) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    double arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double result = average(n, arr);
    printf("%.6f\n", result);

    return 0;
}
