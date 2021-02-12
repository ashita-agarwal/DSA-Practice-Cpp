#include <iostream>
using namespace std;
int main() {
    char a[100]; //char array--at max 100 buckets in this array
    //cin>>a; //ignores white spaces
    //cout<<a<<endl;
    cin.getline(a, 100);
	cout << a << endl;

    // //1st way of taking input along with whitespace
    // char ch; //char bucket
    // int i=0;
    // ch = cin.get();
    // while(ch!='\n'){
    //     a[i]=ch;
    //     i++;

    //     ch=cin.get();
    // }
    // a[i]='\0' ; //insert null at the end of a string
    // cout<<a<<endl;
    
    //2nd way 
    // cin.getline(a,100);
    // cout<<a;

    //3rd way
    // cin.getline(array_name,sizeofArray,delimiter);
    // delimiter is optional, by default delimiter is '\n'
    // cin.getline(a,100,'@');//delimiter
    // cout<<a;

    //if size of array is 10 it will only read 10-1(null takes one place) characters from string
    return 0;
}
