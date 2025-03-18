#include <iostream>
using namespace std;

bool CheckSpeed(int xspeed,int remainX){
    
    int sum=0;
    for(int i=1;i<=xspeed;i++){
        sum+=i;
    }
    if(sum<=remainX) return true;
    else return false;
}

int main() {
    int x;
    int speed=1;
    cin>>x;
    int currentX=0;
    int time=0;
    while(currentX<x){
        currentX+=speed;
        if(CheckSpeed(speed+1,x-currentX)) {
            speed++;
        }else if(CheckSpeed(speed,x-currentX)){

        }else{
            speed--;
        }
        
        time++;
        
    }
    cout<<time;
    return 0;
}
