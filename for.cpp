#include<iostream>
using namespace std;
int main(){

    int n , count = 0;
    cout<<"enter n =";
    cin>>n;

    // for(int i =1;i<=10;i++)
    // {
    //     cout<<n*i<<"\n";
    // }

for(int i = 1;i<=n;i++)
{
        if (n%1 && n%n)
        {
           count++;
           cout<<count;
        }
    
}  } 
