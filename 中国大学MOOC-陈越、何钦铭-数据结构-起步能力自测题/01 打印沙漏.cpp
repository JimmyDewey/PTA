#include <iostream>

using namespace std;

int main() {
  int count;
  char ch;
  //cin >> count >> ch;
  count = 19;
  ch = '*';
  int max = 0, line = 0;
  while (max <= count) {
    int temp = max + (2 * (++line) + 1) * 2 + 1;
    if (temp > count) {
      break;
    } else {
      max = temp;
      cout << max << "  "<< line << endl;
    }
  }
  cout << max << endl;
  
}
