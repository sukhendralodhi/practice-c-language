#include <stdio.h>

// int main(void) {

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
/*
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
 */

// Check number is armstrong or not
/*
int number, reminder, sum = 0;
printf("Enter the number: ");
scanf("%d", &number);
int original = number;
// int counter = number;

// do {
//   counter /= 10;
//   ++digit_counter;
// } while (counter != 0);

for (int i = 0; i < 4; ++i) {
  reminder = number % 10;
  sum = sum + (reminder * reminder * reminder * reminder);
  number = number / 10;
}

if (original == sum) {
  printf("Number is armstrong, %d\n", sum);
} else {
  printf("Number is not armstrong, %d\n", sum);
}

// printf("\n");

// printf("Number of digits = %d", digit_counter);
*/

// check leap year or not

/*
int year;
printf("Enter the year: ");
scanf("%d", &year);

if (year % 400 == 0) {
  printf("%d is leap year.\n", year);
} else if (year % 100 == 0) {
  printf("%d is not leap year.\n", year);
} else if (year % 4 == 0) {
  printf("%d is leap year.\n", year);
} else {
  printf("%d is not leap year.\n", year);
}

*/

/*
// square
void sqaure() {
  double a, area;
  printf("Enter the side: ");
  scanf("%lf", &a);

  area = a * a;

  printf("Area of square: %.2lf\n",area);
}

// circle
void circle() {
  double radius, area;
  const double pi = 3.14;
  printf("Enter the radius: ");
  scanf("%lf", &radius);

  area = pi * radius * radius;

  printf("Area of circle: %.2lf\n", area);
}

void reactangle() {
  double length, width, area;
  printf("Enter the lenght and width: ");
  scanf("%lf%lf", &length, &width);

  area = length * width;

  printf("Area of reactangle: %.2lf\n", area);
}

int main() {

  char c;
  printf("s for square\nc for circle\nr for reactangle\n");
  printf("Enter your choice: ");
  scanf("%c", &c);

  switch (c) {
  case 's':
    sqaure();
    break;

  case 'c':
    circle();
    break;

  case 'r':
    reactangle();
    break;

  default:
    printf("You chhose wrong option\n");
  }
  */
int main(void) {

  char character;
  int lower_case, upper_case;
  printf("Enter the character: ");
  scanf("%c", &character);

  lower_case = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
  upper_case = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

  if(lower_case || upper_case) {
    printf("Vowel\n");
  } else {
    printf("Consonant\n");
  }
}