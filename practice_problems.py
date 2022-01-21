#!/usr/bin/env python
# coding: utf-8

# In[7]:


def finddigits(s):
     
    # Strings of digits 0-9
    num = [ "zero", "one", "two", "three",
            "four", "five", "six", "seven",
            "eight", "nine"]
 
    # Initialize vector
    arr = [0] * (10)
 
    # Initialize answer
    ans = ""
 
    # Size of the string
    n = len(s)
 
    # Traverse the string
    for i in range(n):
        print(s[i], arr)
        if (s[i] == 'z'):
            arr[0] += 1
        if (s[i] == 'w'):
            arr[2] += 1
        if (s[i] == 'g'):
            arr[8] += 1
        if (s[i] == 'x'):
            arr[6] += 1
        if (s[i] == 'v'):
            arr[5] += 1
        if (s[i] == 'o'):
            arr[1] += 1
        if (s[i] == 's'):
            arr[7] += 1
        if (s[i] == 'f'):
            arr[4] += 1
        if (s[i] == 'h'):
            arr[3] += 1
        if (s[i] == 'i'):
            arr[9] += 1
             
    # Update the elements of the vector
    print(arr)
    arr[7] -= arr[6]
    arr[5] -= arr[7]
    arr[4] -= arr[5]
    arr[1] -= (arr[2] + arr[4] + arr[0])
    arr[3] -= arr[8]
    arr[9] -= (arr[5] + arr[6] + arr[8])
 
    # Print the digits into their
    # original format
    print(arr)
    for i in range(10):
        print(arr[i])
        for j in range(arr[i]):
            print(i, chr(i), ord('0'), ans)
            ans += chr((i) + ord('0'))
    print(ans)
    for i in range(len(arr)):
        if arr[i] ==1:
            ans=ans+num[i]
 
    # Return answer
    return ans
 
# Driver Code
if __name__ == '__main__':
     
    s = "owoftnuoer"
     
    print(finddigits(s))
 
# This code is contributed by mohit kumar 29


# In[20]:


#persons fitted in car seats to skip num of cars and find out how many cars to take
P=[1, 4, 1]
S=[1, 5, 2]
# count = 2
P=[4,4,2,4]
S=[5,5,2,5]
# count = 3
P=[2,1,1,2, 1] 
S=[2,5,7,2, 5]
# count = 2
P.sort(reverse=True)
S.sort(reverse=True)
sum_p = 0
sum_s = 0
p_count = 0
for i in range(len(P)):
    
    sum_s = sum_s+S[i]
    for j in range(p_count, len(P)):
        sum_p= sum_p+P[j]
        if sum_p>=sum_s:
            p_count = j
            break
    if sum(P)<=sum_s:
        break
        
print(i+1)
            
    
            
            
            
    
        


# In[98]:


#how many filters(/2) I can add to reduce sum of list to half of list
# An industrial company has N factories, each producing some pollution
# every month. The company has decided to reduce its total fume emissions
# by equipping some of the factories with one or more filters. Every such
# filter reduces the pollution of a factory by half. When a second (or subsequent)
# filter is applied, it again reduces by half the remaining pollution emitted after fitting the existing filter(s). For example, a factory that initially produces 6 units of pollution will generate 3 units with one filter, 1.5 units with two filters and 0.75 units with three filters. You are given an array of N integers describing the amount of pollution produced by the factories. Your task is to find the minimum number of filters needed to decrease the total sum of pollution by at least half. Write a function: class Solution { public int solution(int[] A); } which, given an array of integers A of length N, returns the minimum number of filters needed to reduce the total pollution by at least half. Examples: 1. Given A = [5, 19, 8, 1), your function should return 3. The initial total pollution is 5 + 19 +8 +1 = 33. We install two filters at the factory producing 19 units and one filter at the factory producing 8 units. Then the total pollution will be 5+ ((19 / 2) / 2) + (8 / 2) + 1 = 5 +4.75 +4 + 1 = 14.75 which is less than 33 / 2 = 16.5, so we have achieved our goal. 2. Given A = [10, 10), your function should return 2, because we may install one filter at each factory. 3. Given A = [3,0,5), your function should return 2,
# because it is sufficient to install one filter at each factory producing a
# non-zero amount of pollution.
A=[5,19,8,1]
A=[5,0,3]
A=[10,10]
sum_of_A = sum(A)
half_sum = sum_of_A/2
count = 0
A.sort(reverse=True)
sum_l = 0
while(1):
    for i in range(len(A)):
        if sum_l<=half_sum and A[i]!=0:
            sum_l = sum_l + A[i]
        if sum_l>half_sum and A[i]!=0:
            sum_l = sum_l -A[i] + A[i]/2
            count = count +1
            A[i]=A[i]/2
        if i!=len(A)-1 and A[i]>A[i+1]:
            break
        if sum(A)<=half_sum:
            break
    if sum(A)<=half_sum:
            break
    
            
print(count, "Hi")
    
        
    
            
    
    


# In[ ]:





# In[ ]:




