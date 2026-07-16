// using number extraction

#include <iostream>
using namespace std;

/*
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

*/
// Reversing number using number extraction

int main(){
    int revNum = 0;
    int N;
    cin>>N;

    while(N>0){
        int ld = N%10;
        revNum = (revNum * 10)+ld;
        N = N/10;
    }
    cout<<"Reversed Number is : "<<revNum;

    return 0;

}