#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;

int main() {
  int n, left_to_right = 0, right_to_left = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    arr.push_back({});

    for (int j = 0; j < n; j++) {
      int p;

      cin >> p;

      arr[i].push_back(p);
    }
  }

  int tmp = 0;

  for (int i = 0; i < n; i++) {
    left_to_right += arr[i][tmp];
    right_to_left += arr[(arr.size() - 1) - i][tmp];

    tmp++;
  }

  cout << abs(left_to_right - right_to_left) << endl;

  return 0;
}