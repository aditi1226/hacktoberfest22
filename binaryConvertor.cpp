#include <bits/stdc++.h>
using namespace std;


int main() {
    int num;
    deque<int>v;
    cin>>num;
    while(num>0)
    {
        int rem = num%2;
        v.push_front(rem);
        num/=2;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
}
