#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int n) {
    int min=arr[0], max=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Min = %d, Max = %d\n", min, max);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, n);

    free(arr);  // memory free karna zaroori hai
    return 0;
}
