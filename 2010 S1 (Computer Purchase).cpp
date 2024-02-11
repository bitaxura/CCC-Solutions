#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair<string, int> spec1 ("", 0);
    pair<string, int> spec2 ("", 0);

    int n;
    cin>>n;

    for (int i = 0; i<n; i++)
    {
    string name;
    int r, s, d, total;

    cin>>name;
    cin>>r>>s>>d;

    total = (2*r)+(3*s)+d;

    pair<string, int> spec3 (name, total);

    if (spec3.second > spec1.second || (spec3.second == spec1.second && spec1.first[0] > name[0])) 
    {
        spec2 = spec1;
        spec1 = spec3;
    } 
    else if (spec3.second > spec2.second || (spec3.second == spec2.second && spec2.first[0] > name[0])) 
    {
        spec2 = spec3;
    }
    }

    cout<<spec1.first<<endl;
    cout<<spec2.first;
}
