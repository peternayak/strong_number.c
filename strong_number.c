#include <stdio.h>

int main() {
    int n, temp, d;
    int sum = 0;
    int f, j;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        d = temp % 10;
        f = 1;

        for (j = 1; j <= d; j++) {
            f = f * j;
        }

        sum = sum + f;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);

    return 0;
}
