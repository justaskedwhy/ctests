//program writen at 3:37pm
#include<stdio.h>
int main(void){
    int a0 = 0;
    unsigned long long int factorial = 1;
    printf("Number?");
    scanf("%d",&a0);
    while (a0 > 0){
        factorial *= a0--;
    }
    printf("%llu",factorial);
    return 0;
}
