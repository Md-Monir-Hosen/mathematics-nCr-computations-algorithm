#include<bits/stdc++.h>
using namespace std;
int binomialCoeff(int n,int k)
{
    if(k>n)
        return 0;
    if(k==0 || k==n)
        return 1;
    return binomialCoeff(n-1,k-1)+binomialCoeff(n-1,k);
}
int RencontresNumber(int n,int m)
{
    if(n==0 && m==0)
        return 1;
    if(n==0 && m==1)
        return 0;
    if(m==0)
        return (n - 1) * (RencontresNumber(n - 1, 0) + RencontresNumber(n - 2, 0));
     return binomialCoeff(n, m) * RencontresNumber(n - m, 0);
}
int main()
{
    int n = 7, m = 2;
    cout << RencontresNumber(n, m) << endl;
    return 0;
}
