#include <iostream>

using namespace std;

int main () {
    int N;
    cin >> N;

    string W[N];
    for (int i = 0; i < N; i++) {
        // cin >> W[N];
        cin >> W[i];
    }

    string state = W[0];
    for (int i = 1; i < N; i++) {
        if (state[state.size() - 1] != W[i][0]) {
            cout << "No";
            return 0;
        }
        for (int j = 0; j < i; j++) {
            if (W[j] == W[i]) {
                cout << "No";
                return 0;
            }
        }
        state = W[i];
    }

    cout << "Yes";
    return 0;
}
