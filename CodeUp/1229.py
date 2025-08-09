h, w = map(float, input().split())

if h < 150:
    S = h - 100
elif h < 160:
    S = (h - 150) / 2 + 50
else:
    S = (h - 100) * 0.9

B = (w - S) * 100 / S

if B <= 10:
    print("정상")
elif B <= 20:
    print("과체중")
else:
    print("비만")
