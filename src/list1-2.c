#include <stdio.h>

int main(int argc, char** argv){
  int a;
  printf("数値を入力: ");
  scanf("%d",&a);
  if (a >0)
  {
    printf("入力した値は正の数です．\n");
  }
  else
  {
    printf("入力した値は負の数です．\n");
  }
  
  return 0;
}