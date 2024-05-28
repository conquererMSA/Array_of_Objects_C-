#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int clss;
    int marks;
    //ekhane constructor function neya lagbe na
};

int main(){
    int n;
    cin>>n;
    //create dynamic array of objects
    Student* a=new Student[n];
    // ekhane a ekti n songkhok object er array. ar protiti object hocce Student type er zekhane name, clss and marks thakbe.

    //run loop for n-1 times and get input for every objects
    for(int i=0; i<n; i++){
        getchar();
        getline(cin, a[i].name);
        cin>>a[i].clss>>a[i].marks;
    }
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].clss<<" "<<a[i].marks<<endl;
    }
    return 0;
}