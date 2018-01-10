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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCERAMROLERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCERAMROLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceRamRoleResult : public ServiceResult
			{
			public:
				struct InstanceRamRoleSet
				{
					std::string ramRoleName;
					std::string instanceId;
				};


				DescribeInstanceRamRoleResult();
				explicit DescribeInstanceRamRoleResult(const std::string &payload);
				~DescribeInstanceRamRoleResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<InstanceRamRoleSet> getInstanceRamRoleSets()const;
				void setInstanceRamRoleSets(const std::vector<InstanceRamRoleSet>& instanceRamRoleSets);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string regionId_;
				std::vector<InstanceRamRoleSet> instanceRamRoleSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCERAMROLERESULT_H_