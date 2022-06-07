#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> vec{3, 2, 4, 1, 0};

    /* Ascending sorting */
    //std::sort(vec.begin(), vec.end());
    //std::sort(vec.begin(), vec.end(), [](int a, int b){ return a < b;});
    //std::sort(vec.begin(), vec.end(), std::less<int>());

    /* Descending sorting */
    std::sort(vec.begin(), vec.end(), [](int a, int b){ return a > b;});
    //std::sort(vec.begin(), vec.end(), std::less<int>());

    for(auto elem: vec)
    {
        std::cout << elem << std::endl;
    }
}