#include <vector>
#include <iostream>
#include "doji.h"
using namespace std;


int main(){
    int a = 1, b = 2;
    vector<int> test;
    test.push_back(add(a, b));
    cout << test[0] << endl;
    return 0;
}