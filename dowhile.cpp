#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter number =";
    // cin>>n;
    // int i = 0;  //initialization
    // do
    // {
    //     cout<<"\n"<<n*i;
    //     i++;  //increment
    // }
    // while(i<=10);   //condition

   //   // example 2
   // for (int i = 5; i>= 0; i--) {
   //    cout << i << "\n";
   //  }

   //  //example 3
   //  int n = 0;
   //  do{
   //    if(n%2 == 0)
   //    {
   //       cout<<n<<"\n";
   //    }
   //    n++;
   //  }
   //  while(n<=10);

   // int a , c =0;
   // cout<<"enter a =";
   // cin>>a;
   // do
   // {
   //    cout<<c<<"\n";
   //    c++;
   // }
   // while(c<=a);

   int a ;
   cout<<"enter a =";
   cin>>a;

   int sum = 0;
   int i =1;
   do{
      sum = sum + i;
      i++;
   }
   while(i<=a);
   cout<<sum;
    
}
