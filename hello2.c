#include<stdio.h>
int a[2];
void reduce(int a[]);
void main(){
    printf("enter a:");
    scanf("%d",&a[0]);
    printf("enter b:");
    scanf("%d",&a[1]);
    reduce(a);
    printf("%d/%d",a[0],a[1]);
}
void reduce(int a[]){
    if (a[0]%a[1] == 0){
        a[0] = a[0]/a[1];
        a[1] = 1;
    }
    else{
        int k = a[0]/a[1];
        int hold  = a[0];
        a[0] = a[1];
        a[1] = hold - k*a[1];
        reduce(a);
        hold = a[0];
        a[0] = a[1];
        a[1] = hold;
        a[0] = k*a[1] + a[0];
    }
}