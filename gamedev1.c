#include <stdio.h>

int main(){
   int x , y , radius;
   scanf("%d %d %d" , &x , &y , &radius);
  
  if(x*x + y*y <= radius*radius) printf("true");
  else printf("false");

  return 0;
}