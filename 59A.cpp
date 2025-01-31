#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int upper=0, lower=0;
    cin>>x;
 
    for(char c : x){
        if(isupper(c))
            upper++;
        else
            lower++;
    }
 
    if(upper>lower){
        transform(x.begin(), x.end(), x.begin(), ::toupper);
    }
    else{
        transform(x.begin(), x.end(), x.begin(), ::tolower);
    }
    cout<<x;
}
