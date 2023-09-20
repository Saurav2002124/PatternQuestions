#include<iostream>
using namespace std;
int main(){


int rowCount,colCount;
cin>>rowCount;
cin>>colCount;

    for(int row = 0; row<rowCount; row=row+1){

        // first row last row -> print 5*

        if(row == 0 || row == rowCount-1){

            for(int col = 0; col < colCount; col++){

            
            cout<<"* ";
            }
    }
    else{

        //first star

        cout<<"* ";

        //spaces 
        for(int i = 0; i < colCount-2; i = i+1){
            cout<<"  ";
           
        }

        //last star
       cout<<"*";
    }
    cout<<endl;
}

}
