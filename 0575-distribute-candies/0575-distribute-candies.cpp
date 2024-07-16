class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        sort(candyType.begin() , candyType.end());
        int cnt = 1;
        
        for(int j=0 ; j<n-1 ; j++){
            if(candyType[j] != candyType[j+1]){
                cnt++;    
            }
          
        }
        
         
        
        if(cnt>=int(n/2)){
            return n/2;
        }
        else return cnt;
    }
};