#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> nums;
  for (int i = 0, temp; i < N; i++) {
    cin >> temp;
    nums.push_back(temp);
  }
  int L = M % N;
  if (L != 0) {
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + L);
    reverse(nums.begin() + L, nums.end());
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i];
    if (i < N - 1) {
      cout << ' ';
    }
  }
}