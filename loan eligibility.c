// Proff. Omondi Makiri Simion makiri simple program for loan eligibility in a bank
#include<stdio.h>
int main(){
int age,salary;
printf("user to enter there age: ");
scanf("%d", &age);
printf("user to enter there salary: ");
scanf("%d", &salary);

if(age>21&& salary>40000){
   printf("congratulations elligible for loan dear customer");
    }
else{printf("sorry not elligible for loan");


}
return 0;
}
