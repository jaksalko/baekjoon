//
//  main.cpp
//  dp-9465
//
//  Created by 정문경 on 2020/05/05.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int dpf(int n)
{
    int result;
    int fl[100000] = {0,};
    int sl[100000] = {0,};
    int dpf[100000] = {0,};
    int dps[100000] = {0,};
    //cout<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        
        cin >> fl[i];
        //cout << fl[i] << endl;
        
    }
    //cout<<"end"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        
        cin >> sl[i];
        //cout << sl[i] << endl;
    }
    
    dpf[0] = fl[0];
    dps[0] = sl[0];
    dpf[1] = fl[1] + sl[0];
    dps[1] = sl[1] + fl[0];
    for(int i = 2 ; i < n ; i++)
    {
        dpf[i] = max(dps[i-1] + fl[i],dps[i-2] + fl[i]);
        dpf[i] = max(dpf[i] , dpf[i-2] + fl[i]);
        dps[i] = max(dpf[i-1] + sl[i],dpf[i-2] + sl[i]);
        dps[i] = max(dps[i] , dps[i-2] + sl[i]);
        
    }
    
//    for(int i = 0 ; i < n ; i++)
//    {
//        cout<<endl;
//        cout << "i : " << i << "  dpf : " <<dpf[i] << "  dps : " << dps[i] << endl;
//    }
//    
    result = max(dps[n-1],dpf[n-1]);
    
    return result;
    
}
int main(int argc, const char * argv[]) {
    
    int T;//test case
    
    
    vector<int> answer;
    
    cin >> T;
    
    for(int i = 0 ; i < T ; i++)
    {
        int n;
        cin >> n;
        answer.push_back(dpf(n));
    }
    
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
    }
    
    
    
    return 0;
}
