#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<int> getPrimeNumberUnder(int num);
bool isPrime(int num);

int main() {
  int num;
  cin >> num;
  if (num < 5) {
    cout << 0;
    return 0;
  }
  // num = 10000;
  vector<int> primes = getPrimeNumberUnder(num);

  int count = 0;
  for (unsigned int i = primes.size() - 1; i; i--) {
    if (primes[i - 1] - primes[i] == 2) {
      count++;
    }
  }
  cout << count;
  return 0;
}

vector<int> getPrimeNumberUnder(int num) {
  vector<int> primes;
  for (int i = num; i > 2; i--) {
    if (isPrime(i)) {
      primes.push_back(i);
      //cout << i << endl;
    }
  }
  return primes;
}

bool isPrime(int num) {
  if (num <= 3) {
    return num > 1;
  }
  // 不在6的倍数两侧的一定不是质数
  if (num % 6 != 1 && num % 6 != 5) {
    return false;
  }
  int sq = (int)sqrt((float)num);
  for (int i = 5; i <= sq; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}


