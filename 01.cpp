#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;

    int *b = &a;

    for(int i = 0; i< 10; i++){
        cout << b << endl;
    }

    return 0;
}