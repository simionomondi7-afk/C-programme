/*
Name:simion Makiri Omondi
REG NO. PA106/G/28766/25
DESCRIPTION: Prompting users to enter their age and general annual income for loan eligibility*/
#include <stdio.h>//preprocesor directive
int main(){//main function
    int age,income;//declaring variables

    //prompting the user to enter their age
    printf("enter your age: ");
    scanf("%d",&age);

     //prompting the user to enter the income
    printf("enter your income: ");
    scanf("%d",&income);

      //making conditions to be met
    if(age>=21,income>=21000){
            printf("congragulations you are eligible for the loan");

    } else{
        printf("sorry not eligible for loan");

    }
    return 0;
}



