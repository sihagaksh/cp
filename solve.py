t=int(input())
for _ in range(t):
    k=int(input())
    l1=int(input())
    r1=int(input())
    l2=int(input())
    r2=int(input())

    ans=min(r1,r2)-max(l1,l2)
    l=[]
    cnt=1;
    if(ans<0):
        ans=0;
    while k**cnt<max(r1/l2,r2/l1):
        l.append(k**cnt)
        cnt+=1

    val = min(r1/l2,r2/l1)
    val=val//1

    for el in l:
        if(el<=val):
            ans+=1
        else:
            break





    