/* File: calculator.c */
#include <stdio.h>

int main() {

    float num1;
    float num2;
    float ans;

    printf("please select a number: ");
	scanf("%f", &num1);

    printf("\nplease select another number: ");
	scanf("%f", &num2);

    ans = num1 + num2;

    printf("\nthe sum of those numbers is: %f \n", ans);

    return 0;
}