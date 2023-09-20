#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;



    int start = c - n;

    for(int row = 0; row < n; row++){
        int k = start;

        for(int col = col <= n-row-1; col++){
            cout<<k;
            k++;
        }
        start = start-(n-row-1);
        cout<<endl;
    }
}