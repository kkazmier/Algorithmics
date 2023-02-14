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
    int n;
    string string, command;

    cin >> n;
    while(n--){
        cin >> command;
        char letter;
        int lettersCount;
        switch(command[0]){
            case 'D':
                cin >> letter;
                string += letter;
                break;
            case 'U':
                cin >> lettersCount;
                if(lettersCount >= string.size()){
                    string.clear();
                }else{
                    string.erase(string.end() - lettersCount, string.end());
                }
                break;
            case 'Z':
                cin >> letter;
                if(!string.empty()){
                    string[string.size() - 1] = letter;
                }
                break;
        }
    }

    cout << string;
}
