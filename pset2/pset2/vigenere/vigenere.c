
//libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//variables
bool alpha = true;
int alphakey;

//main
int main(int argc, string argv[])
{
    // verify command line arguments
    if (argc != 2)
    {
        printf("This program requires exactly 1 command line argument: an all alphabetical cipher key\n");
        exit(1);
    }

    int keylen = strlen(argv[1]);
    string key = argv[1];
    for (int a = 0; a < keylen; a++)
        {
            if (isalpha(key[a]) == false)
                {
                    alpha = false;
                    break;
                }
        }

    if (alpha == false)
    {
        printf("This program requires exactly 1 command line argument: an all alphabetical cipher key\n");
        exit(1);
    }


    //change key from string to int
    //key = atoi(argv[1]);

    //get plaintext from user

    string plaintext = get_string("Plaintext: ");
    int sl = strlen(plaintext);
    //printf("%i\n", sl);
    char ciphertext[sl + 1];
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



// have second variable to count for key index (int k, only ++ in upper/lower loops)
// mod key value (key[a] % strlen(key)
    for (int a = 0, c = 0; a < strlen(plaintext); a++)

        if (isalpha(plaintext[a]))
        {
            //make alphakey based on case
            if (isupper(key[c % keylen]))
                {
                    alphakey = (key[c % keylen] - 65);
                }
            if  (islower(key[c % keylen]))
                {
                    alphakey = (key[c % keylen] - 97);
                }
            // convert plaintext to cipher
            if (isupper(plaintext[a]))
            {
                c++;
                char x = ((((plaintext[a] - 65) + alphakey) % 26) + 65);
                //printf("%c\n", x);
                ciphertext[a] = x;

            }
            if (islower(plaintext[a]))
            {
                c++;
                char x = ((((plaintext[a] - 97) + alphakey) % 26) + 97);
                //printf("%c\n", x);
                ciphertext[a]= x;

            }
        }
        else
        {
           ciphertext[a] = plaintext[a];
        }

//print

    printf("ciphertext: ");
    for (int a = 0; a < strlen(ciphertext); a++)
        {
        printf("%c", ciphertext[a]);
        }
    printf("\n");





}