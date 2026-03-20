/*
Name: Ismael Charly 
Student ID: 201952742
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // IMPORTANT: Change 'char buffer' to 'char buffer'
    // This creates an array (a string) instead of a single character.
    char buffer[100] = "";

    // We start the loop at 1 to skip the program name (./makeString)
    for (int i = 1; i < argc; i++) {
        
        // Requirements check: limit to 10 args and 1-4 chars each
        if (i <= 10 && strlen(argv[i]) >= 1 && strlen(argv[i]) <= 4) {
            
            strcat(buffer, argv[i]);

            // Add a hyphen ONLY if it's not the last argument AND we are under the limit
            if (i < argc - 1 && i < 10) {
                strcat(buffer, "-");
            }
        }
    }

    // Process the command-line data using appropriate string functions

    printf("%s\n", buffer); // use only this single print statement 

    return 0;
}