#include<stdio.h>

int main(){

    int a =5;
    //int c = 1;
    int *d = &a;
    //int *x = &a+1;
    //*x=1;

    printf("%d\n" ,d);
    printf("%d\n" ,d+1);
    printf("%d\n" ,d[0]);
    printf("%d\n" ,d[2]);
    printf("%d\n" ,*(d+2));

    return 0;
}
