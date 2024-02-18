#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    map<int,int> r;

    for (int i = 0; i < n; i++){
        int temp; 
        cin>>temp; 
        r[temp]++;
    }

    pair<int,int> highestx = make_pair(0,0);
    pair<int,int> highesty = make_pair(1e9,0);
    
    for (auto x: r) 
    {
        if (x.second > highestx.second || (x.second == highestx.second && x.first > highestx.first)){
            if (highestx.second > highesty.second){
                highesty = highestx;
            }
            highestx = x; 
        } 
        else if (x.second > highesty.second){
        highesty = x;
        } 
        else if (x.second == highesty.second){
            if (x.first > highesty.first && highesty.first > highestx.first){
                highesty = x;
            } 
            else if (x.first < highesty.first && highesty.first < highestx.first){
                highesty = x;
            }
        } 
    }
    cout<<abs(highestx.first - highesty.first);
}
