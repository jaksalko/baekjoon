//
//  main.cpp
//  graph-11404
//
//  Created by 정문경 on 2020/06/04.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
#include <vector>

#define INF 987654321

using namespace std;

int price[101][101] = {0,};


void FloydWarshall(int n)
{
    for(int i = 1 ; i <= n ; i++)//stay
    {
        for(int j = 1 ; j <= n ; j++)//start
        {
            for(int k = 1 ; k <= n ; k++)//end
            {
                if(price[j][k] > price[j][i] + price[i][k])
                {
                    price[j][k] = price[j][i] + price[i][k];
                }
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    
    int n,m;
    
    cin >> n >> m;
    
    for(int i = 0 ; i <= 100 ; i++)
    {
        for(int j = 0 ; j <= 100 ; j++)
        {
            price[i][j] = INF;
            if(i == j)
                price[i][j] = 0;
        }
        
    }
    
    for(int i = 0 ; i < m ; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        price[a][b] = min(price[a][b], c); // only one line left atob
        
    }
   
    
    
    FloydWarshall(n);
    
    
    for(int i = 1 ; i <= n ; i++)
       {
           for(int j = 1 ; j <= n ; j++)
           {
               if(price[i][j] == INF)
                   price[i][j] = 0;
               
               cout << price[i][j] << " ";
           }
           cout << endl;
       }
    
    return 0;
}
