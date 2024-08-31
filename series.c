#include <stdlib.h>
#include <stdio.h>

int main()
{    
    int list[5];
    int i;
    int a;
    int b;

    for(a=1;a<=5;a++)
    {
        printf("Enter the number of elements you want to determine: ");
        scanf("%d",&i);
        printf("Now, enter the element: ");
        scanf("%d",&b);
        list[i]=b;
    }

    printf("Enter the sequence number of the element you want to see: \n");
    scanf("%d",&i);
    printf("%d",list[i]);

    return 0;
}