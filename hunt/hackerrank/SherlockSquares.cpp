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

int main()
{
    int T;
    
    cin >> T;
    
    while(T--)
    {
        int A, B;
        
        cin >> A >> B;
        
        int firstSquaredNum = ceil(sqrt(A));
        int lastSquaredNum = floor(sqrt(B));
        
        if(lastSquaredNum < firstSquaredNum)
            cout << 0 << endl;
        else if(firstSquaredNum == lastSquaredNum)
            cout << 1 << endl;
        else
            cout << 2+((lastSquaredNum-firstSquaredNum)-1) << endl;
        
    }
    return 0;
}