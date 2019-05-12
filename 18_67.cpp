#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("p067_triangle.txt");
    const int base = 100;
    int n = 1;
    int path_weight[base + 1]{0};
    input >> path_weight[0];
    n++;

    while (n <= base)
    {
        int buffer, current;
        input >> current;
        buffer = current + path_weight[0];
        for (int i = 1; i < n; i++)
        {
            input >> current;
            current = max(current + path_weight[i - 1], current + path_weight[i]);

            path_weight[i - 1] = buffer;
            buffer = current;
        }
        path_weight[n - 1] = buffer;
        n++;
    }

    int max_path = *max_element(path_weight, path_weight + base);
    cout << endl
         << max_path << endl;
}
