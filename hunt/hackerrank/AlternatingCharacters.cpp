#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        
        vector<char> strVec;
        
        for (int i = 0; i < str.size(); i++) {
            strVec.push_back(str[i]);
        }
        
        int count = 0;
        
        for (int i = 0; i < strVec.size()-1; i++) {
            if (strVec[i] == strVec[i+1]) {
                strVec.erase(strVec.begin()+i);
                i--;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
