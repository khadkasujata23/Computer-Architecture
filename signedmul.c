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

    resultSign = (signA==signB)?0:1;
    resultMagnitude = magnitudeA*magnitudeB;

    if(resultMagnitude==0)
        resultSign=0;

    printf("Result: Sign=%d Magnitude=%d",resultSign,resultMagnitude);
    return 0;
}