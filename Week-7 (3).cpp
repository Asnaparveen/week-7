#include <stdio.h>
int main() {
    int n, i;
    float arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    float max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest element = %.2f\n", max);
    return 0;
}