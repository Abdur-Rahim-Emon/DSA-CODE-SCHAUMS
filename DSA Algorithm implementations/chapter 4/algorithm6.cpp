  #include<bits/stdc++.h>
  using namespace std;
  int binarySearch(vector<int> & v,int item){
    int low=0; 
    int high=v.size()-1;
    int mid=low+(high-low)/2;
    int count=1;
    while (mid<=high)
    {
        if(v[mid]==item){
            return mid+1;
            break;
        }
        if(v[mid]<item){
          low=mid+1;
        }
        else {
            high=mid-1;
        }
        count++;
         cout<<count<<" ";
        mid=low+(high-low)/2;

       
    }
   
    return -1;
    
  }
  int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(v,2);
  }