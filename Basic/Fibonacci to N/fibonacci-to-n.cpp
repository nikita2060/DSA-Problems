//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int n){
        vector<int> v;
        v.push_back(0);
        if ( n == 0 )
            return v;
        v.push_back(1);
        v.push_back(1);
        if ( n == 1 )
            return v;
        int a=1,b=2,c=2;
        
        while( c<=n ){
            v.push_back( c );
            c = a + b;
            a = b;
            b = c;
        }
        return v;
        //code here
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}
// } Driver Code Ends