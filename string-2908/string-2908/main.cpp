//
//  main.cpp
//  string-2908
//
//  Created by 정문경 on 2020/05/11.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char temp;
    vector<int> v;
    string s;
    cin >> s;
    temp = s[0];
    s[0] = s[2];
    s[2] = temp;
    
    v.push_back(stoi(s));
    cin >> s;
    temp = s[0];
    s[0] = s[2];
    s[2] = temp;
    v.push_back(stoi(s));
    
    
    int mx = *max_element(v.begin(),v.end());;
    cout << mx;
    
    
    return 0;
}
