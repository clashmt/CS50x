//libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define _XOPEN_SOURCE
#include <unistd.h>


int main(int argc, string argv[])
{
    // checks argument count and length of input is <= 5
    int pwlength = strlen(argv[1]);
    if (argc != 2)
    {
        printf("This password is too long bro\n");
        exit(1);
    }

    // take first 2 characters as salt

    string fullhash = argv[argc - 1];
    printf("%s %i\n", fullhash, pwlength);
    char salt[2];

    for (int a = 0; a < 2; a++)
        {
            salt[a] = fullhash[a];
            printf("%c\n", salt[a]);
        }




    // build dictionary of all possible real passwords



    //hash each password in the dictionary


    //compare hashedpassword to realpassword

    //print realpassword






}