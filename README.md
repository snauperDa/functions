# Функции. Вариант 11

## Задание

Даны два произвольных массива S, W размера n, m соответственно. Найти количество отрицательных элементов массива S и количество отрицательных элементов массива W. Исходные данные взять самостоятельно.

## Выполнил

Колосков Дмитрий Викторович

## Описание программы

Программа на языке C++ для подсчёта количества отрицательных элементов в двух массивах. 
- Вводятся размеры массивов S и W (не более 20 элементов).
- Для каждого массива вводятся элементы с клавиатуры.
- С помощью функции `negativeNumberCounter()` подсчитывается количество отрицательных элементов.
- Результат выводится на экран с помощью функции `printArray()`.

## Функции

- `int negativeNumberCounter(const double arrayUser[], int count)` — подсчёт количества отрицательных элементов массива
- `void printArray(const double arrayUser[], int count)` — вывод массива и количества отрицательных элементов
- `void cinArray(double arrayUser[], int count)` — ввод элементов массива с клавиатуры


## Пример работы

```
Enter the number of array elements S: 5
Enter the number of array elements W: 4
Array S:
Element: 1 = -1
Element: 2 = 2
Element: 3 = -3
Element: 4 = 4
Element: 5 = 5
Array W:
Element: 1 = 1
Element: 2 = -2
Element: 3 = 3
Element: 4 = -4
Array S:
-1 2 -3 4 5 
Number of negative elements = 2
Array W:
1 -2 3 -4 
Number of negative elements = 2
```