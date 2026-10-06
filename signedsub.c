#include <stdio.h>

int main() {
    int signA, signB;
    int magnitudeA, magnitudeB;
    int resultSign, resultMagnitude;

    printf("Enter sign of first number (0=+,1=-): ");
    scanf("%d",&signA);
    printf("Enter magnitude of first number: ");
    scanf("%d",&magnitudeA);

    printf("Enter sign of second number (0=+,1=-): ");
    scanf("%d",&signB);
    printf("Enter magnitude of second number: ");
    scanf("%d",&magnitudeB);

    signB = (signB==0)?1:0;   // A - B = A + (-B)

    if(signA==signB){
        resultMagnitude=magnitudeA+magnitudeB;
        resultSign=signA;
    }
    else{
        if(magnitudeA>magnitudeB){
            resultMagnitude=magnitudeA-magnitudeB;
            resultSign=signA;
        }
        else if(magnitudeB>magnitudeA){
            resultMagnitude=magnitudeB-magnitudeA;
            resultSign=signB;
        }
        else{
            resultMagnitude=0;
            resultSign=0;
        }
    }

    printf("Result: Sign=%d Magnitude=%d",resultSign,resultMagnitude);
    return 0;
}