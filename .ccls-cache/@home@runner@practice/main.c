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

  // swap number
  /*

  int num1 = 20, num2 = 30;
  int temp = num1;
  num1 = num2;
  num2 = temp;

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("num1 = %d\nnum2 = %d", num1, num2);
  */

  // tempretaure conversion
  /*
  float f,c;
  printf("Enter temp in celsius: ");
  scanf("%f",&c);

  f = (c*9/5)+32;

  printf("%f",f);
  */

  // enter 4 digit and calculate sum first and last digit
  /*
    int number;
    printf("Enter number; ");
    scanf("%d",&number);

    int first = number / 1000;
    int last = number % 10;
    int sum = first + last;
    printf("First = %d\n", first);

    printf("Last = %d\n", last);

    printf("Sum = %d\n",sum);
    */

  // calculate net and gross salary

  /*
  double basic_salary, net_salary, gross_salary, ta, pf;
  printf("Enter the basic salary of employee: ");
  scanf("%lf", &basic_salary);
  int da = 500;
  ta = (basic_salary * 10) / 100;
  pf = (basic_salary * 7.8) / 100;

  gross_salary = basic_salary + da + ta;
  net_salary = gross_salary - pf;

  printf("Travel Allowance = %.2lf\n", ta);
  printf("Dearness Allowance = %d\n", da);
  printf("Provident Fund = %.2lf\n", pf);

  printf("Gross Salary = %.2lf\n", gross_salary);
  printf("Net Salary = %.2lf\n", net_salary);
  */

  // check number is palindrome or not
 
  int number, reminder, reverse = 0, digit_counter = 0;
  printf("Enter the number: ");
  scanf("%d", &number);
  int original = number;
  int counter = number;

  do {
    counter /= 10;
    ++digit_counter;
  } while (counter != 0);

  for (int i = 0; i < digit_counter; ++i) {
    reminder = number % 10;
    reverse = reverse * 10 + reminder;
    number = number / 10;
  }

  if (original == reverse) {
    printf("Number is palindrome, %d\n", reverse);
  } else {
    printf("Number is not palindrome, %d\n", reverse);
  }

  printf("\n");

  printf("Number of digits = %d", digit_counter);
  

  // Check number is armstrong or not 

}