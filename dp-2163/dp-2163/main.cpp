//
//  main.cpp
//  dp-2163
//
//  Created by 정문경 on 2020/04/30.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    
    int n,m;
    
    cin >> n >> m;
    
    cout << (n-1) + (m-1)*(n);
    
    return 0;
}
