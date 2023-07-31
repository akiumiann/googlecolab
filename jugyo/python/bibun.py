#!/usr/bin/env python
# coding: utf-8

# In[35]:


import numpy as np
import matplotlib.pyplot as plt

#使う関数の定義．
def derivative(f, x, h):
  return (f(x+h) - f(x)) / h
def func(x):
  return np.sin(x)

#一回微分の値を数値的に求めよ．
h = 0.000000001
x = 0.3*np.pi
t = derivative(func, x, h)
print(t)

#y=h,z=誤差でグラフを作成．
y = []
z = []

for num in range(1,10):
    num = 2**num
    y.append(num)
    num2 = 1/num
    t = derivative(func, x, num2)
    u = 0.587785252292473 - t
    z.append(u)
    
print(y)
print(z)
plt.plot(y,z)
plt.show()


# In[40]:


from sympy import *

#値がπになるかプログラムで確認．
x = symbols('x')
f = 4/(1+x**2)

integrate(f,(x,0,1))


# In[25]:


import numpy as np
import matplotlib.pyplot as plt

#使う関数の定義
def f(x):
    return 4/(1+x**2)

def sigma(func, frm, to):
    result = 0;
    for i in range(frm, to+1):
        result += func(i/10000) 
    return result

#y=h,z=誤差でグラフ作成
y = []
z = []

for num in range(1,10000,1000):
    h = 1/num
    y.append(h)
    t = h*sigma(f,1,num)
    u = t-np.pi
    z.append(u)
          
print(y)
print(z)
plt.plot(y,z)
plt.xlim([0.001,0])
plt.ylim([0,1])
plt.show()


# In[7]:


import numpy as np
import matplotlib.pyplot as plt

#解きたい方程式
def func_f(x):
    return x**2-4*x

kon = (4+np.sqrt(4**2-4*1*0))/2*1
kon2 = (4-np.sqrt(4**2-4*1*0))/2*1

print("kon:{:3f}".format(kon))
print("kon2:{:3f}".format(kon2))

#二分法
def bisection(func_f, x_min, x_max, error=1e-10, max_loop=100):
   
    num_calc = 0
    print("{:3d}:  {:.15f} <= x <= {:.15f}".format(num_calc, x_min, x_max))

    while(True):
        x_mid = (x_max +x_min)/2.0
        
        if (0.0 < func_f(x_mid)*func_f(x_max)):
            x_max = x_mid 
        else: 
            x_min = x_mid 
            
        num_calc += 1  
        print("{:3d}:  {:.15f} <= x <= {:.15f}".format(num_calc, x_min, x_max))

        if((x_max-x_min <= error) or max_loop <= num_calc):
            break
            
    print("x = {:.15f}".format(x_mid))

    return x_mid


#可視化
def visualization(func_f, x_min, x_max, x_solved):
   
    exact_x = np.arange(x_min,x_max, (x_max-x_min)/500.0)
    exact_y = func_f(exact_x)

    plt.plot(exact_x,exact_y)
    plt.scatter(x_solved,0.0)
    plt.axhline(0, color='#000000')
    plt.text(x_solved,0.0, "$x$ = {:.9f}".format(x_solved), va='bottom', color='#0000ff')
    plt.show()
    
#メイン実行部
if (__name__ == '__main__'):
    solution = bisection(func_f, -1.0, 100)

    visualization(func_f, solution-1.0, solution+1.0, solution)

