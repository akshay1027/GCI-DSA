#include <iostream>

 #include <unordered_set>

 #include <string>

 using namespace std;

 int main(){

           string str;

           cin>>str;

          unordered_set<char>st;

          for(char x:str){

                        if(st.find(x)==st.end()) {

                         cout<<x;

                         st.insert(x);

                        }

             } 

   return 0;

}

