int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}