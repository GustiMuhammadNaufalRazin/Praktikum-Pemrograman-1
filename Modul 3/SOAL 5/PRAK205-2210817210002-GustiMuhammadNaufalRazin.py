import cmath
a2,b2 = input().split()
a2 = int(a2)
b2 = int(b2)
c2 = (b2*b2-a2*a2) ** (1/2)
k2 = a2+b2+c2
l2 = 0.5*c2*a2
print("Alas = %.f cm"%c2)
print("Tinggi = %.f cm"%a2)
print("Keliling = %.f cm"%k2)
print("Luas = %.f cm^2"%l2)

a = int(input(""))
b = int(input(""))
c = (b*b-a*a) ** (1/2)
k = a+b+c
l = 0.5*c*a
print("Alas = %.f cm"%c)
print("Tinggi = %.f cm"%a)
print("Keliling = %.f cm"%k)
print("Luas = %.f cm^2"%l)

