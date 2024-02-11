#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int counter = 0, i = 1;

    while (pow(i, 6)<=b)
    {
        if(pow(i, 6) >= a)
        {
            counter++;
        }
        i++;
    }
    cout<<counter<<endl;
}
