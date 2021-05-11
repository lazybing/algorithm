/*
 * void mergeSort(T *a, int left, int right)
 * {
 *  if (left < right)
 *  {
 *      int middle = (left + right) / 2;
 *      mergeSort(a, left, middle);
 *      mergeSort(a, middle + 1, right);
 *      merge(a, b, left, middle, right);
 *      copy(a, b, left, right);
 *  }
 * } 
 */

template <class T>
void merge(T c[], T d[], int startOfFirst, int endOfFirst, int endOfSecond)
{
    int first = startOfFirst;
    int second = endOfFirst + 1;
    int result = startOfFirst;

    while ((first <= endOfFirst) && (second <= endOfSecond))
        if (c[first] <= c[second])
            d[result++] = c[first++];
        else
            d[result++] = c[second++];

    if (first > endOfFirst)
        for (int q = second; q <= endOfSecond; q++)
            d[result++] = c[q];
    else
        for (int q = first; q <= endOfFirst; q++)
            d[result++] = c[q];
}

template <class T>
void mergePass(T x[], T y[], int n, int segmentSize)
{
    int i = 0;
    while (i <= n - 2 * segmentSize)
    {
        merge(x, y, i, i + segmentSize - 1, i + 2 * segmentSize - 1);
        i = i + 2 * segmentSize;
    }

    if (i + segmentSize < n)
        merge(x, y, i, i + segmentSize - 1, n - 1);
    else
        for (int j = i; j < n; j++)
            y[j] = x[j];
}

template <class T>
void mergeSort(T a[], int n)
{
    T *b = new T[n];
    int segmentSize = 1;

    while (segmentSize < n)
    {
        mergePass(a, b, n, segmentSize);
        segmentSize += segmentSize;
        mergePass(b, a, n, segmentSize);
        segmentSize += segmentSize;
    }
    delete[] b;
}
