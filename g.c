#include <stdio.h>

void find_min_max(int a[], int n, int *mn, int *mx) {
    *mn = a[0];
    *mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < *mn) *mn = a[i];
        if (a[i] > *mx) *mx = a[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mn, mx;
    find_min_max(a, n, &mn, &mx);

    printf("%d %d\n", mn, mx);

    return 0;
}
