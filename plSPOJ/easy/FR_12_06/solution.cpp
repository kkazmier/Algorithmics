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
    int pluses = 0;
    int minuses = 0;
    int grades;
    string sequence;

    cin >> sequence;
    for(int i = 0; i < sequence.size(); i++){
        if(sequence[i] == '+'){
            pluses++;
        } else {
            minuses--;
        }
    }

    grades = pluses + minuses;
    grades /= 3;

    if(grades == 0){
        cout << "BRAK";
    }else{
        if(grades > 0){
            for(int i = 0; i < grades; i++){
                cout << "5 ";
            }
        }else if(grades < 0){
            for(int i = 0; i < grades * (-1); i++){
                cout << "1 ";
            }
        }
    }
}
