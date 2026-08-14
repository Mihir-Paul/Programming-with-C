#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy arr1 into arr2
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Copied array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}