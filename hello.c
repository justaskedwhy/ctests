#include<stdio.h>
#include<stdlib.h>
#define frequency_size 30
#define sample_size frequency_size*10
int main(){
    srand(3);
    int s[sample_size] = {0};
    int n[frequency_size] = {0};
    for(int i = 0; i < sample_size;i++){
        s[i] = rand()%frequency_size;
    }
    for(int i = 0; i < sample_size;i++){
        n[s[i]]++;
    }
    printf("%s%10s\n","Number","Frequency");
    for(int i = 0; i < frequency_size ; i++ ){
        printf("%6d ",i);
        for (int j = 0; j < n[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
    
