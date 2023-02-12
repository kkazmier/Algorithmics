#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <queue>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

//ios_base::sync_with_stdio(0);

int main() {
    //cout<<setprecision(2)<<fixed;
    int n;
    int number;
    string name;
    int populatedBuildings = 0;
    vector<int> buildings(1001, 0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number >> name;
        buildings[number]++;
    }

    for(int i = 0; i < buildings.size(); i++){
        if(buildings[i] > 0){
            populatedBuildings++;
        }
    }

    cout << populatedBuildings;
}
