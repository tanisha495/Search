#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int linearSearchRec(int arr[], int n, int key, int index) {
    if (index >= n) return -1;
    if (arr[index] == key) return index;
    return linearSearchRec(arr, n, key, index + 1);
}


int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;

    printf("Non-Recursive Linear Search: ");
    int res1 = linearSearch(arr, n, key);
    if (res1 != -1) printf("Found at index %d\n", res1);
    else printf("Not found\n");

    printf("Recursive Linear Search: ");
    int res2 = linearSearchRec(arr, n, key, 0);
    if (res2 != -1) printf("Found at index %d\n", res2);
    else printf("Not found\n");

    return 0;
}
