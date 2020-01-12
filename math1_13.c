#include<stdio.h>
int main(){
  int start_hr,start_min;
  int end_hr,end_min;
  int total_hr,total_min;
  scanf("%d %d",&start_hr,&start_min);
  scanf("%d %d",&end_hr,&end_min);

  //calculate the total time
  if(end_min>=start_min){
    total_hr=end_hr-start_hr;
    total_min=end_min-start_min;
  }
  else{
    total_hr=end_hr-1-start_hr;
    total_min=60-start_min+end_min;
  }

  //calculate the parking fee
  if(total_hr<2 || total_hr==2 && total_min==0){
    if(total_min<=30)
      printf("%d\n",total_hr*60);
    else
      printf("%d\n",total_hr*60+30);
  }
  else if(total_hr>2 && total_hr<4){
    if(total_min<=30)
      printf("%d\n",120+(total_hr-2)*80);
    else
      printf("%d\n",120+(total_hr-2)*80+40);
  }
  else{
    if(total_min<=30)
      printf("%d\n",280+(total_hr-4)*120);
    else
      printf("%d\n",280+(total_hr-4)*120+60);
  }
  return 0;
}
