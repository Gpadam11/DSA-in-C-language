// Given an array “container[]” and integer “hunt”. WAP to find whether “hunt” is present in container[] or not. If present, then triple the value of “hunt” and search again. Repeat these steps until “hunt” is not found. Finally return the value of “hunt”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int container[] = {1, 2, 3,4,5,6};
    int hunt;
    printf("Enter the value of hunt");
    scanf("%d", &hunt);
    int i, a;
    int flag = 0;
    for (i = 0; i < 6; i++)
    {
        if (hunt == container[i])
        {
            hunt = hunt * 3;
            a = hunt;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("The value of hunt is %d", a);
    }
    else
    {
        printf("Element not found");
    }
}