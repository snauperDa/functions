/******************************
* Функции                     *
* Вариант 11                  *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>

using namespace std;

int negativeNumberCounter(const double arrayUser[], int count) {
  int countNegativeElement = 0;
  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    if (arrayUser[rowIndex] < 0) {
      ++countNegativeElement;
    }
  }

  return countNegativeElement;
}

void printArray(const double arrayUser[], int count) {
  int negativeElementArrya = negativeNumberCounter(arrayUser, count);

  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    cout << arrayUser[rowIndex] << ' ';
  }

  cout << '\n' << "Number of negative elements = " << negativeElementArrya << '\n';
}

void cinArray(double arrayUser[], int count) {
  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    cout << "Element: " << rowIndex + 1 << " = "; cin >> arrayUser[rowIndex];
  }
}

int main() {
  int countElementArrayS, countElementArrayW;

  cout << "Enter the number of array elements S: ";

  if (!(cin >> countElementArrayS) || countElementArrayS < 0 || countElementArrayS > 20) {
    cout << "INVALID";
    return 0;
  }

  cout << "Enter the number of array elements W: ";

  if (!(cin >> countElementArrayW) || countElementArrayW < 0 || countElementArrayW > 20) {
    cout << "INVALID";
    return 0;
  }

  double arrayS[countElementArrayS];
  double arrayW[countElementArrayW];

  cout << "Array S:\n"; cinArray(arrayS, countElementArrayS);
  cout << "Array W:\n"; cinArray(arrayW, countElementArrayW);

  cout << "Array S:\n"; printArray(arrayS, countElementArrayS);
  cout << "Array W:\n"; printArray(arrayW, countElementArrayW);

  return 0;
}