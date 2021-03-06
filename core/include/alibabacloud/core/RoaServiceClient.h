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

#ifndef ALIBABACLOUD_CORE_ROASERVICECLIENT_H_
#define ALIBABACLOUD_CORE_ROASERVICECLIENT_H_

#include <map>
#include <memory>
#include <string>
#include "CoreClient.h"
#include "CredentialsProvider.h"
#include "HmacSha1Signer.h"
#include "HttpRequest.h"
#include "RoaServiceRequest.h"

namespace AlibabaCloud
{
	class RoaErrorMarshaller;
	class ALIBABACLOUD_CORE_EXPORT RoaServiceClient : public CoreClient
	{
	public:
		typedef Outcome<Error, std::string> JsonOutcome;

		RoaServiceClient(const std::string & servicename, const std::shared_ptr<CredentialsProvider> &credentialsProvider,
			const ClientConfiguration &configuration,
			const std::shared_ptr<Signer> &signer = std::make_shared<HmacSha1Signer>());
		virtual ~RoaServiceClient();

	protected:
		JsonOutcome makeRequest(const std::string &endpoint, const RoaServiceRequest &msg, HttpRequest::Method method = HttpRequest::Method::Get)const;
		virtual HttpRequest buildHttpRequest(const std::string & endpoint, const ServiceRequest &msg, HttpRequest::Method method)const override;
		HttpRequest buildHttpRequest(const std::string & endpoint, const RoaServiceRequest &msg, HttpRequest::Method method)const;
	private:
		std::string canonicalizedHeaders(const HttpMessage::HeaderCollection &headers)const;
		std::string canonicalizedResource(const std::string &path, std::map <std::string, std::string> &params)const;
		
		std::shared_ptr<CredentialsProvider> credentialsProvider_;
		std::shared_ptr<Signer> signer_;
	};
}
#endif // !ALIBABACLOUD_CORE_ROASERVICECLIENT_H_
