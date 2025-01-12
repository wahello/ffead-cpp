/*
	Copyright 2009-2020, Sumeet Chhetri

    Licensed under the Apache License, Version 2.0 (the "License");
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
 * Router.h
 *
 *  Created on: 04-Feb-2020
 *      Author: sumeetc
 */

#ifndef SRC_FRAMEWORK_ROUTER_H_
#define SRC_FRAMEWORK_ROUTER_H_
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "ClassInfo.h"
#include "map"

class Router {
public:
	virtual bool route(HttpRequest* req, HttpResponse* res, BaseSocket* sif)=0;
	virtual ~Router(){}
};

#endif /* SRC_FRAMEWORK_ROUTER_H_ */
