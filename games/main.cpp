#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  int colors[n][2];
  int match = 0;

  for (int i = 0; i < n; i++) {
    cin >> colors[i][0] >> colors[i][1];
  }

  for (int i = 0; i < n; i++) {
    int home = colors[i][0];

    for (int j = 0; j < n; j++) {
      int away = colors[j][1];

      if (home == away) {
        match++;
      }
    }
  }

  cout << match << endl;
}