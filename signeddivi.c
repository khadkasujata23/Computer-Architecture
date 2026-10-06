#include <stdio.h>

int main() {
    int signA, signB;
    int magnitudeA, magnitudeB;
    int resultSign, resultMagnitude;

    printf("Enter sign of numerator (0=+,1=-): ");
    scanf("%d",&signA);
    printf("Enter magnitude of numerator: ");
    scanf("%d",&magnitudeA);

    printf("Enter sign of denominator (0=+,1=-): ");
    scanf("%d",&signB);
    printf("Enter magnitude of denominator: ");
    scanf("%d",&magnitudeB);

    if(magnitudeB==0){
        printf("Error: Division by zero");
        return 0;
    }

    resultSign = (signA==signB)?0:1;
    resultMagnitude = magnitudeA/magnitudeB;

    if(resultMagnitude==0)
        resultSign=0;

    printf("Result: Sign=%d Magnitude=%d",resultSign,resultMagnitude);
    return 0;
}