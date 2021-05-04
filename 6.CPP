#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void Union(int n,int * a, int m, int *b){
  set<int> s;
  for(int i=0;i<n;i++)s.insert(a[i]);
  for(int i=0;i<m;i++)s.insert(b[i]);
  cout << "Union :- \n";
  for(int x:s)cout << x << " ";
}

void Intersection(int n,int *a,int m,int *b){
  map<int,int> ma;
  set<int> s;
  for(int i=0;i<n;i++){ma[a[i]]++;}
  for(int i=0;i<m;i++){
    if(ma.count(b[i])!=0){s.insert(b[i]);}
  }
  cout << "Intersection :- \n";
  for(int x:s)cout << x << " ";
}


int main () {

 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	#ifndef ONLINE_JUDGE
 		freopen("E:/CODES/input.txt","r",stdin);
 		freopen("E:/CODES/output.txt","w",stdout);
 	#endif

   int n,m;
   cin >> n >> m;
   int * a = new int [n];
   int * b = new int [m];
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];

   Union(n,a,m,b);
   cout << endl;
   Intersection(n,a,m,b);

   delete [] a;
   delete [] b;

 }
