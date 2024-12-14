// C-03 : Input distance travel in(fractional kilometre) and waiting time (min) in a taxi if fare per kilometre is 25 taka (rounded kilometre) and waiting charge is 5 Taka (per min) then display bill . //

#include <stdio.h>
int main() {
float x,y,z;
int bill ;
    printf("Enter Fraction Km: ");
    scanf("%f", &x);

    printf("Enter Waiting Timen in minute: ");
    scanf("%f", &y);
z = ceil (x);
 bill = (z * 25 ) + (y * 5);
printf("Total Bill is: %d", bill);
return 0;
}
