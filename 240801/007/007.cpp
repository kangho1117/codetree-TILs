#include <iostream>
#include <string>
#include <tuple>
using namespace std;
class SecretAgent
{
    public:
        string code,point,time;
    SecretAgent(string code, string point, string time)
    {
        this->code = code;
        this->point = point;
        this->time = time;
    }
    void Print()
    {
        cout<<"secret code : "<<code<<"\n";
        cout<<"meeting point : "<<point<<"\n";
        cout<<"time : "<<time<<"\n";
    }
};
void Print(tuple<string,string,string> t)
{
    cout<<"secret code : "<<get<0>(t)<<"\n";
    cout<<"meeting point : "<<get<1>(t)<<"\n";
    cout<<"time : "<<get<2>(t)<<"\n";
}
int main() {
    string c,p,t;
    cin>>c>>p>>t;
    SecretAgent S1 = SecretAgent(c,p,t);
    tuple<string,string,string> T1 = make_tuple(c,p,t);
    S1.Print();
    //Print(T1);
    return 0;
}