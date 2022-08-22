//
// Created by HUAsu on 2022/8/22.
//
#include <stdio.h>
#define SWAP(a,b) {a=b-a;b=b-a;a=a+b;}
//#define SWAP(a,b) {a=a^b;b=b^a;a=a^b;}
void bubble_sort(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                SWAP(arr[j], arr[j+1]);
            }
}
int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}