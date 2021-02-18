#include<bits/stdc++.h>
using namespace std;

    void printN(int n)
    {
       if(n==1)
       {
           cout<<n<<" "
               <<"--";
           return ;
       }
       cout<<"#";
       printN(n-1);
       cout<<"*";
       cout<<n<<" ";
    }

int main()
{   
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    printN(n);
   
    return  0;
}

// ####1 --*2 *3 *4 *5