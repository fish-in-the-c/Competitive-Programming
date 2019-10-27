#include<algorithm>
#include<iostream>
#include <string>
using namespace std; 
typedef long long ll;
bool isSafe(int board[][10], int i, int j, int n)
{
	for (int row = 0; row < i; ++row)
	{
		if(board[row][j]==1)
			return false;
	}
	
	int x=i;
	int y=j;
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y--;
	}
	x=i;
	y=j;
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y++;
	}
	return true;
}
bool solveNQueen(int board[][10], int i, int n)
{
	if(i==n)
	{
		for(int a=0;a<n;a++)
		{
			for(int b=0;b<n;b++)
			{
				cout<<board[a][b]<<" ";
			}
			cout<<endl;
		}
		cout<<std::endl;
	}
	for (int j = 0; j < n; ++j)
	{
		if(isSafe(board, i,j,n))
		{
			board[i][j]=1;
			bool nextQueen=solveNQueen(board, i+1, n);
			if(nextQueen)
			{
				return true;
			}
			else{
				board[i][j]=0;
			}
		}
	}
	return false;
}
int main(){
		#ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int board[10][10]={0};
	solveNQueen(board,0,n);

	return 0;
}
