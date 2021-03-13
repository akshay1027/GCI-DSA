#include <iostream>

using namespace std;

int main() 
{
    int test;
	cin>>test;
	while(test--)
	{
    int check=0;
	string s;
	cin>>s;

	for(int i=0, j=s.length()-1;i<s.length();i++,j--)
    {
		if(i<j)
		{
			if(s[i]!=s[j])
			{
				cout<<"NO"<<endl;
				check=1;
				break;
			}
		}
	}
    
	if(check==0)
	{
	cout<<"YES"<<endl;
	}
	}
	return 0;

} 