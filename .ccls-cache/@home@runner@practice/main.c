#include <stdio.h>

int main(void) {
  // int number1,number2;
  int a;
  float b;
  double c;
  long d;
  long long e;
  double long f;
  // printf("Enter the numbers: ");
  // scanf("%d%d",&number1,&number2);
  printf("%zu bytes\n",sizeof(b));
  printf("%zu bytes\n",sizeof(a));
  printf("%zu bytes\n",sizeof(c));
  printf("%zu bytes\n",sizeof(d));
  printf("%zu bytes\n",sizeof(e));
  printf("%zu bytes\n",sizeof(f));
    
  // printf("Reminder %d\n",number1%number2);
  // printf("Reminder %d",number1/number2);
}