import socket

client = socket.socket()   #creating client
client.connect(('localhost', 8888))  #assigning the sever ip and port to the client

name = input("Enter your name: ")

client.send(bytes(name, 'utf-8'))  #sending data to the sever
print(client.recv(1024).decode('utf-8'))  #receiving data from the sever

