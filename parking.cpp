// parking.cpp
// Name:Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  string s;
  cout << "Is today a weekend or holiday? (yes/no)" << endl;
  cin >> s;

  string direction;
  cout << "What direction are you turning? (left/right)" << endl;
  cin >> direction;

  int hour;
  cout << "What hour is it? (0-23)" << endl;
  cin >> hour;

  bool invalid = hour < 0 || hour > 23;
  bool is_weekend;
  if (s == "yes") {
    is_weekend = true;
  } else if (s == "no") {
    is_weekend = false;
  } else {
    invalid = true;
  }

  bool turning_left;
  if (direction == "left") {
    turning_left = true;
  } else if (direction == "right") {
    turning_left = false;
  } else {
    invalid = true;
  }

  if (invalid) {
    cout << "Invalid input" << endl;
    return 1;
  }

  if (!turning_left && is_weekend && hour >= 8 && hour < 22) {
    cout << "4P" << endl;
  } else if (!turning_left && !is_weekend && hour >= 8 && hour < 20) {
    cout << "No parking allowed" << endl;
  } else if (!turning_left && !is_weekend && hour >= 20 && hour < 22) {
    cout << "2P" << endl;
  } else if (turning_left && !is_weekend && hour >= 8 && hour < 18) {
    cout << "1P" << endl;
  } else if (turning_left && ((!is_weekend && hour >= 18 && hour < 22) ||
                              (is_weekend && hour >= 8 && hour < 22))) {
    cout << "4P" << endl;
  } else {
    cout << "No ticket needed" << endl;
  }

  return 0;
}
