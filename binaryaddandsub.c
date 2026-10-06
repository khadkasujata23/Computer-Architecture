#include <stdio.h>

int isBinary(int n){
    while(n){
        int r=n%10;
        if(r!=0 && r!=1) return 0;
        n/=10;
    }
    return 1;
}

void binaryAddition(){
    int num1,num2,sum=0,carry=0,place=1;

    printf("Enter first binary number: ");
    scanf("%d",&num1);
    printf("Enter second binary number: ");
    scanf("%d",&num2);

    if(!isBinary(num1)||!isBinary(num2)){
        printf("Invalid binary number!\n");
        return;
    }

    int t1=num1,t2=num2;

    while(num1>0||num2>0||carry){
        int r1=num1%10;
        int r2=num2%10;

        int s=r1+r2+carry;
        sum+=(s%2)*place;
        carry=s/2;

        place*=10;
        num1/=10;
        num2/=10;
    }

    printf("Sum = %d\n",sum);
}

void binarySubtraction(){
    int num1,num2;
    printf("Enter first binary number: ");
    scanf("%d",&num1);
    printf("Enter second binary number: ");
    scanf("%d",&num2);

    int a=num1,b=num2;

    int result=0,borrow=0,place=1;

    while(a>0||b>0){
        int r1=a%10;
        int r2=b%10;

        r1=r1-borrow;

        if(r1<r2){
            r1+=2;
            borrow=1;
        } else {
            borrow=0;
        }

        int sub=r1-r2;
        result+=sub*place;

        place*=10;
        a/=10;
        b/=10;
    }

    if(borrow)
        printf("Result is negative (not supported in this version)\n");
    else
        printf("Difference = %d\n",result);
} 

int main(){
    int choice;

    do{
        printf("\n1. Binary Addition\n");
        printf("2. Binary Subtraction\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: binaryAddition(); break;
            case 2: binarySubtraction(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    }while(choice!=3);

    return 0;
}