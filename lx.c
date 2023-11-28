#include <stdio.h>
#include <string.h>




int main(){
   


   char name1[100];
   char name2[100];
 
   scanf("%s" , name1[100]);
   scanf("%s" , name2[100]);
   int i = 0;
   int alpha =0;
   int n1 = strlen(name1[100]);
   int n2 = strlen(name2[100]);

   if(n1 != n2){
    printf("not an anagram");
   }
   else{

  for (int i = 0 ; i<n1 ; i++)
  {
    for(int m =0 ; m<n2 ; m++){
       if( name1[i]==name2[m]){
         alpha = alpha+1;
       }
    }
  }
  
 if (alpha = n1)
 {
    printf("it is an anagram");
 }
 
 else{
    printf("it is not an anagram");
 }









   }



   
   


   return 0;
}