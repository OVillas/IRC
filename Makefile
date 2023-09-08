all:
	g++ irc_client.cpp -o client -lpthread
	g++ irc_server.cpp -o server -lpthread
local:
	 ./client 127.0.0.1