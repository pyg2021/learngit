#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d=0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {   
                if (i!=j&&i!=k&&j!=k)
                {
                    printf("math:%d,%d,%d\n",i,j,k);
                    d++;
                }
                
                
            }
            
        }
        printf("%d",d);
    }
    
    
    return 0;
}
