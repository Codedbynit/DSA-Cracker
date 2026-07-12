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

*/
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