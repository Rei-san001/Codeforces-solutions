#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;

    int steps = n/5;
    

    if(n%5>0){
        count++;
    }

    int total = steps+count;

    cout<< total;
    
}
