#include <stdio.h>
#define CLEAR printf("\033[0;0H\033[2J");
/* 
  Excercise 1 : swap
  Create a function that "swaps" the contents of two variables.
  It should receive two intengers, return nothing and after it execution
  whatever what inside one variable should be inside the other and viceversa 
  
*/

void swaps(int *a, int *b) {
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;

}

/* Excercise 2 : blackjack

Create a blackjack function that:
  -receives 2 numbers and a FLAG (char)
  -returns 1 of the sum of the numbers is positive (greater than 0).
  -returns 0 if the sum of the numbers is negative.
  -Stores the sum of the two numbers in number2.
  -If the sum is 21, set the FLAG to = 'W' (winner)

   IN  IN/OUT  OUT
 (num1, num2, flag)

*/

int blackjack(int *a, int *b, char *c) {
  int sum = *a + *b;
  *b = sum;
  if(sum == 21) {
    *c = 'W';
  }
  return (sum >= 0) ? 1 : 0;
}

int main()
{
  CLEAR
  /* Exercise 1:  swap num1 and num2 value */
  int num1 = 10;
  int num2 = 20;
  swaps(&num1, &num2);

  printf("Num1 era = 10 ahora es: %d || Num2 era = 20 ahora es: %d", num1, num2);

  /* Exercise 2:  Blackjack 
    Call and test your program here */
  int a = 9, b = 12;
  char c = 'A';
  blackjack(&a, &b, &c);
  printf("\n%c", c);


  return 0;
}