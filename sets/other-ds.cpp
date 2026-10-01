#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;


// inserting element in list
/*
int main(){
    list<int> ls;

    ls.push_back(12);
    ls.push_front(14);

    for (auto it : ls){
        cout<< it << " ";
    }

    return 0;
}


int main(){
    list<int> l = {1,2,3};

    l.push_back(9);
    l.push_front(10);

    auto it = l.end();
    advance (it,1);
    l.insert(it,100);

    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}




int main(){
    list<int> l = {1,2,3,4};

    cout<<"First element : " <<l.front()<<endl;
    cout<<"Last element : " <<l.back()<<endl;
    cout<<*next(l.begin(),2)<<endl;

    return 0;
}



// stack 

int main(){
    stack<int> s;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    s.push(1);
    s.push(2);
    s.emplace(3);

    if(!s.empty()){
        cout<<"stack is not empty"<<endl;
    }



    // cout<<s.top()<<" ";
    // cout<<s.size()<<" ";



    return 0;

}
*/


// Queue -  follows fifo

int main(){
    queue<int> q;

    int n;
    cout<<"Enter the size of queue :" ;// size of queue
    cin>>n;

    for(int i=0;i<n; i++){
        int x;
        cout<<"Enter the elements : ";
        cin>>x;
        q.push(x);
    }

    for(int i=0; i<q.size();i++){
        cout<<q.front();
        q.pop();
    }
    return 0;

}