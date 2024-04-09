// o09e3min.cpp : This is a solution for IX IT Olympiad task: Minusy.
// It mainly works on a principle that we need to put every + signs block in parentheses.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string result;
    char last = '-', curr = '-';
    int n;
    cin >> n;
    n--;
    for (int i = 0; i < n; i++)
    {
        last = curr;
        cin >> curr;
        if (last == '-' && curr == '+') result.push_back('(');
        if (last == '+' && curr == '-') result.push_back(')');
        result.push_back('-');
    }
    if (curr == '+') result.push_back(')');
    cout << result;
    return 0;
}