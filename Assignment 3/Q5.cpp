#include <iostream>
#include <vector>
using namespace std;

int countSubsetsWithSum(vector<int>& arr, int target)
{
    int n = arr.size();

    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

    // Sum 0 is possible with empty subset
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s <= target; s++)
        {
            dp[i][s] = dp[i - 1][s];

            if (arr[i - 1] <= s)
                dp[i][s] += dp[i - 1][s - arr[i - 1]];
        }
    }

    return dp[n][target];
}

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    int result = countSubsetsWithSum(arr, target);

    cout << "Number of subsets with sum " << target << " is: " << result << endl;

    return 0;
}
