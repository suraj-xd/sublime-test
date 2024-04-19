int calc_mex(vector<int> & v)
{
  int ans = v.size();
  int n = v.size();
  for (int i = 0; i < n; i++)
  {
    if (v[i] != i)
      return i;
  }
  return ans;
}
