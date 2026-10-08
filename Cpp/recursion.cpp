// when a function calls it self again and again then it is known as recursion 


#include <iostream>
using namespace std;
/*
void pname(string name ,int n){
    if (n<1){
        return;
    }
    cout<<name<<endl;
    pname(name, n-1);
}

int main(){
    pname("Nityansh",5);
    return 0;

}




// printing numbers linearly

void PrintNum(int num , int n){
    if (num>n){
        return;
    }
    cout<<num<<endl;
    PrintNum(num+1,n);
}

int main(){
    PrintNum(1,10);
    return 0;
}



// printing n-1 number

void pnum(int num, int n){
    if(num<=0){
        return;
    }
    cout<<num<<endl;
    pnum(num-1,n);
}

int main(){
    pnum(5,6);
    return 0;
}



// printing to n-1 by backtracking 

void pnum(int num , int n){
    if(num>n){
        return;
    }
    pnum(num+1,n);
    cout<<num<<endl;
}

int main(){
    pnum(1,5);
    return 0;
}


// printing sum of n numbers

void psum(int num , int sum){
    if(num ==1){
        cout<<"Accumulated sum of numbers is : "<<sum;
        return;
    }
    psum(num-1,sum+num);
}

int main(){
    psum(10,0);
    return 0;
}

*/

// functional recursion 



int factofnum(int num){
    if(num==1){
        return 1;
    }
    return num*factofnum(num-1);
}

int main(){
    int num =5;
    cout<<"factorial of num : "<<factofnum(num);
    return 0;
}