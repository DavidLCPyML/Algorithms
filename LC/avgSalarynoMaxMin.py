salary = list(map(int, input().split()))

tot_ans = sum(a) - max(salary) - min(salary)
print(tot_ans / (len(salary) - 2))