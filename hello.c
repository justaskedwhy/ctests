/*code is completed at 3:56 in CC-1*/
#include<stdio.h>
int main(){
    float perimeter = 0;//perimeter of the shape
    int sides = 0;//no.of sides 
    float lenth = 0;//leng
    printf("Enter the length of the side(0 or -ve num for exit)?");//prompt
    scanf("%f",&lenth);//getting length
    while ((lenth > 0)&&(sides < 11)){//start of the while
        perimeter += lenth;//adding lenght to perimeter
        sides++;//incrementing side by 1
        printf("Enter the length of the side(0 or -ve num for exit)?");
        scanf("%f",&lenth);
        if ((lenth <= 0)&&(sides<3)){//checking if the while loop is terminated before sides = 3
            puts("no.of sides can't be less that 3!!!");
            printf("Enter the length of the side(0 or -ve num for exit)?");
            scanf("%f",&lenth);
            /*the reason for the printf and scanf inside the if is cuz 
            if the user entered 0 or -1 for terminating while loop after the if statement
            the values entered will be checked by while loop anyway so we are
            asking the value of length again*/
        }
    }//end of the while
    printf("The Polygon is a ");
    switch (sides){//switch case start
        case 3:
        puts("Triangle");
        break;
        case 4:
        puts("quadrilateral");
        break;
        case 5:
        puts("Pentagon");
        break;
        case 6:
        puts("Hexagon");
        break;
        case 7:
        puts("Heptagon");
        break;
        case 8:
        puts("Octagon");
        break;
        case 9:
        puts("Nonagon");
        break;
        case 10:
        puts("decagon");
        break;
        default:/*there is no statement in default since the cases for 1 2 and > 10
        are checked in while itself*/
        break;
    }//switch case end
    printf("The Perimeter of the shape is %.2f",perimeter);
}
    
