// Sorting Vector using Algo sort() and INPUT by user

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin() , v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;

}
*/

/*
// Vector practice 

int main(){
    vector <int> v;
    
    int n = 4;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(12);
    v.emplace_back(4);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;

    cout<<v.size();

    range based loop

    for(int x :v){
        cout<<x << " ";
    }

//Displaying elements using iterator 


    vector <int> :: iterator it1 = v.begin();
    it1++;
    cout<<*(it1) <<" ";

    cout<<endl;

    vector <int> :: iterator it2= v.begin()+1;
    it2++;
    cout<<*(it2) <<" ";

    cout<<endl;

    for(vector <int>:: iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it) <<" ";
    }
 
    for (auto it = v.rbegin(); it != v.rend(); it++){
        cout<<*(it) << " ";
    }

    return 0;
}


// 
int main(){
    vector <pair <int , int>> v;

    v.push_back({1,2});
    v.emplace_back(3,4);

    for(auto it : v){
        cout<< it.first << " " << it.second <<endl;
    }
    cout<<endl;

    return 0;
}


// Q2 Erasing element from vector using v.erase() , input by user


int main(){
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter elements in vector : ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"vector is : ";
    for(auto x:v){
        cout<<x<<" ";
    }

    int pos;
    cout<<"Enter pos (from where you want remove element)";
    cin>>pos;
    v.erase(v.begin()+pos-1);

    cout<<endl;

    int a,b;
    cout<<"Enter range (a and b - all no will be erased in b/w this range ) : ";
    cin>>a>>b;
    v.erase(v.begin()+a-1 , v.begin()+b-1);

    cout<<v.size()<< " ";

    cout<<"Updated vector is : ";

    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
*/