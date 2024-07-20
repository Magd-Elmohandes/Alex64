#include <stdio.h>
#include<stdlib.h>

void checkTemp(int curTemp)
{
    if(curTemp>22)
    {
        printf("Hot!!\n");
    }
    else
    {
        printf("Cold!!\n");
    }
}