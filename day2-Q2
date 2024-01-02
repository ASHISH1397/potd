/*Given two arrays a[] and b[] of size n and m respectively.
The task is to find the number of elements in the union between these two arrays
*\

/*QUESTION:
Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Note : Elements are not necessarily distinct.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*\

//CODE:
/*Time Complexity:

The first loop iterates through the elements of array a of size n, and the second loop iterates through the elements of array b of size m.
The insertion operation in the unordered_set has an average time complexity of O(1).
Since there are two loops, the overall time complexity is O(n + m).

Space Complexity:

The space complexity is mainly determined by the size of the unordered_set ans.
In the worst case, if there are no common elements between the two arrays, the size of the union will be n + m.
Therefore, the space complexity is O(n + m) in the worst case. *\

//CODE:

 public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int>ans;
        
        for(int i=0;i<n;i++){
            ans.insert(a[i]);
        }
        
        for(int i=0;i<m;i++){
            ans.insert(b[i]);
        }
        return ans.size();
    }
};function template in C++

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
