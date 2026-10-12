class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        mps = dict()
        mpt = dict()
        for i in range(len(s)):
            mps[s[i]] = mps.get(s[i],0) + 1
            mpt[t[i]] = mpt.get(t[i],0) + 1
        
        return (mps == mpt)