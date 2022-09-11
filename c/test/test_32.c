#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
// 删除字符串中指定字母函数
char* deleteCharacters(char * str, char * charSet)
{
    int hash [256];
    if(NULL == charSet)
        return str;
    for(int i = 0; i < 256; i++)
        hash[i] = 0;
    for(int i = 0; i < strlen(charSet); i++)
        {hash[charSet[i]] = 1;
        printf("%c\n",charSet[i]);
        printf("%d\n",hash[charSet[i]]);}
    int currentIndex = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(!hash[str[i]])
            str[currentIndex++] = str[i];
    }
    str[currentIndex] = '\0';
    return str;
}
 
int main()
{
    char s[2] = "a";     // 要删除的字母
    char s2[5] = "acab";  // 目标字符串
    printf("%c\n",s2[3]);
    printf("%s\n", deleteCharacters(s2, s));
    return 0;
}