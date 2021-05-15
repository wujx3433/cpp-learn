while(True):
    print(reduce(lambda x,y:x+y,[reduce(lambda x,y:x*y,range(1,i+1)) for i in range(1, int(raw_input())+1)]))