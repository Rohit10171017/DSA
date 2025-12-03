#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "enter a size of an array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of an vetcor in a sorted order : ";
    for (auto &ele : arr)
        cin >> ele;
    int k, x;
    cout << "enter a value of k and x";
    cin >> k >> x;
    vector<int> ans;
    if (x <= arr[0])
    {
        for (int i = 0; ans.size() != k; i++)
            ans.push_back(arr[i]);
    }
    else if (x >= arr[n - 1])
    {
        for (int i = n - 1; ans.size() != k; i--)
            ans.push_back(arr[i]);
    }
    else
    {
        bool flag = false;
        int low = 0;
        int high = n - 1;
        int mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                ans.push_back(arr[mid]);
                flag = true;
                break;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if(flag == true) 
        {
            high = mid - 1;
            low = mid + 1;
        }
        while (ans.size() != k)
        {
            if ((abs(arr[high] - x) == abs(arr[low] - x)) && high >= 0)
            {
                ans.push_back(arr[high--]);
                if (ans.size() == k)
                    break;
            }
            if ((abs(arr[high] - x) < abs(arr[low] - x)) && high >= 0)
            {
                ans.push_back(arr[high--]);
            }
            else if (low <= n - 1)
            {
                ans.push_back(arr[low++]);
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<"The ans is : ";
    for(auto ele : ans)
    cout<<ele<<" ";

    return 0;
}
