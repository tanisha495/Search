#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int binarySearchRec(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return binarySearchRec(arr, mid + 1, high, key);
    else return binarySearchRec(arr, low, mid - 1, key);
}

int main(){

    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;

    printf("Non-Recursive Binary Search: ");
    int res3 = binarySearch(arr, n, key);
    if (res3 != -1) printf("Found at index %d\n", res3);
    else printf("Not found\n");

    printf("Recursive Binary Search: ");
    int res4 = binarySearchRec(arr, 0, n - 1, key);
    if (res4 != -1) printf("Found at index %d\n", res4);
    else printf("Not found\n");

    return 0;
}
