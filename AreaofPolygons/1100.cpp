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

  int counter = 1;
  int n;

  while(cin >> n , n != 0 )
    {
      vector< pair<double,double> > vertex(n);
      double sum = 0.0;

      for(int i = 0; i < n; i++)
        {
          cin >> vertex[i].first >> vertex[i].second;
        }

      for(int i = 0; i < vertex.size(); i++)
        {
          if( i == vertex.size() - 1 )
            {
              sum += 0.5 * ( (vertex[i].first * vertex[0].second) - (vertex[i].second * vertex[0].first) );
            }
          else
            {
              sum += 0.5 * ( (vertex[i].first * vertex[i+1].second) - (vertex[i].second * vertex[i+1].first) );
            }
        }

      cout << counter << " " << fabs(sum) << endl;
      counter++;

    }

  return 0;
}
