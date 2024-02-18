#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<double, double>> data(n);

    for (int i = 0; i < n; i++){
        cin >> data[i].first >> data[i].second;
    }
    sort(data.begin(), data.end());

    vector<double> speed;

    for (int i = 1; i < n; i++){
        double delta_t = data[i].first - data[i - 1].first;
        double delta_d = data[i].second - data[i - 1].second;

        if (delta_t == 0){
            speed.push_back(0);
        }
        else{
            double current_speed = (delta_d / delta_t);
            speed.push_back(abs(current_speed));
        }
    }
    sort(speed.begin(), speed.end(), greater<double>());

    cout<<fixed<<setprecision(1)<<speed[0]<<endl;
}
