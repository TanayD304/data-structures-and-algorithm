#include<bits/stdc++.h>

using namespace std;

void passByValue(int a) {
    a+=10;
    cout<<a<<endl;
}

void passByReference(int &a) {
    a+=10;
    cout<<a<<endl;
}

int main() {
    int a;
    cin>>a;
    passByValue(a);
    cout<<a<<endl;
    passByReference(a);
    cout<<a<<endl;
    return 0;
}