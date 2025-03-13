#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, pigeon[100], position[100], movenum=0;
int main() {
    vector<int> crt(11,-1);
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> pigeon[i] >> position[i];
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