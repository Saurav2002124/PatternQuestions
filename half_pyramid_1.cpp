#include<iostream>
using namespace std;

int main(){

    int n; 
    cin>>n;

    int k = n;

    //outer loop

    for(int row = 0; row<n; row++){
        

        //inner loop

        for(int col = 0; col < k; col++){
            
            //space 

            if(col < n-row-1){
                cout<<" ";
            }

            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}