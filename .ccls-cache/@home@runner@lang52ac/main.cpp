#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter Length and Width" << endl;
  int l;
  int w;
  cin >> l;
  cin >> w;
  int a = l*w;
  int p = (l+w)*2;
  cout << "Area: " << a << endl;
  cout << "Perimeter: " << p;
}