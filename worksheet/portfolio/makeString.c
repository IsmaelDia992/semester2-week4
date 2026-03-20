/*
Name: Ismael Charly 
Student ID: 201952742
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // make a buffer large enough to hold the final string

    char buffer = ""; 

    for (int i = 1; i < argc; i++) {
        
        // Validation
        size_t len = strlen(argv[i]);
        if (len < 1 || len > 4) {
            continue; 
        }

        // Append the argument to the buffer
        strcat(buffer, argv[i]);

        // If not last argument, append a hyphen
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    // Process the command line data 

    printf("%s\n",buffer); 

    return 0;
}