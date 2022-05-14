'''
1221. Split a String in Balanced Strings

Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it in the maximum amount of balanced strings.

Return the maximum amount of split balanced strings.

 Example 1:

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

Example 2:

Input: s = "RLLLLRRRLR"
Output: 3
Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.


Constraints:

    1 <= s.length <= 1000
    s[i] is either 'L' or 'R'.
    s is a balanced string.
'''
s = input("Enter the 'RL' string(only caps): ")
maxbs=0
flag = 0
for i in s:
    if i=='R':
        flag=flag+1
    else:
        flag=flag-1
    if flag==0:
        maxbs=maxbs+1
print(maxbs)