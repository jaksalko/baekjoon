//
//  main.cpp
//  bfs-7576
//
//  Created by 정문경 on 2020/04/09.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n;
    cin >> m >> n;
    int depth = 0;
    
    int count = 0;
    for(int i = 0 ; i <= n+1 ; i++)
    {
        for(int j = 0 ; j <= m+1 ; j++)
        {
            arr[i][j] = -1;
        }
       
    }
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            cin >> arr[i][j];
        }
    }

    queue<pair<int, int>> q;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(arr[i][j] == 1)
            {
                depth++;
                q.push(make_pair(i, j));//first tomato push day-0
            }
        }
    }
    
    
    int isolate = 0;
    int notomato = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int  j = 1 ; j <= m ; j++)
        {
            if(arr[i][j] == 0)
            {
                isolate = 0;
                for(int k = 0 ; k < 4 ; k++)
                {
                    if(arr[i+dx[k]][j+dy[k]] == -1)
                    {
                        isolate++;
                    }
                }
                if(isolate == 4)
                {
                    cout << -1;
                    return 0;
                }
            }
            
            if(arr[i][j] == -1)
            {
                notomato++;
            }
        }
    }
    
//    if(notomato == n*m)
//    {
//        cout << 0;
//        return 0;
//    }
//    
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        
        q.pop();
        depth--;
        if(depth == 0)
        {
            count++;
            
        }
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int next_x = x+ dx[i];
            int next_y = y+ dy[i];
            
            if(arr[next_y][next_x] == 0)
            {
                arr[next_y][next_x] = 1;
                q.push(make_pair(next_y, next_x));
                
            }
        }
        
        if(depth == 0)
        {
            depth = q.size();
        }
    }
    //cout << "result.." << endl;
    cout << count-1;
    
    
    return 0;
}
