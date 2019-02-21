if __name__ == '__main__':
    print("窓は閉めましたよね？(y/n)")
    while True:
        c = input()
        if c is not "y":
            print("窓を閉めてください。鳩が入ります。")
        else:
            break
    print("お疲れ様でした。")