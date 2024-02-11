#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;

    for (int t = 0; t < test_cases; t++) {
        int num_cars;
        cin>>num_cars;

        vector<int> cars(num_cars), branch;
        for (int i = 0; i < num_cars; i++) {
            cin>>cars[i];
        }

        int current_car = 1;
        bool possible = true;
        while (!cars.empty() && possible) {
            if (!branch.empty() && branch.back() == current_car) {
                branch.pop_back();
                current_car++;
            } else if (!cars.empty() && cars.back() == current_car) {
                cars.pop_back();
                current_car++;
            } else {
                if (!cars.empty()) {
                    branch.push_back(cars.back());
                    cars.pop_back();
                }
            }
            if (branch.size() > num_cars) {
                possible = false;
            }
        }

        if (possible) {
            cout<<"Y"<<endl;
        } else {
            cout<<"N"<<endl;
        }
    }
}
