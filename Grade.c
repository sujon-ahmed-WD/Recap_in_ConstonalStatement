#include <stdio.h>
int main()
{
    int marks;
    // printf("Enter ther  marks");
    scanf("%d", &marks);
    if (marks >= 33 && marks <= 100) // 33 thka boro and 100  ar moddda asa nee 
    {
        printf("You have a passed.\n");
        if (marks >= 80 && marks <= 100)
        {
            printf("A+\n");
        }
        else if (marks >= 70 && marks <= 79)
        {
            printf("A\n");
        }
        else if (marks >= 60 && marks <= 69)
        {
            printf("A-\n");
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("B\n");
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("C\n");
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("D\n");
        }
    }
 else if (marks >= 0 && marks <= 32)
    {
       printf("F\n");
       printf("You aer the Failed .Try agin\n") ;

    }
        else if (marks < 0 || marks > 100)
    {
        printf("Invalid Number:");
    }
     return 0;
   
}
    // {
         
    
    //     // if (1)
    //     // {
    //     //     printf("You have Faill\n");
    //     // }
    //     printf("F\n");
    //     printf("You aer the Failed.Try agin\n");
    
    // }