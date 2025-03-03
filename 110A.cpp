#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin>>t;

    int count=0;

    for(int i=0; i<t.length(); i++){

        if(t[i]=='4' || t[i]=='7'){
            count++;
        }
    }

    if(count==4 || count==7){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
