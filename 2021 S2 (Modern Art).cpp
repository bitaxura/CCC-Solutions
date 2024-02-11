#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols, choices;
    cin>>rows>>cols>>choices;

    vector<bool> row_state(rows, false);
    vector<bool> col_state(cols, false);

    char change;
    int index;

    for(int i = 0; i<choices; i++) {
        cin>>change>>index;
        if(change == 'R') {
            row_state[index - 1] = !row_state[index - 1];
        } else if(change == 'C') {
            col_state[index - 1] = !col_state[index - 1];
        }
    }

    int gold = 0;
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            if((row_state[i] && !col_state[j]) || (!row_state[i] && col_state[j])) {
                gold++;
            }
        }
    }
    cout<<gold<<endl;
}
