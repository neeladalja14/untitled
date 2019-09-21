#include <iostream>
using namespace std;

int main(){
    cout <<"press the following numbers for thee required selection: "<< endl;
    cout <<"1. addd records" << endl;
    cout <<"2. for deleting records: "<< endl;
    cout <<"3. view records: " << endl;
    cout <<"4. search records: " << endl;
    cout <<"5. quit...." << endl;

    cout << "enter the number for your selection: "<< flush;
    int value;
    cin >> value;
    if (value==1){
        cout<<"adding new records..."<<endl;
    }
    else if (value==2){
        cout<<"deleting records..."<<endl;
    }
    else if (value==3){
        cout<<"viewing records..."<<endl;
    }
    else if (value==4){
        cout<<"searching records..."<<endl;
    }
    else if (value==5){
        cout<<"quiting database..."<<endl;
    }
    else{
        cout<<"invalid number entered :( "<<endl;
    }
}