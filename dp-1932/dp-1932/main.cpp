//
//  main.cpp
//  dp-1932
//
//  Created by 정문경 on 2020/05/04.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int depth;
    int answer = -1;
    
    int tree[500][500];
    
    cin>>depth;
    
    for(int i = 0 ; i < depth ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cin >> tree[i][j];
        }
    }
    
    for(int i = 1 ; i < depth ; i++)
    {
        tree[i][0] += tree[i-1][0];
        tree[i][i] += tree[i-1][i-1];
        
        for(int j = 1; j < i ; j++)
        {
            tree[i][j] += max(tree[i-1][j-1], tree[i-1][j]);
        }
    }
    
    for(int i = 0 ; i < depth ; i++)
    {
        answer = max(answer , tree[depth-1][i]);
    }
    
    cout << answer;
    return 0;
}
