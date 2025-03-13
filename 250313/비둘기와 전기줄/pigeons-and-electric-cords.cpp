#include <iostream>
using namespace std;
int N;
int pigeon[100];
int position[100];
int cnt[11][2],movenum=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
        cnt[pigeon[i]][position[i]]++;
    }
    for (int i = 1; i <= 10; i++) {
        if((cnt[i][0] == 0 && cnt[i][1] >= 1) || (cnt[i][0] >=1 && cnt[i][1] == 0))continue;
        else if((cnt[i][0] == 1 && cnt[i][1] >=1) || (cnt[i][0] >= 1 && cnt[i][1] ==1)) movenum++;
        else if(cnt[i][0] > 1 && cnt[i][1] >1) movenum+=2;
    }
    cout<<movenum;
    return 0;
}