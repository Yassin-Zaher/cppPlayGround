#include <iostream>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <vector>

using namespace std;

// naive approach
void findLeftCeiling(){
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
}

// log n solution
void findLeftCeilingTree(){
    vector<int> arr =  {2, 8, 30, 15, 25, 12};
    set<int> set;
    int lower_bound;
    for(int i = 1; i < arr.size(); i++){
        lower_bound = *set.lower_bound(arr[i]);
        if(lower_bound != *set.end()){
            cout<< lower_bound<< " ";
        }else {
            cout<< -1 << " ";
        }

        set.insert(arr[i]);
    }



}

