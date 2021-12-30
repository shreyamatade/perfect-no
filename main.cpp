#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   /* Author: Shreya Matade*/
    //perfect no is sum of divisors of that no is the no itself
    int n; int sum=0;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(n==sum)
        cout<<"perfect"<<endl;
    else
        cout<<"not perfect"<<endl;
}
