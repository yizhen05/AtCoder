A, op, B = input().split()
A = int(A)
B = int(B)

if op == "+":
    print(A + B)
if op == "-":
    print(A - B)
if op == "*":
    print(A * B)
if op == "/" and B != 0:
    print(A//B)
if op == "/" and B == 0:
    print("error")
if op == "?":
    print("error")
if op == "!":
    print("error")
if op == "=":
    print("error")
