#include <stdio.h>

int main() {
    int n, f;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    f = 5 * n * n + 8;

    printf("f(n) = %d\n", f);

    return 0;
}