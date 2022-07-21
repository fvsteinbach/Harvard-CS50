#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        //prints an error message and asks for the key
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    //goes through the letters of the text inputed and checks whether is UPPER or lower case and changes the output accordingly
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            //resets the ASCII char to 0 and then goes back to 65, just in case the user inputs "Z" so that it prints A and not a symbol.
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }

        else if (islower(plaintext[j]))
        {
            //resets the ASCII char to 0 and then goes back to 65, just in case the user inputs "z" so that it prints a and not a symbol.
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }

        else
        {
            //in case of a symbol or number, it just prints out the same.
            printf("%c", plaintext[j]);
        }

    }
    //prints a new line
    printf("\n");

}