#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int a;
    cin>>a;

    vector<pair <string,string>> together;
    string y, z;

    for(int i = 0; i<a; i++){
        cin>>y>>z;
        together.push_back({y, z});
    }

    int b;
    cin>>b;

    vector<pair<string, string>> apart;
    string m, n;

    for(int j = 0; j<b; j++){
        cin>>m>>n;
        apart.push_back({m, n});
    }

    int c;
    cin>>c;
    
    map<string,int> groups;
    string p, q, r;

    for(int k = 1; k<=c; k++){
        cin>>p>>q>>r;
        groups[p]=groups[q]=groups[r]=k;
    }

    int constraints = 0;

    for(auto &i:together){
        if(groups[i.first]!=groups[i.second])
        {
            constraints++;
        }
    }
    for(auto &i:apart){
        if(groups[i.first]==groups[i.second])
        {
            constraints++;
        }
    }
    cout<<constraints;
}
