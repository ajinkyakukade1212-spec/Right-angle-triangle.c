
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nRight-Angle Triangle with Numbers:\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

o/p: 
Enter number of rows: 4

Right-Angle Triangle with Numbers:
1
1 2
1 2 3
1 2 3 4
