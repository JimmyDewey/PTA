/*
 打印沙漏
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int count;
  char ch;
  cin >> count >> ch;
  int max = 1, line = 0;
  while (max <= count) {
    int temp = max + (2 * (++line) + 1) * 2;
    if (temp > count) {
      line--;
      break;
    } else {
      max = temp;
      // cout << max << "  "<< line << endl;
    }
  }

  vector<int> chs;
  int totalLines = line * 2 + 1;
  for (int n = 0; n < totalLines; n++) {
    int temp;
    if (n < totalLines / 2 + 1) {
      temp = totalLines - n * 2;
    } else {
      //cout << "------" << n << "------" << endl;
      temp = n * 2 - totalLines + 2;
    }
    chs.push_back(temp);
    // cout << temp << endl;
  }

  for (int lines = 0; lines < chs.size(); lines++) {
    for (int j = chs[0] - chs[lines]; j; j -= 2) {
      cout << " ";
    }
    for (int i = chs[lines]; i; i--) {
      cout << ch;
    }
    cout << endl;
  }
  int left = count - max;
  cout << left;
  
}

