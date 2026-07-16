// using number extraction


#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int N;
    cin>>N;

    while(N>0){
        int lastdigit = N%10;
        count +=1;
        N = N/10;
    }
    cout<<"Count of Number is : "<<count;

    return 0;
}