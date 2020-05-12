//
//  main.cpp
//  string-11656
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    vector<string> v;
    cin >> s;
    int len = s.size();
    for(int i = 0 ; i < len ; i++)
    {
        v.push_back(s);
        s.erase(s.begin());
        
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}

