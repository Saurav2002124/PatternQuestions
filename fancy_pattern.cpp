#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    

    //Outer loop

    for(int row = 0; row < n; row++){
    //Hamara number ka index ka starting

    int start_num_index = 8-row;

    //Kaun sa number print krwan ahai

    int num = row+1;

    int count_num = num;

    //Inner Loop

    for(int col = 0; col<17; col++){
        if(col == start_num_index && count_num > 0){

            cout<<num;
            start_num_index+=2;
            count_num--;
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
    }

}