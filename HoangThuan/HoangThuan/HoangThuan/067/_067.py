
def KiemTraTonTaiChuSoLe(nn):
    flag = False
    t = nn

    while t != 0:
        dv = t % 10
        if dv % 2 != 0:
            flag = True
        t = t // 10

    return flag

def main():
    n = int(input("Nhap n: "))

    kt = KiemTraTonTaiChuSoLe(n)
    if (kt):
        print("Ton tai chu so le")
    else:
        print("Khong ton tai chu so le")

if __name__ == "__main__":
    main()
