//
//  main.cpp
//  string-11720
//
//  Created by 정문경 on 2020/09/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int n;
    int num;
    int sum = 0;
    string line;
    cin >> n;
    cin >> line;
    for(int i = 0 ; i < n ; i++)
    {
        num = line[i] - '0';
        sum += num;
    }
    cout << sum;
    return 0;
}

vector<string> split (string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str);
    string temp;
    
    while (getline(ss, temp, delimiter)) {
        internal.push_back(temp);
    }
    
    return internal;
}
