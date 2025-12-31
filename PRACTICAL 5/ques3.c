// anshu patel_10243
#include<stdio.h>
int main(){
int a,b,c,max;
printf("Anshuman tiwari\n");
printf("ERP ID-ru-25-10263\n");
printf("enter a number");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
max = (a>b) ? ((a>c) ? a:c): ((b>c) ? b:c);
printf("maximum number is: %d\n", max);
}