>func [] n c = 0
>func (x:xs) n c = if(c==n) then x else func xs n (c+1)
