
#include <stdio.h>

int main() {
    int n, i, s, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nDiamond Shape with Numbers:\n");

    // Upper half
    for (i = 1; i <= n; i++) {
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

O/p:
Enter number of rows: 4

Diamond Shape with Numbers:
   1
  1 2
 1 2 3
1 2 3 4
 1 2 3
  1 2
   1
