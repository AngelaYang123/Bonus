#include<stdio.h>
int main(){
 int x,y;
 while(scanf("%d\n",&x)==1 && scanf("%d",&y)==1){
   if(x<=100){
     if(y<=100)
       printf("inside\n");
     else
       printf("outside\n");
   }
   else
     printf("outside\n");
 }
 return 0;
}
