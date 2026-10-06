#include <stdio.h>

// function to print binary
void printBinary(int n){
    for(int i=7;i>=0;i--){
        printf("%d",(n>>i)&1);
    }
}

// addition function
void addNumbers(int a,int b){
    int sum=a+b;

    printf("\nBinary of A = ");
    printBinary(a);

    printf("\nBinary of B = ");
    printBinary(b);

    printf("\nResult (Addition Decimal) = %d",sum);
    printf("\nResult (Addition Binary)  = ");
    printBinary(sum);
}

// subtraction function
void subtractNumbers(int a,int b){
    int diff=a-b;

    printf("\nBinary of A = ");
    printBinary(a);

    printf("\nBinary of B = ");
    printBinary(b);

    printf("\nResult (Subtraction Decimal) = %d",diff);
    printf("\nResult (Subtraction Binary)  = ");
    printBinary(diff);
}

int main(){
    int a,b,choice;

    printf("Enter first signed number: ");
    scanf("%d",&a);

    printf("Enter second signed number: ");
    scanf("%d",&b);

    printf("\n1. Addition\n2. Subtraction\nChoice: ");
    scanf("%d",&choice);

    if(choice==1)
        addNumbers(a,b);
    else if(choice==2)
        subtractNumbers(a,b);
    else
        printf("Invalid choice");

    return 0;
}