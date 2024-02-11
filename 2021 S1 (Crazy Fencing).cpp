#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fences;
    cin>>fences;

    double height[fences+1];
    double width[fences];
    
    for (int i = 0; i<=fences; i++)
    {
        cin>>height[i];
    }
    for(int i =0; i<fences; i++)
    {
        cin>>width[i];
    }

    double area = 0;
    for(int i = 0; i<fences; i++){
        area += width[i]*(height[i]+height[i+1])/2;
    }
    cout<<fixed<<setprecision(2)<<area;
}
