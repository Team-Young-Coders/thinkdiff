/*
 * author: Mahmud Ahsan
 * https://github.com/mahmudahsan
 * blog: http://thinkdiff.net
 * http://banglaprogramming.com
 * License: MIT License
 */
 
/* 
 * Conditional Operator / Ternary operator
 * condition ? expression1 : expression2
 */

#include <stdio.h>

int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    _Bool isEven = number % 2 == 0 ? 1 : 0;
    /*
      #include <stdbool.h>
      bool isEven = number % 2 == 0 ? true : false; 
    */
    
    if (isEven){
        printf("%d is an even number\n", number);
    }
    else {
        printf("%d is a odd number\n", number);
    }
        
    return 0;
}