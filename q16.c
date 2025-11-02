#include <stdio.h>
int main() {
    int arr[100], n, i, pos, num;

    printf("Enter number of elemnts: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter positon to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter number to insert: ");
    scanf("%d", &num);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num; 
    n++; 
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
