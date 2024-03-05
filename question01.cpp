#include <iostream>
using namespace std;

int main()
{
  int index = 13, sum = 0, k = 0;
  while (k < index)
  {
    k++;
    sum = sum + k;
  }

  cout << sum << endl;

  // Resposta: 91
  
  return 0;
}