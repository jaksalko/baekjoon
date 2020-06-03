//
//  main.cpp
//  graph-4963
//
//  Created by 정문경 on 2020/06/03.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;


vector<int> answer;
int dir[8][2] = {
    {1,0},{0,1},{-1,0},{0,-1},
    {1,1},{1,-1},{-1,1},{-1,-1}
    
};
void bfs(int w, int h)
{
    int count = 0;
    queue<pair<int, int>> q;
    int arr[52][52] = {0,};//0-51 0,51 outline
    bool b[52][52] = {false,};
    
    //input index
    for(int i = 1 ; i <= h ; i++)
    {
        for(int j = 1 ; j <= w ; j++)
        {
            cin >> arr[i][j];
            //cout << b[i][j];
        }
    }
    
    
    //bfs
    for(int i = 1 ; i <= h ; i++)
    {
        for(int j = 1 ; j <= w ; j++)
        {
            if(arr[i][j] == 1 && !b[i][j])
            {
                q.push(make_pair(i,j));
                b[i][j] = true;
                //cout << i << "," << j << endl;
                count++;
                while(!q.empty())// queue empty -> end
                {
                    int h = q.front().first;
                    int w = q.front().second;
                    //cout << h <<"," << w << endl;
                    q.pop();
                    
                    for(int i = 0 ; i < 8 ; i++)
                    {
                        int x = dir[i][0];
                        int y = dir[i][1];
                        
                        if(arr[h+ x][w + y] == 1 && !b[h+x][w+y])
                        {
                            q.push(make_pair(h+x, w+y));
                            b[h+x][w+y] = true;
                        }
                    }
                }
                
                //cout << endl;
                
            }
        }
    }
    
    answer.push_back(count);
    
    
    
    
}
int main(int argc, const char * argv[]) {
    
    int w = -1;
    int h = -1;
    
    while(true)
    {
        cin >> w >> h;
        
        if(w == 0 && h == 0)
        {
            break;
        }
        else
        {
            bfs(w,h);
        }
        
    }
    
    
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
    }
    
    
    return 0;
}
