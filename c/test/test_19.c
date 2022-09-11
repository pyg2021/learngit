#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    for (int i = 2; i < 1000; i++)
    {   
        n=1;
        int k=i;
       for (int j = 2; j < k; j++)
       {
        if (k%j==0)
        {
            n+=j;
        }
        
       }
       if (n==i)
       {
        printf("完数%d\n",n);
       }
       
       
        
        
    }
    
    return 0;
}