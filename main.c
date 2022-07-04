#include "ft_printf.h"

int sum(int num_args, ...)
{
  va_list ap;
  va_start(ap, num_args); 
  int arg = 0, result = 0;
  for(int i = 0; i < num_args; i++)
  {
    arg = va_arg(ap,int); 
    result += arg;
  }
  va_end(ap); 
  return result;
}

int main(void) {
  int s = sum(5,1,2,3,4,5);

  int n = 0;
  char c ='a';
  n = ft_printf("%d",12345678);
  printf("%d\n",n);
  n =printf("%d", 12345678);
  printf("%d\n",n);
  ft_printf("%c\n",'a');
  printf("%s\n",NULL);
  ft_printf("%s\n",NULL);
  printf("%p\n", &c);
  ft_printf("%p\n", &c);
  printf("x : %x, X : %X\n", 123123, 123123);
  ft_printf("x : %x, X : %X\n",123123,123123);
  int i = 40;
  printf("|%-10d| %d \n",i,123);
  ft_printf("|%-10d| %d \n",i,123);
  printf("%010d\n",132);
  int a = printf("%d %d %s %c %u\n", 123213, 123123, "asdsadas", 'c', 63263242);
  printf("%d\n",a);
}