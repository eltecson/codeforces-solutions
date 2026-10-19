#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int tests[n][3];
  for (int i = 0; i < n; i++) {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    tests[i][0] = a;
    tests[i][1] = b;
    tests[i][2] = c;
  }
  int total = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum + tests[i][j];
    }
    if (sum >= 2) {
      total++;
    }
  }
  cout << total;
}
