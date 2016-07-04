/*
    Bubble Sort
    This application created for demonstrate of bubble sort
    Author : MMENTESOGLU
    Time   : 2016-07-04
    Version: 0.0.3
    - Change function parameter to pointer
*/
#include <stdio.h>
#include <stdlib.h>
#define N_Array 65536
#define DEBUG 0

void printArray(int *array,int len);
void bubbleSort(int *p,int N);
int compare(int *a,int *b);

int arr[10] = {3,6,1,2,3,8,4,1,7,2};
int array[N_Array];

int main()
{
    int i=0;
    for(i = N_Array-1;i>=0;i--)array[N_Array-i] = i;
#if DEBUG
    printArray(array,N_Array);
#endif // DEBUG
    bubbleSort(array,N_Array);
#if DEBUG
    printArray(array,N_Array);
#endif // DEBUG
    return 0;
}

void bubbleSort(int *p,int N){
    int i,j,t;
    for(i = N-1;i>=0;i--){
        for(j=1;j<=i;j++){
            if(compare(&p[j-1],&p[j])){
                t = p[j-1];
                p[j-1] = p[j];
                p[j] = t;
            }
        }
    }
}

int compare(int *a,int *b){
    return (*a>*b);
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
