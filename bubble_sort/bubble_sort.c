//
// Created by HUAsu on 2022/8/22.
//
#include <stdio.h>
#include <assert.h>


inline static void SWAP(int a, int b){

}
/* 是否为类型安全？ */
//#define SWAP(a,b) {a=b-a;b=b-a;a=a+b;}
//#define SWAP(a,b) {a=a^b;b=b^a;a=a^b;}
void bubble_sort(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                SWAP(arr[j], arr[j+1]);
            }
}
int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
unsigned int adc_add (unsigned int  *dat)//排序求平均值
{
    unsigned char j,ii;
    unsigned long int ad_data;
    for (j=0;j<sizeof arr/sizeof *arr-1;j++) //排序
    {
        for (ii=0;ii <sizeof arr/sizeof *arr-1-j ; ii++)
        {
//            WDR();
            if ( dat[ii] > dat[ii+1])
            {
                ad_data = dat[ii];
                dat[ii] = dat[ii+1];
                dat[ii+1]= ad_data;
            }
        }
    }

    return  ad_data;
}


int main() {

    int len = (int) sizeof(arr) / sizeof(*arr);
//    bubble_sort(arr, len);
    adc_add(arr);

    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}