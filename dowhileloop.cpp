//
// Created by neel adalja on 9/22/2019.
//
#include <iostream>
using namespace std;

int main(){
    const string password = "hello";
    string input;

    do{
        cout<<"enter the password: "<< flush;
        cin>> input;

        if(input != password);{
            cout<< "access denied"<< endl;
        }
    } while(input != password);

    cout<< "access granted" << endl;

}
