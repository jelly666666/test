int BinarySearch(int array[], int n, int value)
{
  int left = 0;
  int right = n - 1;
  while(left < right)
  {
     int middle = left + ((right - left) >> 1);
     int middleValue = array[middle];
     if (middleValue > value) right = middle - 1;
     else if (middleValue < value) left = middle + 1;
     else return middle;
  }
  
  return -1;
}
