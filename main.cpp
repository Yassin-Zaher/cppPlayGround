#include <iostream>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> arr =  {2, 8, 30, 15, 25, 12};
    set<int> my_set;
    set<int> ciels;
    for (int i: arr) {
        ciels.insert(i);
    }

    for(int i = 0; i < arr.size(); i++){
        int upper_bound = 10000;
        for (int j = 0; j < i ; j++) {
            if(arr[j] >= arr[i]){
                upper_bound = min(upper_bound, arr[j] - arr[i]);
            }
        }
        if(upper_bound == 10000){
            cout<<-1<< " ";
        }else{
            cout<< arr[i] + upper_bound<< " ";
        }

    }

//    for(auto ciel = ciels.begin(); ciel != ciels.end(); ciel++){
//        auto upper_bound = ciels.upper_bound(*ciel);
//        cout<<*ciel << " ";
//    }



    return 0;
}

