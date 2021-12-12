#include<bits/stdc++.h>
using namespace std;

// int fact(int n)
// {
//     if(n==1)
//     {
//         return 1;   //base case
//     }
//      //recursive task
//     return n*fact(n-1); //self work
// }

// int fib(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     int prevfib=fib(n-1)+fib(n-2);
//     return prevfib;
// }

// int gpterm(int a,int r,int n)
// {
//   if(a==0 || a==1)
//   {
//       return a;
//   }
//   return (a * (int) (pow(r,n-1) ) );
// }

void towerofHanoi(int n,char src,char dest,char helper)
{
  if(n==0)
  {
      return;
  }
  towerofHanoi(n-1,src,helper,dest);
  cout<<"Move From "<<src<< " to "<<dest<<endl;
  towerofHanoi(n-1,helper,dest,src);
}

int main()
{
   towerofHanoi(3,'a','c','b');
    return 0;
}