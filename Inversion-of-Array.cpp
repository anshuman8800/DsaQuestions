class Solution
{
  public:
  long long combine(long long arr[], long long beg, long long end, long long temp[])
  {
      long long mid = (beg+end)/2;
      long long i=beg;
      long long j = mid+1;
      long long k=beg;
      long long inv=0;


      while(i<=mid && j<=end)
          if(arr[i] <= arr[j])
              temp[k++] = arr[i++];
          //a value from j comes to k , so there are (j-k) inversion for that particular element
          else
          {
              inv+=(j-k);
              temp[k++] = arr[j++];
          }

      while(i<=mid)
          temp[k++] = arr[i++];

      while(j<=end)
          temp[k++] = arr[j++];

      for(long long x=beg;x<=end;++x)
          arr[x] = temp[x];

      return inv;
  }

  long long mergeSort(long long arr[], long long i, long long j, long long temp[])
  {
      if(i==j)
          return 0;
      //will be sum of applying merge sort on one side another and then counting from both sides by combining them
      return mergeSort(arr, i, (i+j)/2, temp) + mergeSort(arr, (i+j)/2+1, j, temp) + combine(arr, i, j, temp);
  }

  long long int inversionCount(long long arr[], long long N)
  {
      // Your Code Here
      long long temp[N];
      //for(int i=0;i<N;++i)
          //cout<<arr[i]<<' ';
      return mergeSort(arr, 0, N-1, temp);;
  }
}
