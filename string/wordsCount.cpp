#include<bits/stdc++.h>
using namespace std;


/* cin with strings, we can take only one word ( after space is entered, cin will stop getting input.)
   getline will get input even after entering space, so for strings getline is used!

    Eg for CIN:

    string fullName;
    cout << "Type your full name: ";
    cin >> fullName; 
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John 

    Eg for GETLINE:

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe


*/
int main()
{
    string words;
    int count=1;


    getline (cin, words);
    
    if(words.length()==0)
    {
        cout<<"0"<<endl;
        return 1;
    }

    for(int i=0;i<words.length();i++)
    {
        if(words[i]==' ')  // in c++, " " is different from ' '. remember this is not javaScript.
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}