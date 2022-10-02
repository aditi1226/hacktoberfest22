#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    cin>>str;
    int cnt,sum;
    for(int i=str.size()-1; i>=0; i--)
    {
        if(str[i]=='1')
        {
            sum+=(pow(2,cnt));
        }
        cnt++;
    }
    cout<<sum;
}