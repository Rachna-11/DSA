#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char name[20];
    cout << "Enter a string:";
    cin.getline(name,20);

    cout << endl;

    for (int i = 0; i < strlen(name); i++)
    {
        cout.write(name,i);
        cout << endl;

    }

    for (int  i =  strlen(name); i > 0; i--)
    {
        cout.write(name,i);
        cout << endl;
    }
    
    
}