#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  std::vector<string> cards;
  string SHCDJ[] = {"S", "H", "C", "D", "J"};
  for (int i = 0; i < 4; i++) {
    for (int j = 1; j < 14; j++) {
      cards.push_back(SHCDJ[i] + to_string(j));
    }
  }
  cards.push_back("J1");
  cards.push_back("J2");

  int repeat_time;
  string given_order;

  cin >> repeat_time;
  getline(cin, given_order);
  getline(cin, given_order);
  // cout << given_order << endl;
  // repeat_time = 2;
  // given_order = "36 52 37 38 3 39 40 53 54 41 11 12 13 42 43 44 2 4 23 24 25
  // "
  //               "26 27 6 7 8 48 49 50 51 9 10 14 15 16 5 17 18 19 1 20 21 22
  //               " "28 29 30 31 32 33 34 35 45 46 47";
  vector<int> order;
  vector<string> ordered_cards(54);
  stringstream ss(given_order);
  string tmp;
  while (getline(ss, tmp, ' ')) {
    order.push_back(stoi(tmp) - 1);
  }

  // for (int i = 0; i < order.size(); i++) {
  //   cout << to_string(order[i]) + " ";
  // }
  // cout << endl << endl;

  for (int i = 0; i < repeat_time; i++) {
    for (int j = 0; j < order.size(); j++) {
      ordered_cards[order[j]] = cards[j];
    }
    cards = ordered_cards;
  }

  for (int i = 0; i < cards.size(); i++) {
    cout << ordered_cards[i] + (i < cards.size() ? " " : "");
  }
  cout << endl;

  // for (int i = 0; i < cards.size(); i++) {
  //   cout << cards[i] + " ";
  // }
  // cout << endl;
  return 0;
}
