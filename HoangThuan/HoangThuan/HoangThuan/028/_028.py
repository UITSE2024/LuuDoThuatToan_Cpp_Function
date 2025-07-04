
def TinhSn(nn):
    s = 0
    i = 1

    while i <= nn:
        s = s + i**2
        i = i + 1

    return s

def main():
    n = int(input("Nhap n: "))

    print("S(n) =", TinhSn(n))

if __name__ == "__main__":
    main()
