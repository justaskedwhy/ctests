#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void main(void){
    int b[SIZE] = {0};
    srand(SIZE);
    for(int i = 0;i < SIZE;i++){
        b[i] = rand()%SIZE + 1;
        printf("%3d",b[i]);
    }
    for(int i = SIZE;i > 0;i--){
        int temp = 0;
        for(int j = 0;j < i - 1; j++){
            if (b[j] > b[j + 1]){
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    puts("");
    for(int i = 0;i < SIZE;i++){
        printf("%3d",b[i]);
    }
}

