#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream>

class Server{

	public:
		Server();
		~Server();
		
	private:
		std::string name;
		uint16_t	port;
		std::string	error_page;
		std::string	client_max_body_size;
		std::string location;
};

#endif
