if __name__ == '__main__':

    t=[]
    n = int(input())
    str=input()
    
    for s in str.split():
        temp=int(s)
        t.append(temp)
    
    t1=tuple(t)

    print(hash(t1))


