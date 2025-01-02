#include<bits/stdc++.h>

using namespace std;

int main() {
    string strWithSpace1;
    getline(cin, strWithSpace1);
    cout<<strWithSpace1<<endl;
    string name;
    int age;
    cin>>name>>age;
    cout<<name<<endl;
    cout<<age<<endl;
    string strWithSpace2;
    getline(cin>>ws, strWithSpace2); // cin doesnt work after trailing cin as it doesnt ignore previous ws to solve this ws is used to ignore
    cout<<strWithSpace2<<endl;
    return 0;
}