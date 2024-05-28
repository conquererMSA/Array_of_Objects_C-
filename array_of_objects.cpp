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
    //ekhane a hocce array zar moddhye n songkhok Student er object ache. a[i] mane hocce array a er i tomo index er kuno ekti Student data type er object. tahole a[i] hocce ekta object. ar ekti object er value .(dot) diye access korte hoy.
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].clss<<" "<<a[i].marks<<endl;
    }
    return 0;
}