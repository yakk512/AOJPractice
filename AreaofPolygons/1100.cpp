#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<numeric>
#include<map>
#include<math.h>

using namespace::std;

int main(void)
{

  int n;

  while(cin >> n , n != 0)
    {
      vector< pair<double,double> > vertex(n);
      for(int i = 0; i < n; i++)
        {
          cin >> vertex[i].first >> vertex[i].second;
        }

      for(int i = 0; i < vertex.size(); i++)
        {
          cout << vertex[i].first << "," << vertex[i].second << endl;
        }
    }

  return 0;
}
