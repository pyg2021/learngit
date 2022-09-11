#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
   extern int errno;
   FILE *pf;
   int errnum;
   pf = fopen("unexist.txt", "rb");
   if (pf == NULL)
   {
      errnum = errno;
      fprintf(stderr, "错误号: %d\n", errno);
      perror("通过 perror 输出错误");
      fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
   }
   else
   {
      fclose(pf);
   }
   return 0;
}
