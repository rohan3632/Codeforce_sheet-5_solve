#include <stdio.h>

int is_binary_palindrome(int n) {
    int bits[40], len = 0;

    while (n > 0) {
        bits[len++] = n % 2;
        n /= 2;
    }

    for (int i = 0; i < len / 2; i++) {
        if (bits[i] != bits[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int is_wonderful(int n) {
    if (n % 2 == 0) return 0;
    return is_binary_palindrome(n);
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_wonderful(n)) printf("YES");
    else printf("NO");

    return 0;
}
