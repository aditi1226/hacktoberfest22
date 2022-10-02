#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, n1, m1, i, j, k;
    cout<<"Enter the no. of rows & columns for 1st matrix : ";
    cin >>n >>m;
    cout<<"Enter the no. of rows & columns for 2nd matrix : ";
    cin>>n1>>m1;
    while (m!=n1)
    {
        cout<<"Invalid input";
        cout<<"Enter the no. of rows & columns for 1st matrix : ";
        cin>>n>>m;
        cout<<"Enter the no. of rows & columns for 2nd matrix : ";
        cin>>n>>m;
    }
    int a[n][m], b[n][m], c[n*m][n*m];
    memset(c,0,sizeof c);
    cout<<"Enter 1st matrix :\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter 2nd matrix :\n";
    for(i=0; i<n1; i++)
    {
        for(j=0; j<m1; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<n; i++)
        for(j=0; j<m1; j++)
            for(k=0; k<m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

    cout<<"The Resultant Matrix :"<<"\n";
    for(i= 0; i<n; i++)
    for(j=0; j<m1; j++)
    {
        cout<< " " <<c[i][j];
        if(j==m1-1)
            cout<<endl;
    }

    return 0;
}
