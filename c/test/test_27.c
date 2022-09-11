#include <stdio.h>
 
int main()
{
    int i=5;
    void palin(int n);
    printf("please input:");
    palin(i);
    printf("\n");
}
void palin(int n)
{
    char next;
    if(n<=1) {
        next=getchar();
        printf("put:");
        putchar(next);
    } else {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}