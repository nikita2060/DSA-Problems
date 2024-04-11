//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N)
    {
        
        vector<int> v;
        if(N == 0)
        {
            v={0};
            return  v;
        }
        v={0,1,1};
            
        int a=1,b=2,c=2;
        while(c<=N)
        {
            v.push_back(c);
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