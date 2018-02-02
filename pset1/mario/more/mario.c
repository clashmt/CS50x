#include <stdio.h>
#include <cs50.h>

int height;
int length;
int hash;
int space;
int rows;



int main(void)
{

    do
    {
        printf("Please specify a positive integer for the height of Mario's pyramid between 0 and 23! ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    length = height + 1;
    hash = 1;
    space = length - 2;

    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < space; k++) // print spaces
        {
            printf(" ");
        }
        for (int p = 0; p < hash; p++)  //print hashes
        {
            printf("#");
        }
        printf("  ");
        for (int p = 0; p < hash; p++)  //print hashes
        {
            printf("#");
        }
        space--;
        hash++;
        printf("\n");

    }



}