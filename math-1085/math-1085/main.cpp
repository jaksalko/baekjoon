 //
//  main.cpp
//  math-1085
//
//  Created by 정문경 on 2020/04/30.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int w,h;
    int x,y;
    cin >> x >> y >> w >> h;
    
    int gapx,gapy;
    int minValue;
    
    gapx = min(w-x, x);
    
    
    gapy = min(h-y,y);
    
    minValue = min(gapx,gapy);
    
    cout<<minValue;
    
    
    
    
    return 0;
}
