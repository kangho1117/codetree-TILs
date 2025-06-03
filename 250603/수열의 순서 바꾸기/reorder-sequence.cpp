#include <iostream>

using namespace std;

int N;
int sequence[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    cout<<N-1;
    return 0;
}