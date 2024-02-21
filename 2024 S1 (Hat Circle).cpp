#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> array(n);

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    int counter = 0;

    for(int i = 0; i < n; i++){
        if(array[i] == array[(i + n/2) % n]){
            counter++;
        }
    }
    cout<<counter<<endl;
}
