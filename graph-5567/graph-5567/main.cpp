//
//  main.cpp
//  graph-5567
//
//  Created by 정문경 on 2020/06/22.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool friends[501][501];
bool check[501];

int main(int argc, const char * argv[]) {
    
    int n,m;
    cin >> n >> m;
   
    vector<int> v;
    for(int i = 0 ; i < 501 ; i++)
    {
        check[i] = false;
        for(int j = 0 ; j < 501 ; j++)
        {
            friends[i][j] = false;
        }
    }
    
    for(int i = 0 ; i < m ; i++)
    {
        int a, b;
        cin >> a >> b;
        
        
        if(a == 1 && !check[b])
        {
            v.push_back(b);
            check[b] = true;
        }
           
        friends[a][b] = true;
        friends[b][a] = true;
            
    }
    
    int first = v.size();
    
    for(int i = 0 ; i < first ; i++)
    {
        for(int j = 2 ; j <= n ; j++)
        {
            if(friends[v[i]][j] && !check[j])
            {
                v.push_back(j);
                check[j] = true;
            }
        }
    }
    
   
    
    
    
    cout << v.size();
    
    return 0;
}
