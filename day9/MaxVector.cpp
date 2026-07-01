#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10};
    int maxElement = *max_element(v.begin(), v.end());
    cout << "Max element in the vector: " << maxElement << endl;
    return 0;
}