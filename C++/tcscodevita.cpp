#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int avenger[n];
    for (int i = 0; i < n; i++)
        cin >> avenger[i];
    int cap[n] = {0};
    int iron[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (avenger[i] > avenger[n-1-i])
        {
            cap[i] = avenger[i];
            if (avenger[i+1] > avenger[i])
            {
                cap[i+1] = avenger[i+1];
            }
        }
        else if (avenger[i] < avenger[n-1-i])
        {
            cap[i] = avenger[n-1-i];
            if (avenger[n-1-i] < avenger[n-1-i-1])
            {
                cap[i+1] = avenger[n-1-i-1];
            }
        }
    }
    return 0;
}