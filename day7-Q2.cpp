/*
QUESTION:
 Short Sort.

 There are three cards with letters a, b, c placed in a row in some order. You can do the following operation at most once:

Pick two cards, and swap them.
Is it possible that the row becomes abc
 after the operation? Output "YES" if it is possible, and "NO" otherwise.
Input
The first line contains a single integer t(1≤t≤6) — the number of test cases.
The only line of each test case contains a single string consisting of each of the three characters a, b, and c
 exactly once, representing the cards.

Output
For each test case, output "YES" if you can make the row abc
 with at most one operation, or "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
6
abc
acb
bac
bca
cab
cba
outputCopy
YES
YES
YES
NO
NO
YES

Note
In the first test case, we don't need to do any operations, since the row is already abc.
In the second test case, we can swap cand b:acb→abc.
 In the third test case, we can swap band a:bac→abc.
In the fourth test case, it is impossible to make abcusing at most one operation.

TIME COMPLEXITTY: O(1).
SPACE COMPLEXITY: O(1).

CODE:
*\
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // swaping position
        string fs = s;
        swap(fs[0], fs[1]);

        string ss = s;
        swap(ss[1], ss[2]);

        string ts = s;
        swap(ts[0], ts[2]);

        //Compare all with "abc"
        if (fs == "abc" || ss == "abc" || ts == "abc")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
