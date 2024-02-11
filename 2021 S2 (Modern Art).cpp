#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, k;
    cin>>m>>n>>k;

    vector<bool> row_state(m, false);
    vector<bool> col_state(n, false);

    char change;
    int index;

    for(int i = 0; i < k; i++) {
        cin>>change>>index;
        if(change == 'R') {
            row_state[index - 1] = !row_state[index - 1];
        } else if(change == 'C') {
            col_state[index - 1] = !col_state[index - 1];
        }
    }

    int gold = 0;
    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            if((row_state[i] && !col_state[j]) || (!row_state[i] && col_state[j])) {
                gold++;
            }
        }
    }

    cout<<gold<<endl;
}
