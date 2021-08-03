#include <vector>
#include <fstream>
#include "Server.hpp"

enum fsm_states{

	fsm_start,
	fsm_server,
	fsm_server_body,



};

struct parser {

	enum fsm_states state;
	std::vector<Server> servers;

};

void	session_fsm_step(std::ifstream config){

	std::string config_line;
	while(config)
	{
		std::getline(config, config_line);
	}
}


int main(int ac, char *av[]){

	std::ifstream config(av[1]);

	char buf;
	while(config.read(&buf, 1))
		std::cout << buf;
	return (0);
}
