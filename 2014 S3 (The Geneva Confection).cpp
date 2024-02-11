#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T = 0;
	cin>>T;

	for(int i = 0; i < T; i++){

		int a = 0;
		cin>>a;

		vector<int> cars(a), branch;
		for(int j = 0; j < a; j++)
        {
            int x = 0;
            cin>>x;
			cars[j] = x;
		}

		for(int j = 1, current = 0; j <= a; j++){

			if(branch.size() != 0)
            {
				if(branch[branch.size() - 1] == j)
                {
					branch.pop_back();
					current = j;
					continue;
				}
			}

			for(int k = cars.size(); k >= 1; k--)
            {
				if(cars[k - 1] == j){
					cars.pop_back();
					current = j;
					break;
				}else{
					branch.push_back(cars[k - 1]);
					cars.pop_back();
				}
			}
			if (current != j) 
            {
				break;
            }
		}

		if(cars.size() == 0 && branch.size() == 0){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
	}
}
