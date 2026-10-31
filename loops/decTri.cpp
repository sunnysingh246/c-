// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    for(int i=5;i>=1;i--){
        cout<<"\n";
        for(int j=1;j<i;j++){
            cout<<"*";
        }
    }
    return 0;
}

