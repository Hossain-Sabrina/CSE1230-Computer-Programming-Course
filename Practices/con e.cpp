#include<bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(int a[],int candels){
    int i, j, maxElement, count;
     int maxCount = 0;
     for(i = 0; i< candels; i++)
    {
        count = 1;
        for(j = i+1; j < candels; j++)
        {
            if(a[j] == a[i])
            {
                count++; if(count > maxCount)
                {
                    maxElement = a[j];
                }
            }
        }
    }
    return maxCount;
}

int main(){
    int candels,a[100005];
    cin>>candels;
    for(int i=0; i<candels;i++){
        cin>>a[i];
    }
    int maxElement =birthdayCakeCandles(a, candels);
   cout<<maxCount<<endl;
}
