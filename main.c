#include <stdio.h>

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("Enter odd number of stars\n");
        scanf("%d",&num);
    }
    if(num % 2 != 0 && num >= 3)
    {
        printf("Entered %d stars\n",num);
        for(int i = 1;i <= num;i++)
        {
            for(int j= 1;j<= ( num - i);j++)
            {
                printf(" ");
            }
            for(int k = 1;k <=((2*i) - i);k++)
            {
            printf("* ");
            }
            printf("\n");
        }
        for(int i = num - 1;i >= 1;i--)
        {
            for(int j = 1;j <= (num - i);j++)
            {
                printf(" ");
            }
            for(int k = 1;k <=((2*i)-i);k++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}
