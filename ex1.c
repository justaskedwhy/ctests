#include<stdio.h>
int main(){
    short passed = 0;
    short failed = 0;
    int students = 0;
    while (students < 10){
        printf("%s","enter result:");
        short pf = 0;
        scanf_s("%hu",&pf);//you need to use the sepcific format string for the data you mentioned or it will change the other exsisting datas
        if (pf == 1){
            passed += 1;
            students = students + 1;
        }
        else if (pf == 2){
            failed += 1;
            students = students + 1;
        }
        else{
            printf("1 for pass 2 for fail\n");
        }
    }
    printf("Students passesd:%d failed:%d\n",passed,failed);
    if (passed >= 8){
        printf("bonus for the teacher\n");
    }
}
