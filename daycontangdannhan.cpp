#include <bits/stdc++.h>
using namespace std;

int calc[105];
int arr[105];
int n;

vector<string> result;
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> calc[i];
    }
}

void display()
{
    for (int i = 1; i <= n; i++)
        cout << arr[i];
    cout << endl;
}

bool check(vector<int> ans)
{
    if (ans.size() < 2)
        return false;


    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] - ans[i -1] < 0)
            return false;
    }

    return true;


}


string change(vector<int> arr)
{
    string s = "";
    for (auto x : arr)
    {

        s = s + to_string(x) + " ";
    }

    return s;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        arr[i] = j;
        if (i == n)
        {
            vector<int> ans;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == 1)
                    ans.push_back(calc[i]);
                
            }

            if (check(ans))
            {
                result.push_back(change(ans));
            }

            ans.clear();
        }
        else
            Try(i + 1);
    }
}

void solve()
{
    init();
    Try(1);
    sort(result.begin(), result.end());

    for (auto x : result)
        cout << x << endl;
}
int main()
{
    int test = 1;
    //cin >> test;
    while(test--)
    {
        solve();
    }
}
