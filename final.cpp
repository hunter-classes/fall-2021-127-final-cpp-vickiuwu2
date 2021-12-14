#include <iostream>
#include <cmath>
#include <string>
using std::string;

//Recall that a triangle with legs a and b and hypoteneus c is a right triangle if a^2+b^2=c^2. Your program should return true if the three sides represents a right triangle and false otherwise. You should assume that your first two parameters are the legs and the third the hypotenuse.
void isRightTriangle(int leg1, int leg2, int hyp)
{
  if (pow(leg1, 2) + pow(leg2, 2) == pow(hyp, 2))
  {
    std::cout << "true" << std::endl;
  }
  else
  {
    std::cout << "false" << std::endl;
  }
}

//Write a function named fizzbuzz. It should accept an *int* as a parameter and it should return a *std::string*. If the parameter is divisible by *3* the function should return the *std::string** "fizz" if the number is divisible by *5*, return "buzz" and if divisible by both *3* and *5* return "fizzbuzz."
void fizzbuzz(int x)
{
  std::string result;
  if ((x % 3 == 0) && (x % 5 != 0))
  {
    result = "fizz";
  }
  else if ((x % 5 == 0) && (x % 3 != 0))
  {
    result = "buzz";
  }
  else 
  {
    if ((x % 3 == 0) && (x % 5 == 0))
    {
      result = "fizzbuzz";
    }
  }
  std::cout << x << " " << result << "\n";
}

int main()
{
  isRightTriangle(3, 4, 5);
  isRightTriangle(3, 4, 6);
  for(int x = 1; x < 22; x += 1) 
  {
        fizzbuzz(x);
  }
  return 0;
}