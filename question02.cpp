#include <iostream>
using namespace std;

bool searchNumberInArray(int number, int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (array[i] == number)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int numberEntered, arraySize;

  cout << "Por favor, digite um número inteiro:" << endl;
  cin >> numberEntered;

  arraySize = (numberEntered + 1) * 2;
  int numbers[arraySize];

  numbers[0] = 0;
  numbers[1] = 1;
  for (int i = 2; i < arraySize; i++)
  {
    numbers[i] = numbers[i - 1] + numbers[i - 2];
  }

  if (searchNumberInArray(numberEntered, numbers, arraySize))
  {
    cout << "Este número pertence a sequência de Fibonacci" << endl;
  }
  else
  {
    cout << "Este número NÃO pertence a sequência de Fibonacci" << endl;
  }

  return 0;
}
