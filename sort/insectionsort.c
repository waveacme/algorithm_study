void insertion_sort(int array[], int N)
{
    for (int i=2; i<N; ++i)
    {
        int pivot = array[i];
 
        int j;
        for (j=i-1; j>=0; --j)
            if (pivot < array[j])
                array[j+1] = array[j];  // 先行往右挪
            else
                break;
 
        array[j+1] = pivot; // 插入
    }
}
