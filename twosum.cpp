#include<iostream>
#include<map>
#include<vector>
using namespace std;

class twosum{
  public:

  vector<int> twoSum(vector<int>&nums, int target) {
    map<int,int>mpp;
    int n = nums.size();

    for(int i=0; i<n;i++){
      int num = nums[i];

      int moreNeeded = target - num;

      if(mpp.find(moreNeeded)!= mpp.end()){
        return {mpp[moreNeeded],i};
      }
      mpp[num] = i;
    }

    return{-1,-1};


  }

};
int main(){
  twosum ts;

  vector<int> nums1 = {2,7,11,15};
  int target1 = 9;
  vector<int> result1 = ts.twoSum(nums1, target1);

  cout<<"Test:";
  cout<<"nums = [2,7,11,15], target=9"<<endl;
  cout<<"Result:"<<result1[0]<<result1[1]<<endl;
  cout<<"Values:"<<nums1[result1[0]]<<"+"<<nums1[result1[1]]<<"="<<target1<<endl;
}
