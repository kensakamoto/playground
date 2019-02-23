
import sys

def func(a):
    ret = 0
    if a == 1:
        ret = a
    else:
        ret = a + func(a - 1)
    return ret


if __name__ == "__main__":
    result = func(int(sys.argv[1]))
    print(result)
