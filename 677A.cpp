#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    int normal=0;
    

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        
        if(arr[i]<=h){
        normal++;
        }

        else{
            normal += 2;
        }
    }

    cout<< normal;
}
