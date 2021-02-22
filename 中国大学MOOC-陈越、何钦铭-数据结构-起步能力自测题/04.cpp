#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  std::vector<int> digimap(10);

  string raw;
  std::cin >> raw;

  int digi, carry = 0, len = raw.size();
  string double_raw;

  while (len) {
    digi = raw[len - 1] - '0';
    digimap[digi]++;

    digi *= 2;
    double_raw += (digi % 10 + carry + '0');
    carry = digi / 10;

    len--;
  }
  double_raw += carry ? "1" : "";
  reverse(double_raw.begin(), double_raw.end());

  bool flag = true;
  len = double_raw.size();
  while (len) {
    digi = double_raw[len - 1] - '0';
    digimap[digi]--;

    if (digimap[digi] < 0) {
      flag = false;
      break;
    }
    len--;
  }

  std::cout << (flag ? "Yes\n" : "No\n") << double_raw << std::endl;

  // for (vector<int>::iterator it = digimap.begin(); it != digimap.end(); it++)
  // {
  //   std::cout << *it << std::endl;
  // }
  return 0;
}
