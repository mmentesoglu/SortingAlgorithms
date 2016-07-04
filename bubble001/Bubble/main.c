/*
    Bubble Sort
    This application created for demonstrate of bubble sort
    Author : MMENTESOGLU
    Time   : 2016-07-04
    Version: 0.0.1
*/
#include <stdio.h>
#include <stdlib.h>
#define N_Array 65536
#define DEBUG 0

void printArray(int *array,int len);
void bubbleSort(int a[],int N);


int arr[10] = {3,6,1,2,3,8,4,1,7,2};
int dizi[N_Array];

int main()
{
    int i=0;
    for(i = N_Array-1;i>=0;i--)dizi[N_Array-i] = i;
#if DEBUG
    printArray(dizi,N_Array);
#endif // DEBUG
    bubbleSort(dizi,N_Array);
#if DEBUG
    printArray(dizi,N_Array);
#endif // DEBUG
    return 0;
}

void bubbleSort(int a[],int N){
    int i,j,t;
    for(i = N-1;i>=0;i--){
        for(j=1;j<=i;j++){
            if(a[j-1]>a[j]){
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
}

void printArray(int *array,int len){
    int i = 0;
    putchar('\n');
    putchar('[');
    for(i=0;i<len;i++){
        printf("%3d",array[i]);
        if(i<len-1)putchar(',');
    }
    putchar(']');
    putchar('\n');
}
