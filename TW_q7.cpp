#include <bits/stdc++.h>
using namespace std;
int fun(int a[], int n)
{
	int res = INT_MIN, sum 0;
    int tot=0;
	for (int i = 0; i < n; i++) {
        tot+=a[i];
		sum  += a[i];
		if (res < sum)res = sum;
		if (sum < 0)sum = 0;
	}
    for(int i=0;i<n;i++){
        a[i]*=-1;
    }
    int mins=INT_MIN,mis=0;
    for(int i=0;i<n;i++){
        mis+=arr[i];
        if(mis<arr[i])mis=arr[i];
        mins=max(mis,mins);
    }
   
	return (tot<0)? res :tot-mins;
}

int main()
{
	int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
	int ans = fun(a,n);
	cout << ans<<endl;
	return 0;
}
