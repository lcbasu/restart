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

//the cases where {2} or {1, 2} is present is also YES for this program
bool isSpecialPrime(int num)
{
    if(num == 2)
        return false;
    for(int i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        
        vector<int> A;
        
        bool onePresent = false;
        bool primePresent = false;
        
        for(int i = 0; i < N; i++)
        {
            int tmp;
            cin >> tmp;
            if(tmp == 1)
                onePresent = true;
            primePresent = isSpecialPrime(tmp);
            A.push_back(tmp);
        }
        
        if(onePresent || primePresent)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}