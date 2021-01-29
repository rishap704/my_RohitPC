#include<iostream>
#include<vector>
#include<algorithm>

using std::vector;
using std::count_if;
using std::begin;
using std::end;         

int main()
{
  auto isodd = [] (int candidate) { return ((candidate= candidate % 2) != 0);};

  bool is3odd =isodd(3);
  bool is4odd =isodd(3);

  vector<int> nums{2 ,3,4,-1,1};

  int odds = std::count_if(begin(nums), end(nums), isodd); 
  return 0;
}