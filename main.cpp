/******************************
* Функции                     *
* Вариант 11                  *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>

using namespace std;

int negativeNumberCounter(double arrayUser[], int count) {
  int countNegativeElement = 0;
  
  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    if (arrayUser[rowIndex] < 0) {
      ++countNegativeElement;
    }
  }

  return countNegativeElement;
}

void printArray(double arrayUser[], int count) {
  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    cout << arrayUser[rowIndex] << ' ';
  }
}

void cinArray(double arrayUser[], int count) {
  for (int rowIndex = 0; rowIndex < count; ++rowIndex) {
    cout << "Element: " << rowIndex + 1 << " = ";
    cin >> arrayUser[rowIndex];
  }
}

int main() {
  int countElementArrayS, countElementArrayW;
  double arrayS[20], arrayW[20];

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

  cout << "Array S:\n";
  cinArray(arrayS, countElementArrayS);
  cout << "Array W:\n";
  cinArray(arrayW, countElementArrayW);

  cout << "\nArray S:\nCount negative element: " << negativeNumberCounter(arrayS, countElementArrayS) << '\n';
  printArray(arrayS, countElementArrayS);
  cout << "\nArray W:\nCount negative element: " << negativeNumberCounter(arrayW, countElementArrayW) << '\n';
  printArray(arrayW, countElementArrayW);

  return 0;
}