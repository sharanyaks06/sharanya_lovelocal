#include <bits/stdc++.h>
using namespace std;

int countDigitOne(int n)
{
  int count = 0;

  for (int i = 1; i <= n; i++)
  {
    int num = i;
    while (num > 0)
    {
      if (num % 10 == 1)
      {
        count++;
      }
      num /= 10;
    }
  }

  return count;
}

int main()
{

  int n;
  cin >> n;
  int result = countDigitOne(n);
  cout << result << endl;

  return 0;
}
