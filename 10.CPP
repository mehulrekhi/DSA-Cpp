#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
  #ifndef ONLINE_JUDGE
        freopen("E:/CODES/input.txt","r",stdin);
        freopen("E:/CODES/output.txt","w",stdout);
  #endif
        int t;
        cin >> t;
        while(t--) {
                int n;
                cin >> n;
                int * arr = new int [n];
                for(int i=0; i<n; i++) {
                        cin >> arr[i];
                }
                int ans=0;
                int i=0;
                while(i<n-1) {
                        if(arr[i]+i>=n-1) {ans++; break;}
                        int k=i+arr[i];
                        if(k==i) {ans=-1; break;}
                        int next = i+1;
                        int counter = 1;
                        for(int j=next+1; j<=k; j++) {
                                if(arr[j]+counter>=arr[next]) {next=j; counter=1;}
                                else counter++;
                        }
                        ans++;
                        i=next;
                        //cout << arr[i] << endl;
                }
                cout << ans << endl;
                delete [] arr;
        }
}
