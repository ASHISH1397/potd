/*
Log Chopping
 
There are n
 logs, the i
-th log has a length of ai
 meters. Since chopping logs is tiring work, errorgorn and maomao90 have decided to play a game.

errorgorn and maomao90 will take turns chopping the logs with errorgorn chopping first. On his turn, the player will pick a log and chop it into 2
 pieces. If the length of the chosen log is x
, and the lengths of the resulting pieces are y
 and z, then y and z have to be positive integers, and x=y+z must hold. For example, you can chop a log of length 3
 into logs of lengths 2 and 1, but not into logs of lengths 3and 0 ,2 and 2, or 1.5 and 1.5.

The player who is unable to make a chop will be the loser. Assuming that both errorgorn and maomao90 play optimally, who will be the winner?

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤100)  — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤50)  — the number of logs.

The second line of each test case contains n
 integers a1,a2,…,an(1≤ai≤50)  — the lengths of the logs.

Note that there is no bound on the sum of n
 over all test cases.

Output
For each test case, print "errorgorn" if errorgorn wins or "maomao90" if maomao90 wins. (Output without quotes).

Example
inputCopy
2
4
2 4 2 1
1
1
outputCopy
errorgorn
maomao90
Note
In the first test case, errorgorn will be the winner. An optimal move is to chop the log of length 4
 into 2
 logs of length 2
. After this there will only be 4
 logs of length 2
 and 1
 log of length 1
.

After this, the only move any player can do is to chop any log of length 2
 into 2
 logs of length 1
. After 4
 moves, it will be maomao90's turn and he will not be able to make a move. Therefore errorgorn will be the winner.

In the second test case, errorgorn will not be able to make a move on his first turn and will immediately lose, making maomao90 the winner.


*/

#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
     cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int sum=0;
        while(n--)
        {
            int x;
            cin>>x;;
            sum += x - 1;
        }
              if(sum%2==1){
                 cout<<"errorgorn"<<"\n";
              }
              else cout<<"maomao90"<<endl;
    }

}