#include <stdio.h>

int main(void) {
  // get reminder

  /*
  int number1,number2;
  printf("Enter the numbers: ");
  scanf("%d%d",&number1,&number2);
  printf("Reminder %d\n",number1%number2);
  printf("Reminder %d",number1/number2);
*/

  // cheking size of data types
  /*
  int a;
  float b;
  double c;
  long d;
  long long e;
  double long f;
  printf("%zu bytes\n",sizeof(b));
  printf("%zu bytes\n",sizeof(a));
  printf("%zu bytes\n",sizeof(c));
  printf("%zu bytes\n",sizeof(d));
  printf("%zu bytes\n",sizeof(e));
  printf("%zu bytes\n",sizeof(f));
  */

  // swap number
  /*
  int number1, number2;
  printf("Enter the numbers: ");
  scanf("%d%d",&number1,&number2);

  printf("Before swaping = %d\n%d\n",number1, number2);

  int temp = number1;
  number1=number2;
  number2=temp;

  printf("After swaping = %d\n%d\n",number1, number2);
  */

  // sum of natural numbers
  /*
  int num, i = 1, sum = 0;

  printf("Enter positive number: ");
  scanf("%d", &num);

  // for(i=1; i<=num; i++) {
  //   sum = sum+i;
  // }

  while (i <= num) {
    sum = sum + i;
    i++;
  }
  printf("%d", sum);
  */

  // print sum of numbers until user put zero
  /*
  double number, sum = 0;

  do {
    printf("Enter the number: ");
    scanf("%lf", &number);
    sum = sum + number;

  } while (number != 0.0);

  printf("Sum = %lf", sum);
  */

  // break keyword
  /*
  int i;
  double num, sum = 0.0;
  for(i=1; i<=10; ++i) {
    printf("Enter the value of num n%d: ",i);
    scanf("%lf",&num);

    if(num < 0.0) {
      break;
    }
    sum+=num;
  }
  printf("Sum = %.2lf", sum);
  */

  // continue keyword

  // int i;
  // double num, sum = 0.0;
  // for(i=1; i<=10; ++i) {
  //   printf("Enter the value of num n%d: ",i);
  //   scanf("%lf",&num);

  //   if(num < 0.0) {
  //     continue;;
  //   }
  //   sum+=num;
  // }
  // printf("Sum = %.2lf", sum);

  int num1 = 20, num2 = 30;
  // int temp = num1;
  // num1 = num2;
  // num2 = temp;

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("num1 = %d\nnum2 = %d", num1, num2);
}