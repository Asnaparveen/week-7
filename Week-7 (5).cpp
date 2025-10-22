#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n;

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Number of elements in the array = %d\n", n);
    return 0;
}