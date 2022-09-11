#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (char i = 'y'; i <= 'z'; i++)
    {
        for (char j = 'x'; j <= 'z'; j++)
        {
            for (char k = 'x'; k <= 'z'; k++)
            {
                if (i!=j&&i!=k&&j!=k)
            {
                if (j!='x'&&j!='z')
                {
                    printf("顺序为：a-%c,b-%c,c-%c",i,j,k);
                }
                
            }
            }
            
            
            
        }
        
        
    }
    

    return 0;
}
