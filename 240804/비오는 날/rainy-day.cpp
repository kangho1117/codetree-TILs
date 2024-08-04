#include <iostream>
#include <string>
#include <sstream>
#include <tuple>
#include <vector>
using namespace std;
class Day
{
public:
    int year, month, day;
    string date, weather;
    Day(int year = 0, int month = 0, int day = 0, string date = "", string weather = "")
    {
        this->year = year;
        this->month = month;
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    void print()
    {
        cout << "y : " << year << " m : " << month << " d : " << day << " d : " << date << " w : " << weather << "\n";
    }
};
int main()
{
    int n;
    cin >> n;
    string a, b, c;
    vector<Day *> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        Day *d = new Day(stoi(a.substr(0, 4)), stoi(a.substr(5, 2)), stoi(a.substr(8, 2)), b, c);
        vec.push_back(d);
    }
    int miny = 0, minm = 0, mind = 0;
    string mindt = "", minw = "";
    for (int i = 0; i < n; i++)
    {
        if (vec[i]->weather == "Rain")
        {
            if (miny == 0)
            {
                miny = vec[i]->year, minm = vec[i]->month, mind = vec[i]->day,
                mindt = vec[i]->date, minw = vec[i]->weather;
            }
            if (miny > vec[i]->year)
            {
                miny = vec[i]->year;
                minm = vec[i]->month;
                mind = vec[i]->day;
                mindt = vec[i]->date;
                minw = vec[i]->weather;
            }
            else if (miny == vec[i]->year && minm > vec[i]->month)
            {
                minm = vec[i]->month;
                mind = vec[i]->day;
                mindt = vec[i]->date;
                minw = vec[i]->weather;
            }
            else if (miny == vec[i]->year && minm == vec[i]->month && mind > vec[i]->day)
            {
                mind = vec[i]->day;
                mindt = vec[i]->date;
                minw = vec[i]->weather;
            }
        }
    }
    cout << miny << "-";
    if(minm<10) cout<<"0"<<minm<<"-";
    else cout<<minm<<"-";
    if(mind<10) cout<<"0"<<mind<<" ";
    else cout<<mind<<" ";
    cout<<mindt << " " << minw << "\n";
    return 0;
}