#include <iostream>
#include <string>

using namespace std;

int main() {
  string month, day, year;
  int hour1, min1, hour2, min2;
  while (cin >> month && cin >> day && cin >> year) {
    cin >> hour1;
    cin.ignore();
    cin >> min1;

    cin >> hour2;
    cin.ignore();
    cin >> min2;

    cout << month << " " << day << " " << year << " ";

    int hours = hour2 - hour1;
    int min = min2 - min1;

    if (min < 0) {
      min += 60;
      hours--;
    }

    cout << hours << " hours " << min << " minutes" << endl;
  }
}