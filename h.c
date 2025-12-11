#include <stdio.h>

void print_n_times(int n, char c) {
    for(int i = 0; i < n; i++) {
        printf("%c", c);
        if(i < n - 1) printf(" ");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        char c;
        scanf("%d %c", &n, &c);

        print_n_times(n, c);
        printf("\n");
    }

    return 0;
}
