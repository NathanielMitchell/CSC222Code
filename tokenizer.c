/* 
    Name: Nathaniel Mitchell
    Project: Tokenizer - takes in input and tokenizes it
    Date: 1/16/2023
*/

#include <stdio.h>
#include <string.h>

int main() {

    // A character array for input
    // and a string for tokenization respectfully
    char input[256];
    char* token;
    int tokenCounter;

    // Setting up an infinite loop
    while (1) {

        // denoting the input line as $
        printf("$ ");

        // using fgets to store using input from standard input as a string
        fgets(input, 256, stdin);

        // fgets keeps the new line character, so it is helpful to remove it
        // we can do so by looping through the input string and looking for a new line character
        // and replacing it with a null character
        for (int i = 0; i < sizeof(input); i++) {
            if (input[i] == '\n')
                input[i] = '\0';
        }

        // checking for the exit condition seeing if the gathered input is the same as "exit"
        // element by element
        // if they are the same, the whole code returns
        if (strcmp(input, "exit") == 0)
            return 0;

        // next we display the input and the tokenized input
        printf("Line read: %s\n", input);
        printf("Token(s):\n");

        // error popped up if you pressed enter with nothing typed in the input
        // to catch this, there is a case for in input is just a null charatcer
        if (strcmp(input, "\0") == 0){

            tokenCounter = 0;

        } else {

            // strtok is looking for a space to deliminate
            // we print the first token and begin counting the number of tokens
            token = strtok(input, " ");
            printf(" %s\n", token);
            tokenCounter = 1;

            // using a while loop, we can flip through the input
            // still separating tokens with a space
            // every newly printed token also increases the token counter
            // when strtok finally returns NULL, we stop looping
            while ((token = strtok(NULL, " ")) != NULL) {
                printf(" %s\n", token);
                tokenCounter++;
            }
        }

        // finally we print the number of tokens (two new line characters are used to create
        // space between the end of this output and the new input)
        printf("%d token(s) read\n\n", tokenCounter);

    }
}