// Basic Syntax of Vectors 

#include <iostream>
#include <vectors>
using namespace std;

int main(){

    // declarations 

    vector<int> v; // declarations of vector
    vector<int> v(2,10); // (2,10) ---->  vector of size 2 and storing 10 in all size
    vector<int , int > v; // vector storing two elements in one place , in short pairs
    vector<pair <int , int>> v; // vectors in which elements are stored in pairs

    // v(5, 100) it says vector of size 5 with element 100 

    // functions 

    begin();
    end();
    erase();
    clear();
    rbegin();
    rend();

    // all these are used to implement the vector such as in traversing , deleting the element

    // itearators 

    vector <int> :: itearator it = v.begin;

    //instead of writing whole (vector <int> :: itearator it) we can write only (auto) only 

    auto it = v.begin();

    // auto is the data type which automatically understands which type of data we're using , so it uses required data type for 

    // we can display vecor in three ways
    // range based loop
    // index based using for loop
    // using itearators
    
    

    

}