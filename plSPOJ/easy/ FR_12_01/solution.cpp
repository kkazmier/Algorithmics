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
    int minTime = 10000;
    int repeating = 0;
    vector<int> times;

    for(int i = 0; i < 3; i++){
        int time;
        cin >> time;
        times.push_back(time);
        minTime = min(time, minTime);
    }

    for(int i = 0; i < 3; i++){
        if(times[i] == minTime){
            repeating++;
        }
    }

    if(repeating > 1){
        cout << "NIE";
    } else {
        for(int i = 0; i < 3; i++){
            if(times[i] == minTime){
                cout << "TAK " << i + 1;
            }
        }
    }
}
