
def TinhAn(nn):
    at = 2
    i = 2

    while i <= nn:
        ahh = (at ** 2 + 2) / (2 * at)
        i = i + 1
        at = ahh

    return ahh

def main():
    n = int(input("Nhap n: "))

    print("So hang thu", n, "cua day la:", TinhAn(n))

if __name__ == "__main__":
    main()
