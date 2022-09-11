#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int N;
    printf("N\n:");
    scanf("%d",&N);
    int A[N][N],sum;
    sum=0;
    printf("A:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    for (int k = 0; k < N; k++)
    {
        sum+=A[k][k];
    }
    printf("sum:%d",sum);
    
    
    return 0;
}

