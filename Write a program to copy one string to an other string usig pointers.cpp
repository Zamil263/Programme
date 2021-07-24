#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,*ptr;
    //cin.get(str,20); for c style string
    getline(cin,str);// user input
    ptr=&str;
    cout<<*ptr;
    return 0;
}

