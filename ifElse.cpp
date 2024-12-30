#include<bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cin>>age;
    string result;
    if(age>=18) result = "Adult";
    if(age<18 && age>10) result = "Teen";
    else result = "Child";
    cout<<result<<endl;
}