#include<bits/stdc++.h>
using namespace std;

int fun(int a,int b,int c,int x[],int y[]){
    vector<pair<int,int>> v;
    for(int i=0;i<a;i++){
        int pf=(x[i]*y[i])/100;
        v.push_back({pf,x[i]});
    }
    sort(v.begin(),v.end(),[](auto a,auto b){if(a.first>b.first)return true;
        if(a.first==b.first)return (a.second<b.second);
        return false;});
    int ans=0;
    int amm=0;
    for(int i=0;i<a;i++){
       // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(amm+b*v[i].second<=c){
            amm+=b*v[i].second;
            ans+=b*v[i].first;}
        else{
            while(amm+v[i].second<=c){
                amm+=v[i].second;
                ans+=v[i].first;
            }
        }
        //cout<<ans<<" "<<amm<<endl;
    }
    return ans;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x[a],y[a];
    for(int i=0;i<a;i++){
        cin>>x[i];

    }
    for(int i=0;i<a;i++)cin>>y[i];

    int ans=fun(a,b,c,x,y);
    cout<<ans<<endl;
    return ans;

}