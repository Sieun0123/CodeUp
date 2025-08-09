a,b = map(int,input().split())

results = [
    a + b,
    a - b,
    b - a,
    a * b,
    b * a,
    a / b,
    b / a,
    a ** b,
    b ** a
]

max_val=results[0]
for i in results[1:]:
    if i > max_val:
        max_val = i
        
print(f"{max_val:.6f}")