/*
 * Input:  array, starting index and ending index
 * Output: index of max element between starting and ending index 
*/
int findMax(vector<int> a, int start, int end){
    int temp = start;
    for(int i = start+1; i <= end; i++)
        if(a[temp] <= a[i])
            temp = i;
    return temp;
}
