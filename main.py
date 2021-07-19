import math
import random

print("Santa Clara")
sum=0
list=[]
a=input("Enter the command : ")
if a=="sum":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a+b)

if a=="sub":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a-b)

if a =="random.num":
    rand = random.randint(0,99999)
    print("The random positive number ", rand)
if a=="product":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a*b)

if a=="div":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a/b)

if a=="mod":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a%b)

if a=="mod":
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a%b)

if a=="divisor":                                    #new command
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    print(a//b)

if a=="square.num":
    a = int(input("Enter the number : "))
    print(a*a)

if a=="cube.num":
    a = int(input("Enter the first number : "))
    print(a*a*a)

if a=="power":
    a = int(input("Enter the exponent : "))
    b = int(input("Enter the power : "))
    print(a**b)

if a=="square.area":
    a = int(input("Enter the length of a side : "))
    print(a*a)

if a=="rectangle.perimeter":
    a = int(input("Enter the length : "))
    b = int(input("Enter the breadth : "))
    print(2*(a+b))

if a=="triangle.area":
    a = int(input("Enter the length of the base : "))
    b = int(input("Enter the height : "))
    print(0.5*a*b)

if a=="triangle.perimeter":
    a = int(input("Enter the length of side 1 : "))
    b = int(input("Enter the length of side 2 : "))
    c = int(input("Enter the length of side 3 : "))
    print(a+b+c)

if a=="square.diagonal":
    a = int(input("Enter the length of the side : "))
    b = math.sqrt(2)
    print(a*b)

if a=="rectangle.diagonal":
    a = int(input("Enter the length : "))
    b = int(input("Enter the breadth : "))
    sum = math.sqrt((a*a) + (b*b))
    print(sum)

if a=="root":
    b = int(input("Enter the number : "))
    sum = math.sqrt(b)
    print(sum)

if a=="square.perimeter":
    a = int(input("Enter the length of the side : "))
    print(4*a)

if a=="trapezium.area":
    a = int(input("Enter the length of base 1 : "))
    b = int(input("Enter the length of base 2 : "))
    c = int(input("Enter the length of height : "))
    print(((a+b)*0.5)*c)

if a=="polygon.area":
    a = int(input("Enter the number of sides : "))
    b = int(input("Enter the length of side : "))
    c = int(input("Enter the length of apothem : "))
    print(a*b*c*0.5)

if a=="rectangle.area":
    a = int(input("Enter the length : "))
    b = int(input("Enter the breadth : "))
    print(a*b)

if a=="pentagon.area":
    a = int(input("Enter the length of side : "))
    sum = 0.25*math.sqrt(5*(5+(2*math.sqrt(5))))*a**2
    print(sum)

if a=="hexagon.area":
    a = int(input("Enter the length of side : "))
    sum = 1.5*math.sqrt(3)*a**2
    print(sum)

if a=="cube.root":
    a = int(input("Enter the length of side: "))
    print(a**(1/3))

if a=="cos":
    a = int(input("Enter the angle in radians: "))
    print(math.cos(a))

if a=="sin":
    a = int(input("Enter the angle in radians: "))
    print(math.sin(a))

if a=="tan":
    a = int(input("Enter the angle in radians : "))
    print(math.tan(a))

if a=="deg2rad":
    a = int(input("Enter the angle in degrees : "))
    sum = a*22/(180*7)
    print(sum)

if a=="rad2deg":
    a = int(input("Enter the angle in degrees : "))
    sum = a*(180/3.14)
    print(sum)

if a=="sin.inverse":
    a = int(input("Enter the angle in radians : "))
    print(math.asin(a))

if a=="tan.inverse":
    a = int(input("Enter the angle in radians : "))
    print(math.atan(a))

if a=="cos.inverse":
    a = int(input("Enter the angle in radians : "))
    print(math.acos(a))

if a=="hyperbolic.cos":
    a = int(input("Enter the angle in radians : "))
    print(math.cosh(a))

if a=="hyperbolic.sin":
    a = int(input("Enter the angle in radians : "))
    print(math.sinh(a))

if a=="hyperbolic.tan":
    a = int(input("Enter the angle in radians : "))
    print(math.tanh(a))

if a=="log":
    a = int(input("Enter the angle in radians : "))
    print(math.log(a))

if a=="log10":
    a = int(input("Enter the angle in radians : "))
    print(math.log10(a))

if a=="(a+b)2":
    a = int(input("Enter the number : "))
    b = int(input("Enter the second number : "))
    c = a**2
    d = b**2
    e = 2*a*b
    print(c+d+e)

if a=="(a+b)2":
    a = int(input("Enter the number : "))
    b = int(input("Enter the second number : "))
    c = a**2
    d = b**2
    e = 2*a*b
    print(c+d-e)

if a=="a2-b2":
    a = int(input("Enter the number : "))
    b = int(input("Enter the second number : "))
    print((a-b)*(a+b))

if a=="(x+a)(x+b)":
    x = int(input("Enter the first number"))
    a = int(input("Enter the second number : "))
    b = int(input("Enter the third number : "))
    c = x**2
    d = (a+b)*x
    e = a*b
    print(c+d+e)

if a=="(a+b+c)2":
    x = int(input("Enter the first number : "))
    a = int(input("Enter the second number : "))
    b = int(input("Enter the third number : "))
    c = x**2
    d = a**2
    e = b**2
    f = 2*x*a
    g = 2*a*b
    h = 2*x*b
    print(c+d+e+f+g+h)

if a=="(a+b)3":
    x = int(input("Enter the first number : "))
    a = int(input("Enter the second number : "))
    b = a**3
    c = x**3
    d = 3*a*x*(a+x)
    print(b+c+d)

if a=="(a-b)3":
    x = int(input("Enter the first number : "))
    a = int(input("Enter the second number : "))
    b = a**3
    c = x**3
    d = 3*a*x*(a-x)
    print(b-c-d)

if a=="circle.circumference":
    x = int(input("Enter the radius : "))
    sum = 3.14*2*x
    print(sum)

if a=="circle.diameter":
    x = int(input("Enter the radius : "))
    sum = 2*x
    print(sum)

if a=="sphere.area":
    x = int(input("Enter the radius : "))
    sum = 3.14*4*x**2
    print(sum)

if a=="hemisphere.csa":
    x = int(input("Enter the radius : "))
    sum = 3.14*4*x**2
    print(sum)

if a=="sphere.area":
    x = int(input("Enter the radius : "))
    a = 2*3.14*x**2
    b = 3.14*x**2
    sum = a+b
    print(sum)

if a=="sphere.volume":
    x = int(input("Enter the radius : "))
    sum = (4/3)*3.14*x**3
    print(sum)

if a=="hemisphere.volume":
    x = int(input("Enter the radius : "))
    sum = ((4/3)*3.14*x**3)*0.5
    print(sum)

if a=="semicircle.diameter":
    x = int(input("Enter the radius : "))
    sum = 2*x
    print(sum)

if a=="cone.volume":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height"))
    sum = (a/3)*3.14*x**2
    print(sum)

if a=="cone.csa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    b = math.sqrt(x**2+a**2)
    sum = 3.14*x*b
    print(sum)

if a=="cone.tsa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    b = math.sqrt(x**2+a**2)
    sum = 3.14*x*(b+x)
    print(sum)

if a=="cone.csa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    b = math.sqrt(x**2+a**2)
    sum = 3.14*x*(b+x)
    print(sum)

if a=="cylinder.tsa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    sum = 3.14*2*x*(x+a)
    print(sum)

if a=="cylinder.csa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    sum = 3.14*2*x*a
    print(sum)

if a=="cylinder.tsa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    sum = 3.14*(x**2)*a
    print(sum)

if a=="cylinder.tsa":
    x = int(input("Enter the radius : "))
    a = int(input("Enter the height : "))
    sum = 3.14*2*x*(x+a)
    print(sum)

if a=="rhombus.area":
    x = int(input("Enter the length od diagonal 1 : "))
    a = int(input("Enter the length od diagonal 2 : "))
    sum = (x*a)/2
    print(sum)

if a=="kite.area":
    x = int(input("Enter the length od diagonal 1 : "))
    a = int(input("Enter the length od diagonal 2 : "))
    sum = (x*a)/2
    print(sum)

if a =="matrix.add":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a =="matrix.sub":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a =="matrix.product":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a =="multiply":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a =="add":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a =="negadd":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a=="parabola.xaxis":
    print("X-axis parabola's equation (y-k)^2=4a(x-h)")
    h = int(input("Enter h : "))
    k = int(input("Enter k : "))
    a = int(input("Enter a : "))
    print("Focus : ","(",a+h,",",k,")")
    print("Vertex : ","(",h,",",k,")")
    print("Directrix : ",-k+h)
    print("Axis y : ", k)
    print("Tangent at vertex x : ", h)
    print("Latus rectum : ", a+h)
    if (a<0):
        print("Length of latus rectum : ", -4*a)
    else:
        print("Length of latus rectum : ", 4*a)
    print("End points of latus rectum : (",a+h,",",2*a+k,")"," & ","(",a+h,",",-2*a+k,")")

if a=="parabola.yaxis":
    print("Y-axis parabola's equation (x-h)^2=4b(y-k)")
    h = int(input("Enter h : "))
    k = int(input("Enter k : "))
    b = int(input("Enter b : "))
    print("Focus : ","(",h,",",k+b,")")
    print("Vertex : ","(",h,",",k,")")
    print("Directrix : ",-k+h)
    print("Axis x : ", h)
    print("Tangent at vertex y : ", k)
    print("Latus rectum : ", b+k)
    if (a<0):
        print("Length of latus rectum : ", -4*b)
    else:
        print("Length of latus rectum : ", 4*b)
    print("End points of latus rectum : (",2*b+h,",",b+k,")"," & ","(",-2*b+h,",",-b+k,")")

if a=="hyperbola" :
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a=="ellipse":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a=="permutation":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    ptint("Developer : I'm sorry.")

if a=="combination":
    print("The developer is still working on it.")
    print("-------Message from developer---------")
    print("Developer : I'm sorry.")

print("Do you want to continue ?")
print("Press 1 for closing")
z = int(input("Enter your choice:"))
if z==1:
        print("closing")
else:
    print("Oops")
