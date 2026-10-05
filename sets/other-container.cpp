#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
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


// acessing stack elements

// int main(){
//     stack<int> s;

//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         s.push(x);
//     }
//     while(!s.empty()){
//         cout<<s.top();
//         s.pop();
//     }

//     return 0;
// }


// Deque 

int main(){
    deque<int> dq;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    for(int x:dq){
        cout<< x <<" ";
    }
    return 0;
}


// sets

int main(){
    set<int> s1,s2;

    s1 = {1,2,3,4,5,6};

    for (auto x : s1){
        cout<<x << " ";
    }

    auto it = s1.find(2);

    if (it!= s1.end()){
        cout<<"\nElement found : " << *it <<endl;
    }

    auto kt = s1.erase(2);

    if (it!=s1.end()){
        cout<<"\nElement deleted : "<< *it <<endl;
    }

    for (auto x :s1){
        cout<< x << " ";
    }

    cout<<endl;

    s1.insert(10);

    for (auto x :s1){
        cout<< x << " ";
    }

    
    return 0;
}
*/

// unordered set

int main(){
    unordered_set<int> us = {1,2,3,4,5,6};

    for (auto x: us){
        cout<< x << " ";
    }

    us.erase(6);
    us.insert(100); 

    cout<<endl;

    for (auto x: us){
        cout<< x << " ";
    }
    
    // find

    auto it = us.find(100);

    if(it != us.end()){
        cout<<"\nElement found : " <<*it;
    }

    cout<<endl;

    for(auto it = us.begin(); it!=us.end(); it++){
        cout<< *it << " ";
    }
    return 0;
}
