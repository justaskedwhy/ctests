#include<stdio.h>
#include<math.h>
int main(){
    int num = 0;
    int sums = 0;
    printf("enter?");
    scanf("%d",&num);
    int n = 10;
    for (int i = 0;n != 0;i++){
        n = (num% (int) pow(10,i+1))/pow(10,i);
        sums += n;
    }
    printf("%d",sums);
}
