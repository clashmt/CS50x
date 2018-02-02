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
        height = get_int();
    }
    while (height < 1 || height > 23);

    length = height + 1;
    hash = 2;
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
        space--;
        hash++;
        printf("\n");

    }



}
