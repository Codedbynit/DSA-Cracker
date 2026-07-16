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

//  Finding complete divisors of Numbers

int main(){
    int N;
    cin>>N;
    int dup = N;

    for(int i=1; i<N; i++){
        if(dup%i == 0) cout<<i<<",";
    }
    return 0;
}


// Checking if number is armstrong

#include <iostream>
using namespace std;

bool IsArmstrong(int N){
    int Numb = N;
    int sum = 0;
    while(N>0){
        int ld = N%10;
        sum +=(ld*ld*ld);
        N = N/10;
    }
    return Numb == sum;
}

int main(){
    int N;
    cin>>N;
    if(IsArmstrong(N)) cout<<"True";
    else cout<<"False";

    return 0;
}
*/
//Checking if number is prime

int main(){
    int N;
    cin>>N;
    int count =0;

    for(int i=1; i*i<=N;i++){
        if(N%i ==0){
            count++;
        if((N/i) != i){
            count++;
        }
    }
    }
    if(count ==2) cout<<"Number is prime";
    else cout<<"Number is not prime";

    return 0;
}