#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        count = 1;

        if(a[i] == -1)
            continue;

        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                a[j] = -1;   // Mark duplicate as visited
            }
        }

        if(count > 1) {
            printf("%d occurs %d times\n", a[i], count);
        }
    }

    return 0;
}