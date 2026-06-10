#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 23, 78, 1};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
       

        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}