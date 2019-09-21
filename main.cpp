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
    if (value < 3) {
        cout <<"sorry the election is not allowed for you"<< endl;
    }
    else {
        cout<<"welcome to the database"<<endl;
    }

    if (value==5){
        cout<<"quiting the program "<<endl;
    }
    else {
        cout<<"program is still working "<<endl;
    }
}