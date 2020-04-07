def func(buy, sell, money):
    buy = sorted(buy)
    sell = sorted(sell)
    if(buy[0] > sell[-1]):
        return money
    bought = money // buy[0]
    money -= bought * buy[0]
    money += bought * sell[-1]
    return money

n, m, r = map(int, input().split())
buy = list(map(int, input().split()))
sell = list(map(int, input().split()))
print(func(buy, sell, r))