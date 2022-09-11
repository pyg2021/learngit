#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("请输入分数：\n");
    int n= 80;
    char m;
    m=(n>=90)?'A':((n>=60)?'B':'C');
    printf("你的成绩可以得到：%c\n",m);
    return 0;
}
