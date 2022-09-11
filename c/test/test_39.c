#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int A[]={1,2,3,4,5,6,17,28,39,110,111,112,183};
    int t,len;
    len=0;
    while (A[len]!=0)
    {
        len++;
        // printf("A[len]:%d\n",A[len]);
    }
    printf("len:%d\n",len);
    int a=20;
    int B[len+1];
    for (int i = 0; i < len; i++)
    {
        if (a<A[i])
        {
            B[i]=a;
            printf("%d\n",B[i]);
            for (int j = i+1; j < len+1; j++)
            {
                B[j]=A[j-1];
            }
            break;
        }
        B[i]=A[i];
        
    }
    for (int i = 0; i < len+1; i++)
    {
        printf("%d  ",B[i]);
    }
    
    return 0;
}
