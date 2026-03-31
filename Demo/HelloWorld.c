#include <stdio.h>

// This prints the factorial of the number given by the user

int main(){
    printf("Hello World");
    char prompt[] = "\nEnter your number:";
    printf("%s", prompt);
    
    int i;
    int userVal;
    int factorial=1;

    scanf("%d",&userVal);

    if(userVal<1)
        factorial = 0;
    else{
        for(int i=userVal;i>0;i--){
            factorial = factorial * i;
        }
    } 

    printf("\nThe factorial of your input was: %d\n", factorial);

    return 0;

}