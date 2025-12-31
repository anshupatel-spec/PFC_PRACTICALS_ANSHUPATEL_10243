// anshu patel_10243
#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    int sum;
    printf("anshuman tiwari\n");
    printf("ERP ID-ru-25-18263\n");
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    printf("enter\n");
    scanf(" %c",&choice);
    printf("%c", choice);
    switch(choice)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("invalid");
    }
    return 0;
}