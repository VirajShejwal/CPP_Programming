/*Accept n no of elements and return the largest element*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 
int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0,iValue = 0;
    bool bRet =false;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(NULL == ptr) 
    {
        printf("Error : Unable to allocate memory\n ");
        return EXIT_FAILURE;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that u want to search :");
    scanf("%d",&iValue);

    bRet = SearchElement(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }

    else
    {
        printf("There is no such element\n");
    }
    
    
    free(ptr);

    return EXIT_SUCCESS;
}