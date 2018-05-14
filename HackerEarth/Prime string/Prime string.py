#Author name: Bhavesh Gupta
#Question Link: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/primestring/
import math
def isprime(n):
    if(n==0 or n==1):
        return False
    if(n==2):
        return True
    if(n>2):
        if(n%2==0):
            return False
        else:
            sr= int(math.sqrt(n))
            for i in range(3,sr+1,2):
                if(n%i==0):
                  #  print(i)
                    return False
            
            return True
            
t=int(input())
for i in range(0,t):
    s=input()
    l=len(s)
    occur_count_list=[0]*27
    times_count_list=[0]*27
    for j in range(0,l):
        if(occur_count_list[ord(s[j])-96]==0):
            occur_count_list[ord(s[j])-96]=1
        if(occur_count_list[ord(s[j])-96]==1):
            times_count_list[ord(s[j])-96]=times_count_list[ord(s[j])-96]+1
    occur_sum=sum(occur_count_list)
    #print(occur_sum)
    flag=0
    if(isprime(occur_sum)):
        for _ in times_count_list:
            if(_==0):
                continue
            if(not isprime(_)):
               # print(_)
                print("NO")
                flag=1
                break
        if(flag!=1):
            print("YES")
    else:
        print("NO")