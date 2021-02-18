#include<bits/stdc++.h>

using namespace std;

int main(){
    
    for(int i=1;i<=5;i++)
    {   
        int check=1;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && check)
            {
                cout<<"*";
                check=0;
            }
            else{
                cout<<" ";
                check=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
