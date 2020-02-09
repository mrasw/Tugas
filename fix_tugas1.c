#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  //Original created by: bayu surya bawono 05111840000114
  printf("\n\n\njangan banyak bicara atau program ini akan marah\n\n\n");
  if(argc==1)
  {
    printf("terimakasih anda tidak membuat program ini marah\n");
  }
  else if(argc>=2&&argc<=5)
  {
    printf("baiklah, anda masih saya maafkan\n");
  }
  else if(argc>5)
  {
    do {
        fork();
        argc--;
    } while(argc!=1);
    printf(" sebelumnya saya sudah memperingati anda untuk tidak banyak bicara\n");
  }
  return 0;
}
