#include<iostream>
using namespace std;

int main(){

    int num;

    cout<< "Enter marks:";
    cin>> num;
    
    if(num > 90)
    {
        cout<<"A" << endl;
    }
    else if(num > 80)
    {
        cout<<"B"<< endl;
    }
    else
    {
        cout<<"C"<< endl;
    }
   

}