template<class T>
bool minmax(T[], int n, int &indexOfMin, int& indexOfMax)
{
    if (n < 1) return false;
    if (n == 1)
    {
        indexOfMin = indexOfMax = 0;
        return true;
    }

    //n > 1
    int s = 1;
    if (n % 2 == 1)
    {
        indexOfMin = indexOfMax = 0;
    } else {
        if (a[0] > a[1])
        {
            indexOfMin = 1;
            indexOfMax = 0;
        } else {
            indexOfMin = 0;
            indexOfMax = 1;
        }
    }

    for (int i = s; i < n; i += 2)
    {
        if (a[i] > a[i + 1])
        {
            if (a[i] > a[indexOfMax])
                indexOfMax = i;
            if (a[i + 1] < a[indexOfMin])
                indexOfMin = i + 1;
        } else {
            if (a[i + 1] > a[indexOfMax])
                indexOfMax = i + 1;
            if (a[i] < a[indexOfMin])
                indexOfMin = i;
        }
    }

    return true;
}
