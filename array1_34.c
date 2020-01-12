#include<stdio.h>
int alphabet_table(char c){
  if(c=='A')
    return 10;
  else if(c=='B')
    return 11;
  else if(c=='C')
    return 12;
  else if(c=='D')
    return 13;
  else if(c=='E')
    return 14;
  else if(c=='F')
    return 15;
  else if(c=='G')
    return 16;
  else if(c=='H')
    return 17;
  else if(c=='J')
    return 18;
  else if(c=='K')
    return 19;
  else if(c=='L')
    return 20;
  else if(c=='M')
    return 21;
  else if(c=='N')
    return 22;
  else if(c=='P')
    return 23;
  else if(c=='Q')
    return 24;
  else if(c=='R')
    return 25;
  else if(c=='S')
    return 26;
  else if(c=='T')
    return 27;
  else if(c=='U')
    return 28;
  else if(c=='V')
    return 29;
  else if(c=='X')
    return 30;
  else if(c=='Y')
    return 31;
  else if(c=='W')
    return 32;
  else if(c=='Z')
    return 33;
  else if(c=='I')
    return 34;
  else if(c=='O')
    return 35;
}

int main(){
  char c[10];
  int P,P1;
  scanf("%s",c);
  P1=alphabet_table(c[0]);
  P=P1/10+9*(P1%10)+8*(c[1]-48)+7*(c[2]-48)+6*(c[3]-48)+5*(c[4]-48)+4*(c[5]-48)+3*(c[6]-48)+2*(c[7]-48)+(c[8]-48)+(c[9]-48);
  if(P%10==0)
    printf("CORRECT!!!\n");
  else
    printf("WRONG!!!\n");
  return 0;
}
