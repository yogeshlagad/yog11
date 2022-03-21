#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
   
    char str1[20];
    char str2[20]="beam";
    printf("\nEnter the string 1 :");
    scanf("%s",str1);
    printf("\n%s %s",str1,str2);

    // //strcpy(str2,str1);
    // strncpy(str2,str1+1,3);//-->to copy 'n' no. of characters from source string into the destination string.
    // printf("\n After copy operation :%s",str2);

    //strcat(str1,str2); //--> to concat two strings
    // strncat(str1,str2+2,3);//--> to concat 'n' no. of characters from source string into the destination string.
    // printf("\n After concat operation :%s",str1);

    //int result=strcmp(str1,str2);
    // int result=strncmp(str1,str2,4);//-->to check the equality of both strings str1 and str2 considering 'n' 
    //                                      // no. of character

    // if(result==0)
    //     printf("\nBoth strings are equal");
    // else if(result > 0)
    // {
    //       printf("\nstr1 is greater than str2");
    // }else
    // {
    //      printf("\nstr1 is smaller than str2");
    // }


   // char *ptr=strchr(str1,98);//--> This will returns you first occurance of given character in given string
    char *ptr= strrchr(str1,'n');//-->--> This will returns you last occurance of given character in given string
    printf("\n%u %u %d",str1,ptr,ptr-str1);
    return 0;
}