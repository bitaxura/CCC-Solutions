#include <iostream>
using namespace std;

int main() {
    int n, counter = 0;
    cin>>n;

    for(int i = 0; i*4<=n; i++)
        if((n - 4*i) % 5 == 0)
            counter++;
    cout<<counter<<endl;
}
