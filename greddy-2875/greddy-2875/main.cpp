//
//  main.cpp
//  greddy-2875
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {

    int n,m,k;
    cin >> n >> m >> k;
    int team = 0;
    int left = 0;
    
    if(n/2 > m)
    {
        team = m;
        left = n-m*2;
    }
    else
    {
        team = n/2;
        left = m - n/2 + n%2;
    }
    
    while(k > left)
    {
        team--;
        left += 3;
    }
    
    cout << team;
    
    return 0;
}
