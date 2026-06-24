class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size =nums.size();
        int frc =0, maj = 0;

        for(int i =0; i < size; i++ ){
           
            if(frc == 0){
                maj= nums[i];
            }
            if(maj == nums[i]){
                frc++;
            }
            else{
                frc--;
            }
        }

        return maj;
    }
};