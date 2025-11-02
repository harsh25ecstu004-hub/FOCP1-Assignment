#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n == 1 || arr[0] >= arr[1]) {
        printf("Peak element is %d\n", arr[0]);
        return 0;
    }
    for (i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d\n", arr[i]);// Input array size
            return 0;
        }
    }
    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is %d\n", arr[n - 1]);
        return 0;
    }

    return 0;
}
