#include <iostream>
using namespace std;
int main() {
    int a =3,b=5,temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<"\n"<<b;
    return 0;
}