// training.cpp
// Name: Angel Fuentes 

#include <iostream>
using namespace std;

int main() {
  int x;
  int y;
  cin >> x;
  cin >> y;

  if (x == 10 && y == 5) {
    cout << "A";
  }

  if (x >= 5 && x <= 15) {
    cout << "B";
  }

  if (y % 3 != 0 || y % 5 == 0) {
    cout << "C";
  }

  if (x + y < 10 || x + y > 20) {
    cout << "D";
  }

  if (x < 0 && y >= 0 || y < 0 && x >= 0) {
    cout << "E";
  }

  cout << endl;
  return 0;
}
