#include <iostream>
#include<string>
#define int long long
using namespace std;
int32_t main(){
    int i=0;
    string a;
    cin>>a;
    int res=(int)stoi(a.substr(0,5))*100000+stoi(a.substr(5,5));
    int x=(int)stoi(a.substr(10,5))*100000+stoi(a.substr(15,5));
    int b=(int)stoi(a.substr(20,5))*100000+stoi(a.substr(25,5));
    int y=(int)stoi(a.substr(30,5))*100000+stoi(a.substr(35,5));
    int e=(int)stoi(a.substr(40,5))*100000+stoi(a.substr(45,5));
    while(cin>>a){
        res+=(int)stoi(a.substr(0,5))*100000+stoi(a.substr(5,5));
        x+=(int)stoi(a.substr(10,5))*100000+stoi(a.substr(15,5));
        b+=(int)stoi(a.substr(20,5))*100000+stoi(a.substr(25,5));
        y+=(int)stoi(a.substr(30,5))*100000+stoi(a.substr(35,5));
        e+=(int)stoi(a.substr(40,5))*100000+stoi(a.substr(45,5));
        i++;
    }
    cout<<to_string(res+stoi(to_string(x+stoi(to_string(b+stoi(to_string(y+stoi(to_string(e).substr(0,2))).substr(0,2))).substr(0,2))).substr(0,2))).substr(0,10)<<" "<<i<<endl;
}