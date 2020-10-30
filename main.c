#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void print_menu()
{
    printf("\n 1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
}
int take_input()
{
    int input;
    printf("\nEnter your input:");
    scanf("%d",&input);
    return input;
}
void print_circle()
{
    int radius;
    printf("Give the measure of the radius\n");
    scanf("%d",&radius);
    printf("The area of the circle will be %d",radius*radius*22/7);

}
void print_rectangle()
{
    int length,breadth;
    printf("Give the measure of length\n ");
    printf("Give the measure of breadth\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("The area of the square will be %d",length*breadth);
}
void print_square()
{
    int measure;
    printf("Give the measure of the side\n");
    scanf("%d",&measure);
    printf("The area of the square will be %d",measure*measure);

}
int main()
{
    int user_input;
    while(1)
    {
        print_menu();
        user_input=take_input();
        switch(user_input)
        {
        case 1:
            print_circle();
            break;
        case 2:
            print_rectangle();
            break;
        case 3:
            print_square();
            break;
        default:
            printf("\n exiting.....");
            return 0;
        }

    }
    return 1;
}



