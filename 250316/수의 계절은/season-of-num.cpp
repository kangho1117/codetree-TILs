#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    if(3<=m && m<=5) cout<<"Spring";
    else if(6<=m && m<=8) cout<<"Summer";
    else if(9<=m && m<=11) cout<<"Fall";
    else if(12<=m || m<=2) cout<<"Winter";  
    return 0;
}