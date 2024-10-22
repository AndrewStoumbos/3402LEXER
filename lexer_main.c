#include <stdio.h>         
#include <stdlib.h>       
#include "lexer.h"         
#include "file_location.h" 
#include "utilities.h"     

int main(int argc, char **argv) {

    // If no input file, prints out error then exits
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input-file>\n", argv[0]);
        exit(1);
    }


    // Initialize with the input file
    FILE *input_file = fopen(argv[1], "r");

    // If the input file cannot be opened, print an error then exit
    if (!input_file) {
        fprintf(stderr, "Error: Could not open file '%s'\n", argv[1]);
        exit(1);
    }

    // Initialize with  input file
    lexer_init(input_file);

    // Call the lexer output 
    lexer_output();

    // Close the input file
    fclose(input_file);

    return 0;
}

