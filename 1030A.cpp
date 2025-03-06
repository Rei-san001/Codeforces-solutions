#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    bool hard = false;  // Use a boolean to check for any 1
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num > 0){
            hard = true;
        }
    }

    cout<<(hard? "HARD" : "EASY");
}
