import socket

#creatinig a server
server = socket.socket()
print("socket created")


#binding the server with the ip and port address
server.bind(('localhost', 8888))
server.listen(3) #listening from client

print("waiting for connection")

while True:  #listening to the client contineously
    cs, addr = server.accept()  #accepting client requests and getting the client socket and address
    name = cs.recv(1024).decode()  #receving data from client
    print("connected with", addr,name)
    cs.send(b"Welcome to the server")  #sending data to the client
    cs.close()  #closing server









