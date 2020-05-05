//
//  main.cpp
//  dp-11052
//
//  Created by 정문경 on 2020/05/04.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> split(string str, char delimiter)
{
    vector<int> internal;
    stringstream ss(str);
    string temp;
    
    while(getline(ss, temp, delimiter))
    {
        int integer = stoi(temp);
        
        internal.push_back(integer);
    }
    
    return internal;
    
}

int main(int argc, const char * argv[]) {
    int N;
    string line;
    vector<int> price;
    
    int dp[1000];
    
    cin >> N;
    cin.ignore(256,'\n');
    getline(cin, line);

    price = split(line, ' ');
    
    dp[0] = 0;
    
    for(int i = 1 ;  i <= N ; i++)
    {
        dp[i] = price[i-1];
        
        for(int n = 0 ; n < i ; n++)
        {
            dp[i] = max(dp[i],dp[i-n] + dp[n]);
        }
        
    }
    
    cout << dp[N];
    
    return 0;
}


