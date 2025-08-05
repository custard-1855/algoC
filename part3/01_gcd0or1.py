# 最大公約数を出すプログラムが欲しい
# 最大公約数が1 > 1, それ以外 > 0

# 動作が正しいか確認するのにライブラリを使いたいな
    # numpyあたり
    # 使わずに数え上げるのでもいいか
    # for文を回して和をとれば良い

def gcd(a: int, b: int):
    if a == 0:
        return b
    else:
        # print(a,b)
        return gcd(b%a, a)

if __name__ == "__main__":
    # 特定の数まで実行
    # 数はランダムに与える?
    import random
    # num = random.randint(100,200)
    num = 100
    # print(num)

    # 二次元の配列を用意
    # array = [[0] * num] * num #リストの参照がおかしくなるらしい
    array = [[0 for _ in range(num)] for _ in range(num)]

    # 最大公約数で識別
    # 互いに素な数であれば1になるはず どこかおかしい
    # print(gcd(3,2))
    # print(gcd(4,2))
    # for i in range(num-1, 1, -1): # for文の引数がおかしかった: 期待する数はstart, stop, stepなのに,startとstopが入れ替わっている
    #     for j in range(2, i-1):
    #         if gcd(i,j) == 1:
    #             array[i][j] = 1
    #             # print(i,j)
    for i in range(1, num):
        for j in range(1, i):
            if gcd(i,j) == 1:
                array[i][j] = 1
                # print(f"gcd({i}, {j}) = 1")
    print(array)

