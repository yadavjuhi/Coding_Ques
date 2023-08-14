int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n=arr.size();

	 for (int i = 0; i < n; i++) {
          if (arr[i] < m) {
			  continue;
          }
		 
		  else{
			  return i;

		  }
        }
		return n;

	
}


// coding  ninja