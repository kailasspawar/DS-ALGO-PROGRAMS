>data Tree a = Mt | Root a [Tree a] deriving (Eq,Show)
>t1 = Root 20 [Root 10 [],Root 30 []]
>t2 = Root 50 [Root 40 []]
>t3 = Root 45 [Root 34 [],Root 56 []]
>s5 = Root 5 [Root 30 [], Root 7 []]
>s4 = Root 40 [Root 30 [], Root 20 [], s100, s10]
>s100 = Root 100 [Root 40 [], Root 20 []]
>s10 = Root 30 [s5, Root 7 [], Root 8 []]
>count Mt = 0
>count (Root a ts) = 1 + (sum(map count ts))

>height Mt = 0
>height (Root a ts) = 1 + (maximum'(map height ts))
> where 
> maximum' ls = if ls==[] then 0 else maximum ls

>search e Mt = False
>search e (Root a ts) | (e==a) = True
>      	|otherwise = or(map (search e) ts)

>findpaths::(Eq a) => [a]->a->(Tree a)->[[a]]
>findpaths ps e Mt = []
>findpaths ps e (Root a ts) | e == a = [a:ps]
>	|otherwise = concat (map (findpaths (a:ps) e) ts)

>ppp xs ys = map snd (zip xs ys)

