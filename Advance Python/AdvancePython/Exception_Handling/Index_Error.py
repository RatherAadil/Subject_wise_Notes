#Index Error
list =[1,2,3,4,5]
ind = 0
do_it = True

while do_it:
    try:
        print(list[ind])
        ind +=1
    except IndexError:
            do_it = False
            print("Reached the end of list")

print("outside code")