#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define MAX 10000
using namespace std;


int main(){
     int AliceScore[MAX],BobScore[MAX],AlicePoints=0,BobPoints=0;
    for(int i=0;i<3;i++)
    {
        cin>>AliceScore[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>BobScore[i];
    }
    for(int i=0;i<3;i++)
    {
        if(AliceScore[i]!=BobScore[i])
        {
            if(AliceScore[i]>BobScore[i])
            {
                AlicePoints++;
            }
            else
            {
                BobPoints++;
            }
        }
    }
    cout<<AlicePoints<<" "<<BobPoints;
    return 0;
}
