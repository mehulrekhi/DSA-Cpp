int find_median(vector<int> v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    if (n % 2 == 1)
        return v[n / 2];
    else
    {
        int a = v[n / 2];
        int b = v[n / 2 - 1];
        return (a + b) / 2;
    }
}
}
;