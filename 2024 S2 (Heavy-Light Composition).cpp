#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int t, n;
    cin>>t>>n;

    map<char, int> hash;

    for(int i = 0; i<t; i++){
        string word;
        cin>>word;

        for(char c: word){
            hash[c]++;
        }

        for(int j = 0; j<n; j++){
            if((hash[word[j]] > 1 && hash[word[j+1]] > 1) || (hash[word[j]] == 1 && hash[word[j+1]] == 1)){
                cout<<"F"<<endl;
                break;
            }
            else if (j==n-1){
                cout<<"T"<<endl;
            }
        }
        hash.clear();
    }   
    }
