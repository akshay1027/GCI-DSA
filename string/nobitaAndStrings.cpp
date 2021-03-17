#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{

    int testCases; 
    cin>>testCases;
    cin.ignore(1,'\n');
    while(testCases--)

    {
        string s;
        getline(cin,s);  // get full line of strings/words.

        s += " ";
        string result = "", temp_string = ""; // result to store final string, temp_string to do calculations!

        for(ll i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')  temp_string += s[i]; //check for space

            else
            {
                result = temp_string + " " + result;
                temp_string = "";
            }
        }
        
        // check for special test cases.
        
        if(result[0] == ' ') result = result.substr(1,result.length());

        if(result[result.length()-1] == ' ') result = result.substr(0,result.length()-1);

        cout<<result<<endl;
    }
    return 0;
} 