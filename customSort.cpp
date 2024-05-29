#include <bits/stdc++.h>
using namespace std;

class Freq {
    public:
    char charec;
    int count;
};
bool sortArrayOfObjects(Freq a, Freq b){
     if(a.count==b.count){
        return a.charec<b.charec;
     }else{
        return a.count>b.count;
     }
}
int main() {
    string sen;
    cin >> sen;
    Freq a[26];

    // Initialize 0 count of every character by looping;
    for (int i = 0; i < 26; i++) {
        a[i].charec = char('a' + i);
        a[i].count = 0;
    }
     
     for(char c:sen){
        int frqIndex=int(c-'a');
        a[frqIndex].count++;
    }
    //sorting arrya of objects by sort func
    sort(a, a+26, sortArrayOfObjects);
    
    string sortedString;
    for(int i=0; i<26; i++){
        if(a[i].count>0){
            for(int j=0; j<a[i].count; j++){
               sortedString+=a[i].charec;
            }

        }
    }
    cout<<sortedString;
    return 0;
}
