#include <stdio.h>

void printBinary(int n, int bits){
    for(int i=bits-1;i>=0;i--)
        printf("%d",(n>>i)&1);
}

int main(){
    int m,q;
    int A=0;
    int Q1=0;
    int count=4;   // number of bits (can change)

    printf("Enter multiplicand: ");
    scanf("%d",&m);

    printf("Enter multiplier: ");
    scanf("%d",&q);

    int M=m;
    int Q=q;

    printf("\nInitial Values:\n");
    printf("A="); printBinary(A,4);
    printf(" Q="); printBinary(Q,4);
    printf(" Q-1=%d\n",Q1);

    while(count--){
        int q0 = Q & 1;

        if(q0==1 && Q1==0){
            A = A - M;
        }
        else if(q0==0 && Q1==1){
            A = A + M;
        }

        // arithmetic right shift
        Q1 = Q & 1;
        Q = (Q>>1) | ((A&1)<<3);
        A = A>>1;

        printf("\nStep:\n");
        printf("A="); printBinary(A,4);
        printf(" Q="); printBinary(Q,4);
        printf(" Q-1=%d\n",Q1);
    }

    int result = (A<<4) | (Q & 0xF);

    printf("\nResult (Decimal) = %d\n", m*q);
    printf("Result (Binary)  = ");
    printBinary(result,8);

    return 0;
}