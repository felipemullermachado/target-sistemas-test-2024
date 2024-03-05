#include <iostream>
#include <string>

using namespace std;

string invertString(string sentence)
{
  int stringSize = sentence.length();
  string invertedString;
  for (int i = 0; i < stringSize; i++)
  {
    invertedString += sentence[stringSize - 1 - i];
  }
  return invertedString;
}

int main()
{
  string sentence = " ";
  cout << "Por favor, digite a frase que será invertida: " << endl;
  getline(cin, sentence);

  sentence = invertString(sentence);

  cout << sentence << endl;

  return 0;
}