def climbingLeaderboard(ranked, player):
    # Write your code here
    ranks = []
    for item in player:
        index = 0
        found = False
        for i in range (len(ranked)):
            if item >= ranked[i]:
                ranked.insert(i, item)
                index = i
                found = True
                break
        if found == False:
            ranked.append(item)
            index = len(ranked) - 1
        rank = 1
        for j in range(1, index + 1):
            if ranked[j] < ranked[j-1]:
                rank += 1
        ranks.append(rank)
    return ranks 
    

print(climbingLeaderboard([100, 90, 90, 80, 75, 60], [50, 65, 77, 90, 102]))