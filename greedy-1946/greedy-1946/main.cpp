//
//  main.cpp
//  greedy-1946
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> answer;

void hiring()
{
    vector<vector<int>> score;
    int n;
    cin >> n;
    vector<vector<int>> hire;
    for(int i = 0 ; i < n ; i++)
    {
        
        vector<int> v;
        v.resize(2);
        cin >> v[0] >> v[1];
        
        score.push_back(v);
        
    }
    sort(score.begin(), score.end());
    int b = score[0][1];
    hire.push_back(score[0]);
    for(int i = 1 ; i < score.size() ; i++)
    {
        if(score[i][1] < b)
        {
            b = score[i][1];
            hire.push_back(score[i]);
        }
        
    }
    answer.push_back(hire.size());
    
}

int main(int argc, const char * argv[]) {
    int test;
    cin >> test;
    
    for(int i = 0 ; i < test ; i++)
    {
        hiring();
    }
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
    }
    return 0;
}
