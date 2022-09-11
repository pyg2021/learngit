#include<stdio.h>
int main(int argc, char const *argv[])
{   
    double I,S;
    I=12;
    if (I<10)
    {   
        /* code */
        S=I*0.1;
    }
    else if (I<20)
    {
        S=10*0.1+(I-10)*0.075;
    }
    else if (I<40)
    {
        S=10*0.1+10*0.75+(I-20)*0.05;
    }
    else if (I<60)
    {
        S=10*0.1+10*0.75+20*0.03+(I-40)*0.03 ;
         
    } 
    printf("获得的提成为：%f",S);
    
    
    
    return 0;
}