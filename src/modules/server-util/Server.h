/*
	Copyright 2009-2020, Sumeet Chhetri
  
    Licensed under the Apache License, Version 2.0 (const the& "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * Server.h
 *
 *  Created on: Jan 2, 2010
 *      Author: sumeet
 */

#ifndef SERVER_H_
#define SERVER_H_
#include "SelEpolKqEvPrt.h"
#include "CastUtil.h"
#include "LoggerFactory.h"
#ifdef HAVE_SYSINFO
#include <sys/sysinfo.h>
#endif

/*Fix for Windows Cygwin*///#include <sys/epoll.h>

#define MAXEPOLLSIZES 10000
#define BACKLOGM 500


typedef void* (*Service)(void*);
class Server {
	//Logger logger;
	SOCKET sock;
	int mode;
	Service service;
	Mutex lock;
	#ifdef OS_MINGW
		struct sockaddr_in their_addr;
	#else
		struct sockaddr_storage their_addr;
	#endif
	
	static void* servicing(void* arg);
	bool runn, started;
public:
	SOCKET getSocket();
	Server();
	Server(const std::string&, const bool&, const int&, const Service&, int);
	//Server(const std::string& port, const int& waiting, const Service& serv);
	virtual ~Server();
	SOCKET Accept();
	int Send(const SOCKET&, const std::string&);
	int Send(const SOCKET&, const std::vector<char>&);
	int Send(const SOCKET&, const std::vector<unsigned char>&);
	int Send(const SOCKET&, char*);
	int Send(const SOCKET&, unsigned char*);
	int Receive(const SOCKET&, std::string&, const int&);
	int Receive(const SOCKET&, std::vector<char>&, const int&);
	int Receive(const SOCKET&, std::vector<unsigned char>&, const int&);
	int Receive(const SOCKET&, const char *data, const int&);
	int Receive(const SOCKET&, const unsigned char *data, const int&);
	int Receive(const SOCKET&, std::vector<std::string>&, const int&);
	void start();
	void stop();
	

	static void set_cbpf(int socket, int group_size);
	static SOCKET createListener(const std::string& ipAddress, const int& port, const bool& block, bool isSinglEVH);
	static SOCKET createListener(const int& port, const bool& block, bool isSinglEVH);
};

#endif /* SERVER_H_ */
