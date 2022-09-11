#include<stdio.h>
int main(int argc, char const *argv[])
{
    // long double sum=0;
    // double s=1;
    // printf("%f\n",s);
    // for (int i = 1; i <= 20; i++)
    // {
    //     s=1.;
    //     // printf("1-s:%Lf\n",s);
    //     for (int j = 1; j <=i; j++)
    //     {
    //         s=s*j;
    //         // printf("2-s:%Lf\n",s);
    //     }
    //     // printf("3-s:%Lf\n",s);
    //     sum+=s;
    //     // printf("sum:%Lf\n",sum);
    // }
    // printf("%Lf",sum);
    // return 0;
    int i;
    double sum,mix;
    sum=0.,mix=1.;
    for(i=1;i<=20;i++)
    {
        mix=mix*i;
        sum=sum+mix;
    }  
    printf("%Lf\n",sum);  
}
