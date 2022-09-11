#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N[]={1,2,3,4,5,6,7,8,9,10};
    // printf("%d\n",N[1]);
    for (int  i = 0; i < 10; i++)
    {   
        int max=0;
        for (int j =i+1; j < 10; j++)
        {
            int t;
            if (N[i]<N[j])
            {
                t=N[i];
                N[i]=N[j];
                N[j]=t;
                // printf("%d\n",N[j]);
            }
        }
        // printf("%d",max);
        
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d\n",N[k]);
    }
    
    
    return 0;
}
