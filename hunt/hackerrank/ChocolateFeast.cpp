#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,n,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>m;
        int answer=0;
        
        int total_wrapper = n/c;
        int wrapper_needed = m;
        
        answer = total_wrapper;
        
        int count = 0;
        
        while (total_wrapper >= wrapper_needed)
        {
            total_wrapper = (total_wrapper-wrapper_needed) + 1;
            count++;
        }
        
        answer = answer + count;
        
        cout<<answer<<endl;
    }
    return 0;
}
