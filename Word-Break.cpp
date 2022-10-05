class Solution
{
  public:
  bool helper(vector<string>& words, string s, unordered_map<string, bool> &mem)
  {
      if(s.empty())
          return true;

      if(mem.count(s))
          return mem[s];
      for(auto i:words)
      {
          auto res = mismatch(i.begin(), i.end(), s.begin());
          if(res.first == i.end())
              if(helper(words, s.substr(i.size()), mem))
                  return mem[s] = true;
      }

      return mem[s] = false;
  }
  bool solve(vector<string>& words, string s) {

      unordered_map<string, bool> mem;
      return helper(words, s, mem);

  }
};
