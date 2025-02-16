#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sum, newsum;
    cin>>sum;

    for(int i=0; i<sum.size(); i++){
        if(sum[i]!='+'){
            newsum.push_back(sum[i]);
        }
    }
    sort(newsum.begin(), newsum.end());
    cout<<newsum[0];
    for(int i=1; i<newsum.size(); i++){
        cout<<"+"<<newsum[i];
    }
}
