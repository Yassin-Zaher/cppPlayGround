#include <iostream>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> arr =  {2, 8, 30, 15, 25, 12};
    set<int> set;
    cout<<-1 << " ";
    set.insert(arr[0]);

    int lower_bound = 10000;
    for(int i = 1; i < arr.size(); i++){
        lower_bound = *set.lower_bound(arr[i]);
        if(lower_bound != *set.end()){
            cout<< lower_bound<< " ";
        }else {
            cout<< -1 << " ";
        }

        set.insert(arr[i]);
    }
    return 0;
}
