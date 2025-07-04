
def TinhX64(xx):
    x2 = xx * xx
    x4 = x2 * x2
    x8 = x4 * x4
    x16 = x8 * x8
    x32 = x16 * x16
    return x32 * x32

def main():
    x = int(input("Nhap x: "))

    print("x^64 =", TinhX64(x))

if __name__ == "__main__":
    main()
