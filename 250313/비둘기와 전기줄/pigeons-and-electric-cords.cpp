#include <iostream>
#include <algorithm>
using namespace std;
int N;
int pigeon[100];
int position[100];
int crt[11],movenum=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }
    for (int i = 1; i <= 10; i++) {
        crt[i] = -1;
    }
    for (int i = 0; i < N; i++) {
        if(crt[pigeon[i]] == -1) crt[pigeon[i]] = position[i];
        else if(crt[pigeon[i]] != position[i])
        {
            crt[pigeon[i]] = position[i];
            movenum++;
        }
    }
    cout<<movenum;
    return 0;
}