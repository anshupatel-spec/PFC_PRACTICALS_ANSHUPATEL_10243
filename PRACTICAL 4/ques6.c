// anshu patel_10243
#include <stdio.h>
int main()
{
    //run time error : segmentation fault
    printf("ANSHUMAN TIWARI\n");
    printf("ERP ID-RU-25-10263\n");
    int arr[5]={1,2,3,4,5};
    arr[6]=10;
    printf("%d",arr[5]);
    return 0;
    
}