#To find the total number of jumps need for a monkey-man to escape from a jail of several walls
x=int(input("Enter the jump height:"))
y=int(input("Enter the fall height:"))
n=int(input("Enter the number of walls:"))
N=[]
result=0
'''
    x is height that a monkey-man can jump
    y is the height that a monkey-man falls after each jump
    n is number of walls
    N in array is height of each walls(n)
'''
for i in range(n):
    c=int(input("Enter the height of wall {}:".format((i+1))))
    N.append(c)
for i in range(n):
    temp=x-y
    result+=1
    while(temp<=N[i]):
        if((temp+y)>=N[i]):
            break
        result+=1
        temp*=2
print("Therefore the monkey-man needs {} jumps to escape from jail".format(result))
