/*
NAME:Mkiri Omondi Simion
Reg No.PA106/G/28766/25
Description;prompting user to enter radius and height
*/
#include <stdio.h> //preprocessor directives
int main(){

   double radius, height;//variable declaration

   // prompting user to enter radius
    printf("enter radius of cylinder:");
    scanf("%lf",&radius);

    //prompting user to enter height
    printf("enter the height of the cylinder: ");
    scanf("%lf", &height);

   double pie = 3.14285714286;

   double volume = pie*radius*radius*height ;
   double surfacearea = 2*pie*radius*radius + 2*pie*radius*height;

    printf("the volume of the cylinder is %.2lf \n",volume);
    printf("surfacearea of the cylinder is %.4lf",surfacearea);

    }

