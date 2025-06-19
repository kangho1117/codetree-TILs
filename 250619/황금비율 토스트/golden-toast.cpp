#include <iostream>
#include <string>

using namespace std;

int n, m,pnt;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    pnt = s.size();
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'L') {
            if(pnt>0) pnt--;
        }
        else if (command == 'R') {
            if(pnt < s.size()) pnt++;
        }
        else if (command == 'D') {
            s.erase(pnt,pnt+1);
        }
        else if (command == 'P') {
            char cc;
            string ss;
            cin >> cc;
            ss = cc;
            s.insert(pnt,ss);
            pnt++;
        }
    }

    cout<<s;

    return 0;
}
