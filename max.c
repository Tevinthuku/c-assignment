#include <stdio.h>

/*function declaration*/
int max(int num1, int num2);

int main() {
    /* local variable definintion*/
    int a = 100;
    int b = 200;
    int ret;
    
    /* calling a function to get max value*/
    ret = max(a, b);
    
    printf( "Max value is : %d\n", ret);
    
    return 0;
}

/* function returning the max btwn two numbers*/

int max(int num1, int num2) {
    
    /* the local variable declaration */
    
    int result;
    
    if (num1 > num2)
        result = num1;
    
    else
        result = num2;
        
    return result;
}