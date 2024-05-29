#include<bits/stdc++.h>
using namespace std;

class Student{
      public:
      string name;
      int roll;
      int marks;
};

bool sortArrayOfObjects(Student a, Student b){
     if(b.marks>a.marks){
        return false;
     }else if(b.marks<a.marks){
        return true;
     }else {
        if(b.roll>a.roll){
            return false;
        }else{
            return true;
        }
     }
}

int main(){
    int n;
    cin>>n;
    Student* a=new Student[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a, a+n, sortArrayOfObjects);

    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}