// C-02 : Suppose you are in a que in front of an elevator and you are "n'th" person , if elevator can accommodate 8 person then in which turn you can avail the elevator. //

#include <stdio.h>
int main(){

int x,y ;
    printf("Enter Serial Number: ");
    scanf("%d", &x);

     y = ceil(x/8.0);

     printf("Your Turn: %dth\n",y );



return 0;
}
