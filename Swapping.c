#include<stdio.h>
int main() {
  double first, second;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
  first = first + second;
  second = first - second;
  first = first - second;

  printf("\nAfter swapping first number = %.2lf\n", first);
  printf("After swapping second number = %.2lf", second);
  return 0;
}
