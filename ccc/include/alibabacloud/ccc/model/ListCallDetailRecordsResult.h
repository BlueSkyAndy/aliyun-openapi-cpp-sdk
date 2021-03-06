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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListCallDetailRecordsResult : public ServiceResult
			{
			public:
				struct CallDetailRecords
				{
					struct CallDetailRecord
					{
						struct CallDetailAgent
						{
							int holdTime;
							int workTime;
							std::string skillGroupName;
							long startTime;
							int queueTime;
							std::string contactId;
							std::string agentId;
							std::string agentName;
							int ringTime;
							int talkTime;
						};
						struct Recording
						{
							std::string filePath;
							std::string calledNumber;
							std::string contactType;
							std::string instanceId;
							std::string fileName;
							std::string channel;
							long startTime;
							int duration;
							std::string contactId;
							std::string callingNumber;
							std::string fileDescription;
							std::string agentId;
							std::string agentName;
						};
						std::string calledNumber;
						std::string contactType;
						std::string contactDisposition;
						std::string instanceId;
						int satisfaction;
						std::vector<CallDetailRecord::CallDetailAgent> agents;
						long startTime;
						int duration;
						std::vector<CallDetailRecord::Recording> recordings;
						std::string contactId;
						std::string callingNumber;
						std::string extraAttr;
						std::string skillGroupNames;
						std::string agentNames;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<CallDetailRecord> list;
				};


				ListCallDetailRecordsResult();
				explicit ListCallDetailRecordsResult(const std::string &payload);
				~ListCallDetailRecordsResult();
				std::string getMessage()const;
				std::vector<CallDetailRecords> getCallDetailRecords()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<CallDetailRecords> callDetailRecords_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_