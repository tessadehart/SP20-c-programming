#include <stdio.h>

//variables
int floor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 15}; //floors
char ding[] = "DING"; //"DING" string
char qstn[] = "What floor would you like to go to? "; //asks for input
char crrf[] = "The current floor is "; //tells the user what floor they are on
char topf[] = " and the top floor is "; //tells the user the max num to enter
char rsp1[] = " is not a valid floor number, please enter a floor between 0 and 15."; //response 1 - incorrect floor num
int fInput = 0;

//methods
int moveFloor(int fInput)
{
    int max = fInput + 1;
    for (int i = 0; i < max; i++)    
    {
        printf("%d ", floor[i]);
    }
    printf("%s\n", ding);
}

int inputFloor()
{
    printf("%s%s%d%s%d\n", qstn, crrf, fInput, topf, 15); //asks for input
    scanf("%d", &fInput); //assigns input to fInput
    
    //checking input
    if (fInput > 15 || fInput < 0)
    {
        printf("%d%s\n", fInput, rsp1);
        inputFloor();
    }
    else
    {
        moveFloor(fInput);
    }
}

//main method
int main() 
{
    inputFloor();
}