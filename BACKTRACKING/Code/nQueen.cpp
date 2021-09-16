#include<bits/stdc++.h>
using namespace std;

int countpath = 0;
bool isItSafe(vector<vector<bool> > &grid , int row, int col, int n)
{
    for(int i = row - 1;i >= 0; i--) //for coloumn
    {
        if(grid[i][col])
            return false;
    }
    for(int i = row - 1 , j = col - 1; i>=0 and j>=0;i--,j--) //right upper digonal
    {
        if(grid[i][j])
            return false;
    }
    for(int i = row - 1 , j = col + 1; i>=0 and j<n;i--,j++)  //left upper digonal
    {
       if(grid[i][j])
            return false;
    }
    return true;
}
void display(vector<vector<bool> > &grid, int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j])
            {
               cout<<"Q "<<" ";
               
            }
            else {
                cout<<". ";
            }
               
        }
        cout<<endl;

    }
      cout<<"\n\n";
}

void countNQueen(vector<vector<bool> > &grid, int curr_row, int n)
{
   if(curr_row == n)  //Base case
   {
       countpath++;
       display(grid,n);
       return;
   }
   for(int i = 0;i < n; i++)   // iterative All The path Row Wise
   {
    if(isItSafe(grid,curr_row,i,n))
     {
       grid[curr_row][i] = true; // first inistalize The Path
       countNQueen(grid, curr_row+1, n); //Recursive Work
       grid[curr_row][i] = false;  // return The original State
       
     }
  }
  
}

int main()
{ 
    int n;
    cin>>n;
    vector<vector<bool> > grid(n, vector<bool> (n, false));  // initlaize the vector
    countNQueen(grid, 0, n);
    cout<<countpath<<endl;

    return 0;
}
