#include<stdio.h>
int main(int argc, char const *argv[])
{
    char i,j;
    printf("please input first:");
    scanf("%c",&i);
    getchar();
    switch (i)
    {
    case 'm':
        printf("monday");
        break;
    case 't':
        printf("please input second:");
        scanf("%c",&j);
        if (j=='u')
        {
            printf("tuesday\n");
        }
        else
        {
            printf("thursday");
        }
        break;
    default:
        break;
    }
    return 0;
}
