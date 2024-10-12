//  leet code 75. Sort Colors
//   Dutch National Flag(DNF) algorithm
 
 void sortColors(vector<int>& arr) {
        int n = arr.size();
        int i = 0;      // denote for 0 
        int j = 0;     // denote for 1
        int k = n-1;  // denote for 2

        while(j<=k){
            int val = arr[j];
            if(val == 0){
                swap(arr[j],arr[i]);
                i++;
                j++;
            }else if(val == 2){
                swap(arr[j],arr[k]);
                k--;
            }else{
                j++;
            }
        }
    }