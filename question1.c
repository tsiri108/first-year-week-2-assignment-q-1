#include <stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("enter temperature in Fahrenheit :\n");
    scanf("%f",&fahrenheit);
    celsius=((fahrenheit-32)*5)/9;
    printf("---Conversion Result---\n");
    printf("Fahrenheit temperature:%.2f\nF",fahrenheit);
    printf("Celsius temperature:%.2f\nC",celsius);
    return 0;
}   
