#include<bits/stdc++.h>

using namespace std;

int main() {
    int marks;
    cin>>marks;
    string result;
    if(marks>=90) result = "Grade A";
    else if(marks>=70) result = "Grade B";
    else if(marks>=50) result = "Grade C";
    else if(marks>=35) result = "Grade D";
    else result = "Fail";

    cout<<result<<endl;
    return 0;
}