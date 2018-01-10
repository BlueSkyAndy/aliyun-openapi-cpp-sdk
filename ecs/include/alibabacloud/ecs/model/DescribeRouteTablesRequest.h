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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeRouteTablesRequest : public EcsRequest
			{

			public:
				DescribeRouteTablesRequest();
				~DescribeRouteTablesRequest();

				std::string getRouterType()const;
				void setRouterType(const std::string& routerType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRouteTableName()const;
				void setRouteTableName(const std::string& routeTableName);
				std::string getVRouterId()const;
				void setVRouterId(const std::string& vRouterId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRouterId()const;
				void setRouterId(const std::string& routerId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRouteTableId()const;
				void setRouteTableId(const std::string& routeTableId);

            private:
				std::string routerType_;
				long resourceOwnerId_;
				std::string routeTableName_;
				std::string vRouterId_;
				std::string resourceOwnerAccount_;
				std::string routerId_;
				std::string ownerAccount_;
				int pageSize_;
				long ownerId_;
				int pageNumber_;
				std::string routeTableId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEROUTETABLESREQUEST_H_