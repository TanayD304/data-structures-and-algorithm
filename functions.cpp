#include<bits/stdc++.h>

using namespace std;

void print() {
    cout<<"I am a print function"<<endl;
}

int input2NumbersAndAddThem() {
    int num1, num2;
    cin>>num1>>num2;
    return num1+num2;
}

int add2Numbers(int a, int b) {
    return a+b;
}

int main() {
    cout<<"Before"<<endl;
    print();
    cout<<add2Numbers(input2NumbersAndAddThem(), input2NumbersAndAddThem())<<endl;
    cout<<"afetr"<<endl;
    return 0;
}