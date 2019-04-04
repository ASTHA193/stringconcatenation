#include<stdio.h>
void main()
{
    char arr5[10],arr2[5],arr3[5],*ptr1,*ptr2,*ptr3;
    int i;
    printf("\n enter the a string 1=");
    gets(arr3);
     printf("\n enter the a string 2=");
    gets(arr2);
    //printf("\n the concatenated elements of array3 = %d" );
    ptr1=arr3;
    ptr2=arr2;
    ptr3=arr5;
    printf("s=%s",arr3);
    printf("s=%s",arr2);
    for(i=0;i<10;i++)
   {
       if(i<5)
       {
           *ptr3=*ptr1;
           ptr1++;
       }
       else
        {
            *ptr3=*ptr2;
            ptr2++;
        }
        ptr3++;
   }
    *ptr3='\0';
    i=0;
    printf(" element of array3%s",ptr3);

}
