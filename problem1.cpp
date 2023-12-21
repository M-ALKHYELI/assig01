#include "tinyexpr.h"
#include <stdio.h>
#include <string>

/* RUN CMDS
    cd /project
    make clean; make
    ./problem1
*/

int main(int argc, char *argv[])
{
        
    char userChoice;
    
    do {
        
        
        char input[256];
        printf("Enter the expression: ");
        scanf("%s", input);

        /*
            Test Input: (3 * 5^2 / 15) - (5 - 2^2)
            Test Output: 4
            
            const char *c = "(3*5^2/15)-(5-2^2)";        
            double result = te_interp(c, 0);
        */        

        //solve the problem
        double result = te_interp(input, 0);

        //print the result
        printf("The answer to this problem is %f\n", result);  


        printf("Do you want to solve another problem? (Y/N): ");
        scanf(" %c", &userChoice);     
    } while (std::toupper(userChoice) == 'Y');

    printf("Thank you for using this calculator!\n");
    
    return 0;
}
