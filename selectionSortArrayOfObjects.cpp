#include<bits/stdc++.h>
using namespace std;
class Student{
      public:
      string name;
      int roll;
      int marks;
};

int main(){
    int n;
    cin>>n;
    Student* a=new Student[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    //selectionSort based on marks and roll by two pinters technic
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j].marks>a[i].marks){
                swap(a[j], a[i]);
            }
            else if(a[j].marks==a[i].marks){
                if(a[j].roll>a[i].roll){
                    swap(a[i].roll, a[j].roll);
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}