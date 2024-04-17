#include <iostream>
using namespace std;
int n,s;
int arr[100000];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>s;
    int l = 0;
    int r = n-1;
    int total = 0;
    int dist = n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total +=arr[i];
    }
    if(total<s)
        cout<<-1;
    else{
        while(l<=r)
        {
            if(arr[l]>arr[r])
            {
                total-=arr[r];
                r--;
            }
            else
            {
                total-=arr[l];
                l++;
            }
            if(total<s)
            {
                break;
            }
            else
                dist--;
        }
        cout<<dist;
    }
    return 0;
}