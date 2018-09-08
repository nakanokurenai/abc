#include <iostream>

using namespace std;

unsigned euclidean_gcd(unsigned a, unsigned b) {
  if(a < b) euclidean_gcd(b, a);
  unsigned r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main () {
    int N, X;
    cin >> N;
    cin >> X;

    int NX[N];
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        NX[i] = abs(input - X);
    }

    if (N == 1) {
        cout << NX[0];
        return 0;
    }

    int t = NX[0];
    for (int i = 1; i < N; i++) {
        t = euclidean_gcd(t, NX[i]);
    }

    cout << t;
    return 0;
}
