//
//  main.cpp
//  dp-11727
//
//  Created by 정문경 on 2020/05/04.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    int dp[1000] = {0,};
    cin >> n;
    
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2 ; i <= n ; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]*2)%10007;
    }
    
    cout << dp[n];
    return 0;
}
