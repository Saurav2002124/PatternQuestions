#include<iostream>
using namespace std;
int main(){

for(int row = 0; row<3; row=row+1){

    //first row and last row --> 5*
    if(row == 0 || row == 2){
        for(int col = 0; col < 5; col=col+1){
            cout<<"*";
        }
    }
    else{

        // first star

        cout<<"*";

        //spaces 

        for(int i = 0; i<3; i=i+1){
            cout<<" ";

        }

        //Last star

        cout<<"*";
    }
    cout<<endl;
}

}