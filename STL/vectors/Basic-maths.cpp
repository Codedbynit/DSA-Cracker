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
*/

// Checking if number is palinedrome

int main(){
    int revNum =0;
    int N;
    cin>>N;
    int dup = N;

    while(N>0){
        int ld = N%10;
        revNum = (revNum*10)+ld;
        N = N/10;
    }
    if(dup==revNum) cout<<"Number Is Palinedrome.";
    else cout<<"Number Is Not Palinedrome.";

    return 0;

}