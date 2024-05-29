#include<bits/stdc++.h>
using namespace std;

class Student{
      public:
      string name;
      int roll;
      int marks;
};

bool sortArrayOfObjects(Student a, Student b){
    //function e Student er pashapashi duita object recieve korte hobe. aifunction sob somoy condition theke true/ false return korbe. return value zodi true hoy tahole swap hobe na kintu false hole swap hobe.
     if(a.marks==b.marks){
        //ekhane duita object er marks same hole roll dhara sort hobe. a er roll zodi b er roll theke chuto hoy tahole true return korbe and swap hobe na. duita object zae zar nije index e thakbe. ekhon a er roll zodi b er roll theke boro hoto tahole false return hoto and swap hoye b object a object er samne obostan korto, orthat index porivorton hoto.
        return a.roll<b.roll;
     }else{
        return a.marks>b.marks;
        //ekhane zodi a er marks b er marks theke chuto hoto tahole false return hoto and tader index swap hoto. ekhon a er marks zodi b er marks theke boro hoy tahole true return korbe and swap hobe na.object nij nij index e obostan korbe.
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