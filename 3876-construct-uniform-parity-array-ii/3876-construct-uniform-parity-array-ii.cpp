class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
   
        int Xmin =1e9;
        int CNTOdd=0;
        for(int x: nums1){
            CNTOdd+=x&1;
            Xmin=min(Xmin, x);
        }
        return Xmin&1 || CNTOdd==0;
    
    }
};