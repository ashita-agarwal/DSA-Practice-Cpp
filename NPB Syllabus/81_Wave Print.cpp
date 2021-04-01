#include <iostream>
using namespace std;
int main() {
    //2D array
    int r,c;
    cin>>r>>c;
    int a[100][100];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    for(int col=0;col<c;col++){
        if(col%2==0){
            for(int row=0;row<r;row++){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }else{
            for(int row=r-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
