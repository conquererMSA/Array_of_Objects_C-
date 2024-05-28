#include<bits/stdc++.h>
using namespace std;
class Student {
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
    //make comparison object
    Student mn;
    Student max;
    mn.marks=INT_MAX; // for minimum
    max.marks=INT_MIN; // for maximum
    for(int i=0; i<n; i++){
        //findout minimum marks contain object
        if(a[i].marks<mn.marks)
        mn=a[i];
       // findout maximum marks contain object
       if(a[i].marks>max.marks){
         max=a[i];
       }
    }
    cout<<"minimum marks: "<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    cout<<"maximum marks: "<<max.name<<" "<<max.roll<<" "<<max.marks<<endl;
    return 0;
}