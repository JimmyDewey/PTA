#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  long a, b;
  cin >> a >> b;
  long sum = a + b;
  long abs_sum = abs(sum);
  string output = to_string(abs_sum);
  for (int i = output.length(), count_digi = 0; i > 0; i--) {
    if (count_digi++ == 3) {
      output.insert(output.end() - (output.length() - i), ',');
      i++;
      count_digi = 0;
    }
  }
  if (sum < 0) {
    cout << '-';
  }
  cout << output << endl;
  return 0;
}
