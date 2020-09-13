//
//  main.cpp
//  string-9251
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string ff;
    string ss;
    
    int dp[1001][1001];
    int answer = 0;
    
    cin >> ff >> ss;
    
    for(int i = 1 ; i <= ff.size() ; i++)
    {
        for(int j = 1 ; j <= ss.size() ; j++)
        {
            if(ff[i-1] == ss[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
             answer = max(answer,dp[i][j]);
        }
       
    }
    
    cout << answer;
    
    return 0;
}
