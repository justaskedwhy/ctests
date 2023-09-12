#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int binarysearch(const int array[],int key,size_t low,size_t high);

void main(void){
    int a[SIZE] = {0};
    for(int i = 0;i < SIZE;i++){
        a[i] = (i + 1)*2;
    }
    printf("%d",binarysearch(a,98,0,SIZE - 1));
}

int binarysearch(const int array[],int value,size_t low,size_t high){
    while (low <= high){
        int middle = (low + high)/2;
        if (array[middle] == value){
            return middle;
        }
        else if (array[middle] > value){
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }
    return -1;
    
}


