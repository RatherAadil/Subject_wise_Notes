#KeyboardInterrupt Error --> When user types ctrl c program breaks

from time import sleep

second = 0

while True:
    try:
        #printing the seconds
        print(second)
        #incrementing seconds
        second +=1
        sleep(1)
    except KeyboardInterrupt:
        #ctrl c program break
        print("Please dont do that")
        break

