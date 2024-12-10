#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr(15);
    for(int i=0;i<15;i++)
        cin>>arr[i];
    for(int a=1;a<=40;a++)
    {
        for(int b=1;b<=40;b++)
        {
            for(int c=1;c<=40;c++)
            {
                for(int d=1;d<=40;d++)
                {
                    int cnt=0;
                    vector<int> arr2,arr3(15,0);
                    arr2 = arr;
                    for(int z=0;z<15;z++)
                    {
                        if(arr2[z] == -1) continue;
                        else if(arr2[z] == a && arr3[0] == 0)
                        {
                            arr2[z] = -1;
                            arr3[0] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == b && arr3[1] == 0)
                        {
                            arr2[z] = -1;
                            arr3[1] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == c && arr3[2] == 0)
                        {
                            arr2[z] = -1;
                            arr3[2] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == d && arr3[3] == 0)
                        {
                            arr2[z] = -1;
                            arr3[3] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+b && arr3[4] == 0)
                        {
                            arr2[z] = -1;
                            arr3[4] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == b+c && arr3[5] == 0)
                        {
                            arr2[z] = -1;
                            arr3[5] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == c+d && arr3[6] == 0)
                        {
                            arr2[z] = -1;
                            arr3[6] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == d+a && arr3[7] == 0)
                        {
                            arr2[z] = -1;
                            arr3[7] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+c && arr3[8] == 0)
                        {
                            arr2[z] = -1;
                            arr3[8] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == b+d && arr3[9] == 0)
                        {
                            arr2[z] = -1;
                            arr3[9] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+b+c && arr3[10] == 0)
                        {
                            arr2[z] = -1;
                            arr3[10] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+b+d && arr3[11] == 0)
                        {
                            arr2[z] = -1;
                            arr3[11] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+c+d && arr3[12] == 0)
                        {
                            arr2[z] = -1;
                            arr3[12] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == b+c+d && arr3[13] == 0)
                        {
                            arr2[z] = -1;
                            arr3[13] = 1;
                            cnt++;
                            z=0;
                        }
                        else if(arr2[z] == a+b+c+d && arr3[14] == 0)
                        {
                            arr2[z] = -1;
                            arr3[14] = 1;
                            cnt++;
                            z=0;
                        }
                        else break;
                    }
                    if(cnt==15)
                    {
                        cout<<a<<" "<<b<<" "<<c<<" "<<d;
                        return 0; 
                    }
                    else continue;
                }
            }
        }
    }
    return 0;
}