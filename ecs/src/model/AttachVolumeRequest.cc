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

#include <alibabacloud/ecs/model/AttachVolumeRequest.h>

using AlibabaCloud::Ecs::Model::AttachVolumeRequest;

AttachVolumeRequest::AttachVolumeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AttachVolume")
{}

AttachVolumeRequest::~AttachVolumeRequest()
{}

long AttachVolumeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachVolumeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachVolumeRequest::getInstanceId()const
{
	return instanceId_;
}

void AttachVolumeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AttachVolumeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachVolumeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachVolumeRequest::getRegionId()const
{
	return regionId_;
}

void AttachVolumeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AttachVolumeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AttachVolumeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AttachVolumeRequest::getVolumeId()const
{
	return volumeId_;
}

void AttachVolumeRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

long AttachVolumeRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachVolumeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

