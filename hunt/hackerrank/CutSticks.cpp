#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

bool  isAllZero(vector<int> v)
{
    for (int i = 0; i < v.size(); i++) {
        if (v[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> numbers;
    
    while (N--) {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    
    sort(numbers.begin(), numbers.end());
    
    while (!isAllZero(numbers)) {
        cout << numbers.size() << endl;
        int min = numbers[0];
        for (int i = 0; i < numbers.size(); i++) {
            numbers[i] = numbers[i] - min;
        }
        while (numbers.size() > 0 && numbers[0] == 0) {
            numbers.erase(numbers.begin());
        }
    }
    
    return 0;
}