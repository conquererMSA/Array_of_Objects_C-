#include<bits/stdc++.h>
using namespace std;
class Freq{
    public:
    char value;
    int count;
};
bool cmp(Freq a, Freq b){
    if(a.count==b.count){
  return a.value<b.value;
    }else{
    return a.count>b.count;
    }
}
int main(){
    string s;
    cin>>s;
    Freq f[26];
    for(int i='a'; i<='z'; i++){
        // cout<<char (i)<<endl;// a b c d

        f[i-97].value=char (i);
        f[i-97].count=0;
    }
    for(char c:s){
        f[c-97].count++;
    }
    sort(f, f+26, cmp);
    for(int i='a'; i<='z'; i++){
        for(int j=0; j<f[i-97].count; j++){
            cout<<f[i-97].value;
        }
    }

    return 0;
}