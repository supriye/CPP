#include <bits/stdc++.h>
using namespace std;

void salary(int basic,char ch)
{
  double hra =  0.2 * basic;
   double da = 0.5 * basic;
   
   int allow;
    
    if(ch == 'A')
    {
    	allow = 1700;
	}   
    else if(ch == 'B')
    {
      allow = 1500;
	}  
    else
    {
      allow = 1300;	
	}
      
       
    double pf = 0.11 * basic;
    
    double totalsalary = basic + hra + da + allow - pf;
    
    int ans = round(totalsalary);
    cout<<ans;
}

int main() {
    //Write your code here
    int basic;
    cin>>basic;
    
    char ch;
    cin>>ch;
    
    salary(basic,ch);
    cout<<endl;

    return 0;
}
