
def TinhSinx(xx):
    xxx = (xx * 3.14) / 180
    s = xxx
    t = xxx
    m = 1
    dau = -1
    e = xxx
    i = 3

    while e >= 1e-6:
        t = t * xxx * xxx
        m = m * (i - 1) * i
        e = t / m
        s = s + dau * e
        dau = -dau
        i = i + 2

    return s

def main():
    x = int(input("Nhap x: "))

    print("sin(x) =", TinhSinx(x))

if __name__ == "__main__":
    main()
