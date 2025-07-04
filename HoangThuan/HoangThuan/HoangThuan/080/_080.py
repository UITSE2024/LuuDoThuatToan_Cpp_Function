
def TinhSn(xx, nn):
    s = 1
    t = 1
    i = 1

    while i <= nn:
        t = t * xx
        s = s + (i + 1) * t
        i = i + 1

    return s

def main():
    x = int(input("Nhap x: "))
    n = int(input("Nhap n: "))

    print("S(n) =", TinhSn(x, n))

if __name__ == "__main__":
    main()