#include <stdio.h>

int main() {
    
    char name[100];
    
    char age[100];
    
    printf("Enter your first name :");
    
    gets( name );
    
    printf("\nEnter your age in a sentence : ");
    
    gets( age );
    
    // the output
    // for name
    printf("\nYour first name is: ");
    puts( name );
    
    // for age
    printf("\nYou are: ");
    puts( age );
    
    return 0;
}