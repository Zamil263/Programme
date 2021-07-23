#include<iostream>
using namespace std;
void converter(int *g);
int main(){
    int gram;
    cout<<"enter grams ";
    cin>>gram;
    converter(&gram);
    return 0;
}
void converter(int *g){
    int kg;
    kg=*g/1000;
    cout<<"kilogram= "<<kg;

}