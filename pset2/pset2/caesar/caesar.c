
//libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//variables
int key;


//main
int main(int argc, string argv[])
{
    // verify command line arguments
    if (argc != 2)
    {
        printf("This program requires exactly 1 command line argument: cipher key\n");
        exit(1);
    }


    //change key from string to int
    key = atoi(argv[1]);

    //get plaintext from user

    string plaintext = get_string("Plaintext: ");
    int sl = strlen(plaintext);
    char ciphertext[sl];

//make alphabetical index
    char upperindex[26];
    char lowerindex[26];

    // upper index
    for (int a = 0; a < 26; a++)
        {
            char ul = (char)a + 65;
            upperindex[a] = ul;
            //printf("%c\n", upperindex[a]);
        }
    //lower index
    for (int a = 0; a < 26; a++)
        {
            char ll = (char)a + 97;
            lowerindex[a] = ll;
            //printf("%c\n", lowerindex[a]);
        }


//convert plaintext into alpha
    for (int a = 0; a < strlen(plaintext); a++)

        if (isalpha(plaintext[a]))
        {
            if (isupper(plaintext[a]))
            {
               char x = ((((plaintext[a] - 65) + key) % 26) + 65);
               //printf("%c\n", x);
               ciphertext[a] = x;
            }
            if (islower(plaintext[a]))
            {
                char x = ((((plaintext[a] - 97) + key) % 26) + 97);
                //printf("%c\n", x);
                ciphertext[a]= x;
            }
        }
        else
        {
           ciphertext[a] = plaintext[a];
        }

//do cipher
//convert back
//print

    printf("ciphertext: ");
    for (int a = 0; a < strlen(ciphertext); a++)
        {
        printf("%c", ciphertext[a]);
        }
    printf("\n");





}