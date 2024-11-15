//  Input time in hour and minute and display angle found by a analogue clock two hand. //
#include <stdio.h>
int main () {
    int x , y , d , n , m;
    printf("Enter time in hour: ");
    scanf("%d",&x);
    printf("Enter time in minute: ");
    scanf("%d",&y);

d = x*30+(y*0.5);
n=y*6;

if ( d > n )
{ m = d - n;}
else { m = n -d ;}


printf("The angle for Hour is : %d\n",d);
printf("The angle for minute is : %d\n",n);
printf("Difference between two angle: %d\n",m);


    return 0;
}
