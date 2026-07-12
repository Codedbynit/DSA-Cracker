// inserting element and finding them
// type 1: insert x
// type 2: erase x
// type 3: find x returns yes if found else returns no

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    int Q;
    cin>>Q;

    while(Q--){
        int type,x;
        cin>>type>>x;

        if(type==1){
            s.insert(x);
        }
        else if(type==2){
            s.erase(x);
        }
        else{
            if(s.find(x)!= s.end()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}