#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}
void print2(int n)
{
}

void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {

    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars

    for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    {
      cout << "*";
    }

    // space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    cout << endl;
  }
}

void pattern10(int n)
{
  for (int i = 1; i < 2 * n - 1; i++)
  {

    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern11(int n)
{
  int start;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void pattern12(int n)
{
  // 1st loop for no of rows
  for (int i = 1; i <= n; i++)
  {
    // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    // space
    for (int j = 1; j <= 2 * n - 2 * i; j++)
    {
      cout << " ";
    }

    // number
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }

    cout << endl;
  }
}

void pattern13(int n)
{
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num;
      num += 1;
    }

    cout << endl;
  }
}

void pattern14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }

    cout << endl;
  }
}

pattern15(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

// pattern16(int n){
//   for(char ch='A'; ch<'A'+n; ch++){
//     for(int chi='A'; chi<=ch; chi++){
//       cout<<ch<<" ";
//   }
//   cout<<endl;
// }
// }

// pattern 16 other way

pattern16(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void pattern17(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    // characters
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << ch;
      if (j < breakpoint)
        ch++;
      else
        ch--;
    }

    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char c = 'E' - i; c <= 'E'; c++)
    {
      cout << c << " ";
    }
    cout << endl;
  }
}

pattern19(int n)
{
  int iniS = 0;
  for (int i = 0; i < n; i++)
  {

    // stars
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }

    // spaces

    for (int j = 0; j < iniS; j++)
    {
      cout << " ";
    }

    // stars
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    iniS += 2;

    cout << endl;
  }

  iniS = 2 * n - 2;
  for (int i = 0; i < n; i++)
  {

    // stars
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }

    // space
    for (int j = 0; j < iniS; j++)
    {
      cout << " ";
    }

    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    iniS -= 2;
    cout << endl;
  }
}

void pattern20(int n)
{
  int space = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {

    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    // stars

    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }

    // spaces

    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }

    // stars
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }

    cout << endl;
    if (i < n)
      space -= 2;
    else
      space += 2;

    // stars
  }
}

void pattern21(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
      {
        cout << "*";
      }
      else
        cout << " ";
    }
    cout << endl;
  }
}

void pattern22(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i;
      int left = j;
      int right = (2 * n - 2) - j;
      int down = (2 * n - 2) - i;
      cout << (n - min(min(top, down), min(left, right)));
    }

    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  // print1(n);

  // pattern7(n);
  // pattern8(n);
  // pattern 9 is combination of 8 and 9
  // pattern10(n);
  // pattern11(n);
  // pattern12(n);
  // pattern13(n);
  // pattern14(n);
  // pattern15(n);
  // pattern16(n);
  // pattern17(n);
  // pattern18(n);
  // pattern19(n);
  // pattern20(n);
  //  pattern21(n);
  pattern22(n);
  return 0;
}