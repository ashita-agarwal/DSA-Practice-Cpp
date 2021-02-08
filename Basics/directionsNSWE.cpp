#include <iostream>
using namespace std;
int main() {
    char ch;
    int x=0,y=0;
    ch=cin.get();
    while(ch!= '\n'){
        if (ch=='S'){
            y--;
        }
        else if(ch=='N'){
            y++;
        }
        else if(ch=='E'){
            x++;
        }else{
            x--;
        }
        ch=cin.get();
    }
    //find quadrant
    if(x<=0 and y<=0){
        //I quadrant
        for (int i=0;i<x;i++){
            cout<<"E";
        }
        for (int i=0;i<y;i++){
            cout<<"N";
        }
    }else if(x<=0 and y<=0){
        //II quadrant
        x*=-1;
        for (int i=0;i<x;i++){
            cout<<"W";
        }
        for (int i=0;i<y;i++){
            cout<<"N";
        }
    }else if(x<=0 and y<=0){
        //III quadrant
        x*=-1;
        for (int i=0;i<x;i++){
            cout<<"W";
        }
        y*=-1;
        for (int i=0;i<y;i++){
            cout<<"S";
        }
    }else{
        //IV quadrant
        
        for (int i=0;i<x;i++){
            cout<<"E";
        }
        y*=-1;
        for (int i=0;i<y;i++){
            cout<<"S";
        }
    }
    return 0;
}