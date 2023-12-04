#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string &s)
{
  int length = 0;
  int i = s.size() - 1;

  while (i >= 0 && s[i] == ' ')
  {
    i--;
  }

  while (i >= 0 && s[i] != ' ')
  {
    length++;
    i--;
  }

  return length;
}

int main()
{

  string input = "Hello World";
  int result = lengthOfLastWord(input);
  cout << result << endl;

  return 0;
}