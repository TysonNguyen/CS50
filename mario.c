#include <cs50.h>
#include <stdio.h>

// For each row, print left pyramid with spaces and hashes. Print gap with 2 spaces. Then print right pyramid.
// For the left pyramid, the first row = 1 #, 7 spaces, second row = 2 #, 6 spaces, third row = 3 #, 5 spaces.

int main(void)
{
    int height;
    int hash;
    int line;
    int space;
 
    // Ask the user to decide how tall the pyramids should be by asking for a positive integer between 1 and 8.
    do    
    {
        height = get_int("Please input a height between 1 and 8: ");
    }
    while(height < 1 || height > 8);
 
    // Creating the left pyramid
   
    for(line = 0; line < height; line++) 
        // Inside in each line, add hashes and spaces.
    {
        for(space = 0; space < height - line - 1; space++)
            printf(" ");  
        for(hash = 0; hash < line + 1 ; hash++) 
            printf("#");       
        printf("\n");
    }    
}

   
