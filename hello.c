//program writen at 3:37pm
#include<stdio.h>
int main(void){
    int startf = 0;//start of the fahrenheit scale
    int endf = 0;//end of the fahrenheit scale
    printf("Start?");
    scanf("%d",&startf);//taking value form user (start)
    printf("End?");
    scanf("%d",&endf);//taking value form user (end)
    /*the next puts and printf statements are for the table*/
    puts("+-------------------------------------------------+");
    printf("|%14s    |%11s    |%10s    |\n","Fahrenheit","Celsius","Kelvin");
    puts("+-------------------------------------------------+");
    for(startf;startf <= endf;startf++){
        double celsius = (double) (startf - 32)*5/9;
        printf("|%14d    |%11.2f    |%10.2f    |\n",startf,celsius,celsius + 273.15);
        puts("+-------------------------------------------------+");
    }
}