file=input("enter file name")
mess=input("enter message for file")
type(file)
f=open(file+".txt","a")
f.write("hello world")
f.close()