#include <iostream>
using namespace std;

int main(){

/**a = (n==12)?12:a  ;
cout<<"The value of a is "<<a<<endl;**/

int currval =0;
int val =0;
int num;

cout<<"Enter a set of numbers ";
if(cin>>currval){
    int cnt = 1;
    while(cin>>val){
        if(val==currval)
        {
           cnt+=1;
        }
        else{
            cout<<"The number count of "<<currval<< " is "<<cnt<<endl;
            currval = val;
            cnt = 1;
        }
         
    }
   cout<<"The number count of "<<currval<< " is "<<cnt<<endl;
}




}
