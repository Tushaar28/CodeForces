def func(card, cards):
    for ele in cards:
        if(card[0] == ele[0] or card[1] == ele[1]):
            return "YES"
    return "NO"

card = input()
cards = list(map(str, input().split(" ")))
print(func(card, cards))