def main():
    h, w = map(int, input().split())
    ans_h = 0
    ans_w = 0
    ans = 0

    if h == 1 or w == 1 :
        ans = h*w   
    else:
        if h%2 == 0:
            ans_h = h/2
        else:
            ans_h = (h+1)/2
        
        if w%2 == 0:
            ans_w = w/2
        else:
            ans_w = (w+1)/2
        
        ans = int(ans_h*ans_w)
    
    print(ans)



if __name__ == "__main__":
    main()
