#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double height[n+1];
    double width[n];
    
    for (int i = 0; i<=n; i++)
    {
        cin>>height[i];
    }
    for(int i =0; i<n; i++)
    {
        cin>>width[i];
    }

    double area = 0;
    for(int i = 0; i<n; i++){
        area += width[i]*(height[i]+height[i+1])/2;
    }
    cout << fixed << area;
}
