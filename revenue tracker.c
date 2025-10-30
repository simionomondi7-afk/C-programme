/* NAME: OMONDI MAKIRI SIMION
   REG NO. PA106/G/28766/25
   DESCRIPTION:C ARRAY PROGRAM THAT TAKES THE SUM OS SEVEN DAY REVENUE AND AVARAGE */

   #include<stdio.h>
   int main(){

      int i;
      int sum;
      int avarage;



      int revenue[7] ;{
      printf("enter revenue for monday:\t ");
      scanf("%d", &revenue[0]);
      printf("enter revenue for tuesday:\t ");
      scanf("%d", &revenue[1]);
      printf("enter revenue for wednesday:\t ");
      scanf("%d", &revenue[2]);
      printf("enter revenue for thursday:\t ");
      scanf("%d", &revenue[3]);
      printf("enter revenue for friday:\t ");
      scanf("%d", &revenue[4]);
      printf("enter revenue for saturday:\t ");
      scanf("%d", &revenue[5]);
      printf("enter revenue for sunday:\t ");
      scanf("%d", &revenue[6]);


      for ( i=0;i<7; i++ ){
        sum= sum + revenue[i];}
        printf("the total weekly revenue is %d\n",sum);
        avarage = sum/7;
        printf("the avarage daily revenue is %d",avarage);
      }



return 0;












   }
