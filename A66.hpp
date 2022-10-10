//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )

void maxmin(int num1, int num2, int num3, int& maxiumum, int& minimum) {
 
  if ((num1 >= num3) && (num1 >= num2)) {
    maxiumum = num1;
  } else if ((num2 >= num3) && (num2 >= num1)) {
    maxiumum = num2;
  } else {
    maxiumum = num3;
  }

  if ((num1 <= num3) && (num1 <= num2)) {
    minimum = num1;
  } else if ((num2 <= num3) && (num2 <= num1)) {
    minimum = num2;
  } else {
    minimum = num3;
  }
}