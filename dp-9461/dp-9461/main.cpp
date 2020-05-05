//
//  main.cpp
//  dp-9461
//
//  Created by 정문경 on 2020/05/05.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

long dp[101];

void answer(int n)
{
    for(int i = 6 ; i <= n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-5];
    }
    cout << dp[n];
}
int main(int argc, const char * argv[]) {
    
    int T;
    vector<int> v;
    cin >> T;
    for(int i = 0 ; i < T ; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    
    for(int i = 0 ; i < v.size() ; i++)
    {
        answer(v[i]);
        cout << endl;
    }
    
    return 0;
}
