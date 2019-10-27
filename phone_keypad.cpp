#include<algorithm>
#include<iostream>
#include <string>
using namespace std; 
typedef long long ll;
char globalArr[][10] ={"", "","ABC","DEF","GHI","JKL","MNO","PQRS","TUV", "WXYZ"};
void keypad(char * input, char* output, int i, int j)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	int digit=input[i]-'0';
	for(int k=0;globalArr[digit][k]!='\0';k++)
	{
		output[j]=globalArr[digit][k];
		keypad(input,output,i+1,j+1);
	}
}
int main(){
		#ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif


	ll t;
	cin>>t;
	while(t--)
	{
		char input[1000],output[1000];
		cin>>input;
		keypad(input, output,0,0);
		
	}

	return 0;
}
