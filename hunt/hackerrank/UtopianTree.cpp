#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int treeHeight = 1;
        int N;
        cin >> N;
        while(N > 0)
        {
            if(N > 0)
            {
                treeHeight = treeHeight*2;
                N--;
            }
            if(N > 0)
            {
                treeHeight = treeHeight + 1;
                N--;
            }
        }
        cout << treeHeight << endl;
    }

    return 0;
}