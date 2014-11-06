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
    int N;
    cin >> N;
    
    int occurance[26];
    
    for (int i = 0; i < 26; i++)
    {
        occurance[i] = N;
    }
    
    while (N--)
    {
        bool visited[26];
        for (int j = 0; j < 26; j++)
        {
            visited[j] = false;
        }
        
        string stone;
        cin >> stone;
        
        for (int k = 0; k < stone.size(); k++)
        {
            int index = (int)stone[k]-97;
            if (!visited[index])
            {
                visited[index] = true;
                occurance[index] = occurance[index] - 1;
            }
        }
    }
    
    int count = 0;
    
    for (int i = 0; i < 26; i++)
    {
        if (occurance[i] == 0)
        {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}