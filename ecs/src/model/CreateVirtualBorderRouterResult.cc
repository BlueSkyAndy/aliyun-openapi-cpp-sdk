/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ecs/model/CreateVirtualBorderRouterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateVirtualBorderRouterResult::CreateVirtualBorderRouterResult() :
	ServiceResult()
{}

CreateVirtualBorderRouterResult::CreateVirtualBorderRouterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVirtualBorderRouterResult::~CreateVirtualBorderRouterResult()
{}

void CreateVirtualBorderRouterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	vbrId_ = value["VbrId"].asString();

}

std::string CreateVirtualBorderRouterResult::getVbrId()const
{
	return vbrId_;
}

void CreateVirtualBorderRouterResult::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
}
