#include <stdio.h>

long long power(long long x, int p) {
    long long r = 1;
    for (int i = 0; i < p; i++) {
        r *= x;
    }
    return r;
}

int main() {
    long long x, n;
    scanf("%lld %lld", &x, &n);

    long long s = power(x, 0) - 1;

    for (int i = 2; i <= n; i += 2) {
        s += power(x, i);
    }

    printf("%lld\n", s);
    return 0;
}
