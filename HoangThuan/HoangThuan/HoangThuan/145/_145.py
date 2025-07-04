
def KiemTraSoChinhPhuong(nn):
    flag = False
    i = 0

    while i <= nn:
        if i * i == nn:
            flag = True
        i = i + 1

    return flag

def main():
    n = int(input("Nhap n: "))

    kt = KiemTraSoChinhPhuong(n)
    if kt:
        print("La so chinh phuong")
    else:
        print("Khong la so chinh phuong")

if __name__ == "__main__":
    main()
