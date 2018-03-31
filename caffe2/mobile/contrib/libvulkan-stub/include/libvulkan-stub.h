/*
* Copyright (c) 2016-2017, ARM Limited and Contributors
*
* SPDX-License-Identifier: MIT
* 
* Permission is hereby granted, free of charge,
* to any person obtaining a copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation the rights to
* use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* This header is autogenerated by vulkan_loader_generator.py */
#ifndef VULKAN_SYMBOL_WRAPPER_H
#define VULKAN_SYMBOL_WRAPPER_H
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>

#ifdef __cplusplus
extern "C" {
#endif

extern PFN_vkCreateInstance vulkanSymbolWrapper_vkCreateInstance;
#define vkCreateInstance vulkanSymbolWrapper_vkCreateInstance
extern PFN_vkEnumerateInstanceExtensionProperties vulkanSymbolWrapper_vkEnumerateInstanceExtensionProperties;
#define vkEnumerateInstanceExtensionProperties vulkanSymbolWrapper_vkEnumerateInstanceExtensionProperties
extern PFN_vkEnumerateInstanceLayerProperties vulkanSymbolWrapper_vkEnumerateInstanceLayerProperties;
#define vkEnumerateInstanceLayerProperties vulkanSymbolWrapper_vkEnumerateInstanceLayerProperties
extern PFN_vkDestroyInstance vulkanSymbolWrapper_vkDestroyInstance;
#define vkDestroyInstance vulkanSymbolWrapper_vkDestroyInstance
extern PFN_vkEnumeratePhysicalDevices vulkanSymbolWrapper_vkEnumeratePhysicalDevices;
#define vkEnumeratePhysicalDevices vulkanSymbolWrapper_vkEnumeratePhysicalDevices
extern PFN_vkGetPhysicalDeviceFeatures vulkanSymbolWrapper_vkGetPhysicalDeviceFeatures;
#define vkGetPhysicalDeviceFeatures vulkanSymbolWrapper_vkGetPhysicalDeviceFeatures
extern PFN_vkGetPhysicalDeviceFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceFormatProperties;
#define vkGetPhysicalDeviceFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceFormatProperties
extern PFN_vkGetPhysicalDeviceImageFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceImageFormatProperties;
#define vkGetPhysicalDeviceImageFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceImageFormatProperties
extern PFN_vkGetPhysicalDeviceProperties vulkanSymbolWrapper_vkGetPhysicalDeviceProperties;
#define vkGetPhysicalDeviceProperties vulkanSymbolWrapper_vkGetPhysicalDeviceProperties
extern PFN_vkGetPhysicalDeviceQueueFamilyProperties vulkanSymbolWrapper_vkGetPhysicalDeviceQueueFamilyProperties;
#define vkGetPhysicalDeviceQueueFamilyProperties vulkanSymbolWrapper_vkGetPhysicalDeviceQueueFamilyProperties
extern PFN_vkGetPhysicalDeviceMemoryProperties vulkanSymbolWrapper_vkGetPhysicalDeviceMemoryProperties;
#define vkGetPhysicalDeviceMemoryProperties vulkanSymbolWrapper_vkGetPhysicalDeviceMemoryProperties
extern PFN_vkGetDeviceProcAddr vulkanSymbolWrapper_vkGetDeviceProcAddr;
#define vkGetDeviceProcAddr vulkanSymbolWrapper_vkGetDeviceProcAddr
extern PFN_vkCreateDevice vulkanSymbolWrapper_vkCreateDevice;
#define vkCreateDevice vulkanSymbolWrapper_vkCreateDevice
extern PFN_vkDestroyDevice vulkanSymbolWrapper_vkDestroyDevice;
#define vkDestroyDevice vulkanSymbolWrapper_vkDestroyDevice
extern PFN_vkEnumerateDeviceExtensionProperties vulkanSymbolWrapper_vkEnumerateDeviceExtensionProperties;
#define vkEnumerateDeviceExtensionProperties vulkanSymbolWrapper_vkEnumerateDeviceExtensionProperties
extern PFN_vkEnumerateDeviceLayerProperties vulkanSymbolWrapper_vkEnumerateDeviceLayerProperties;
#define vkEnumerateDeviceLayerProperties vulkanSymbolWrapper_vkEnumerateDeviceLayerProperties
extern PFN_vkGetDeviceQueue vulkanSymbolWrapper_vkGetDeviceQueue;
#define vkGetDeviceQueue vulkanSymbolWrapper_vkGetDeviceQueue
extern PFN_vkQueueSubmit vulkanSymbolWrapper_vkQueueSubmit;
#define vkQueueSubmit vulkanSymbolWrapper_vkQueueSubmit
extern PFN_vkQueueWaitIdle vulkanSymbolWrapper_vkQueueWaitIdle;
#define vkQueueWaitIdle vulkanSymbolWrapper_vkQueueWaitIdle
extern PFN_vkDeviceWaitIdle vulkanSymbolWrapper_vkDeviceWaitIdle;
#define vkDeviceWaitIdle vulkanSymbolWrapper_vkDeviceWaitIdle
extern PFN_vkAllocateMemory vulkanSymbolWrapper_vkAllocateMemory;
#define vkAllocateMemory vulkanSymbolWrapper_vkAllocateMemory
extern PFN_vkFreeMemory vulkanSymbolWrapper_vkFreeMemory;
#define vkFreeMemory vulkanSymbolWrapper_vkFreeMemory
extern PFN_vkMapMemory vulkanSymbolWrapper_vkMapMemory;
#define vkMapMemory vulkanSymbolWrapper_vkMapMemory
extern PFN_vkUnmapMemory vulkanSymbolWrapper_vkUnmapMemory;
#define vkUnmapMemory vulkanSymbolWrapper_vkUnmapMemory
extern PFN_vkFlushMappedMemoryRanges vulkanSymbolWrapper_vkFlushMappedMemoryRanges;
#define vkFlushMappedMemoryRanges vulkanSymbolWrapper_vkFlushMappedMemoryRanges
extern PFN_vkInvalidateMappedMemoryRanges vulkanSymbolWrapper_vkInvalidateMappedMemoryRanges;
#define vkInvalidateMappedMemoryRanges vulkanSymbolWrapper_vkInvalidateMappedMemoryRanges
extern PFN_vkGetDeviceMemoryCommitment vulkanSymbolWrapper_vkGetDeviceMemoryCommitment;
#define vkGetDeviceMemoryCommitment vulkanSymbolWrapper_vkGetDeviceMemoryCommitment
extern PFN_vkBindBufferMemory vulkanSymbolWrapper_vkBindBufferMemory;
#define vkBindBufferMemory vulkanSymbolWrapper_vkBindBufferMemory
extern PFN_vkBindImageMemory vulkanSymbolWrapper_vkBindImageMemory;
#define vkBindImageMemory vulkanSymbolWrapper_vkBindImageMemory
extern PFN_vkGetBufferMemoryRequirements vulkanSymbolWrapper_vkGetBufferMemoryRequirements;
#define vkGetBufferMemoryRequirements vulkanSymbolWrapper_vkGetBufferMemoryRequirements
extern PFN_vkGetImageMemoryRequirements vulkanSymbolWrapper_vkGetImageMemoryRequirements;
#define vkGetImageMemoryRequirements vulkanSymbolWrapper_vkGetImageMemoryRequirements
extern PFN_vkGetImageSparseMemoryRequirements vulkanSymbolWrapper_vkGetImageSparseMemoryRequirements;
#define vkGetImageSparseMemoryRequirements vulkanSymbolWrapper_vkGetImageSparseMemoryRequirements
extern PFN_vkGetPhysicalDeviceSparseImageFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceSparseImageFormatProperties;
#define vkGetPhysicalDeviceSparseImageFormatProperties vulkanSymbolWrapper_vkGetPhysicalDeviceSparseImageFormatProperties
extern PFN_vkQueueBindSparse vulkanSymbolWrapper_vkQueueBindSparse;
#define vkQueueBindSparse vulkanSymbolWrapper_vkQueueBindSparse
extern PFN_vkCreateFence vulkanSymbolWrapper_vkCreateFence;
#define vkCreateFence vulkanSymbolWrapper_vkCreateFence
extern PFN_vkDestroyFence vulkanSymbolWrapper_vkDestroyFence;
#define vkDestroyFence vulkanSymbolWrapper_vkDestroyFence
extern PFN_vkResetFences vulkanSymbolWrapper_vkResetFences;
#define vkResetFences vulkanSymbolWrapper_vkResetFences
extern PFN_vkGetFenceStatus vulkanSymbolWrapper_vkGetFenceStatus;
#define vkGetFenceStatus vulkanSymbolWrapper_vkGetFenceStatus
extern PFN_vkWaitForFences vulkanSymbolWrapper_vkWaitForFences;
#define vkWaitForFences vulkanSymbolWrapper_vkWaitForFences
extern PFN_vkCreateSemaphore vulkanSymbolWrapper_vkCreateSemaphore;
#define vkCreateSemaphore vulkanSymbolWrapper_vkCreateSemaphore
extern PFN_vkDestroySemaphore vulkanSymbolWrapper_vkDestroySemaphore;
#define vkDestroySemaphore vulkanSymbolWrapper_vkDestroySemaphore
extern PFN_vkCreateEvent vulkanSymbolWrapper_vkCreateEvent;
#define vkCreateEvent vulkanSymbolWrapper_vkCreateEvent
extern PFN_vkDestroyEvent vulkanSymbolWrapper_vkDestroyEvent;
#define vkDestroyEvent vulkanSymbolWrapper_vkDestroyEvent
extern PFN_vkGetEventStatus vulkanSymbolWrapper_vkGetEventStatus;
#define vkGetEventStatus vulkanSymbolWrapper_vkGetEventStatus
extern PFN_vkSetEvent vulkanSymbolWrapper_vkSetEvent;
#define vkSetEvent vulkanSymbolWrapper_vkSetEvent
extern PFN_vkResetEvent vulkanSymbolWrapper_vkResetEvent;
#define vkResetEvent vulkanSymbolWrapper_vkResetEvent
extern PFN_vkCreateQueryPool vulkanSymbolWrapper_vkCreateQueryPool;
#define vkCreateQueryPool vulkanSymbolWrapper_vkCreateQueryPool
extern PFN_vkDestroyQueryPool vulkanSymbolWrapper_vkDestroyQueryPool;
#define vkDestroyQueryPool vulkanSymbolWrapper_vkDestroyQueryPool
extern PFN_vkGetQueryPoolResults vulkanSymbolWrapper_vkGetQueryPoolResults;
#define vkGetQueryPoolResults vulkanSymbolWrapper_vkGetQueryPoolResults
extern PFN_vkCreateBuffer vulkanSymbolWrapper_vkCreateBuffer;
#define vkCreateBuffer vulkanSymbolWrapper_vkCreateBuffer
extern PFN_vkDestroyBuffer vulkanSymbolWrapper_vkDestroyBuffer;
#define vkDestroyBuffer vulkanSymbolWrapper_vkDestroyBuffer
extern PFN_vkCreateBufferView vulkanSymbolWrapper_vkCreateBufferView;
#define vkCreateBufferView vulkanSymbolWrapper_vkCreateBufferView
extern PFN_vkDestroyBufferView vulkanSymbolWrapper_vkDestroyBufferView;
#define vkDestroyBufferView vulkanSymbolWrapper_vkDestroyBufferView
extern PFN_vkCreateImage vulkanSymbolWrapper_vkCreateImage;
#define vkCreateImage vulkanSymbolWrapper_vkCreateImage
extern PFN_vkDestroyImage vulkanSymbolWrapper_vkDestroyImage;
#define vkDestroyImage vulkanSymbolWrapper_vkDestroyImage
extern PFN_vkGetImageSubresourceLayout vulkanSymbolWrapper_vkGetImageSubresourceLayout;
#define vkGetImageSubresourceLayout vulkanSymbolWrapper_vkGetImageSubresourceLayout
extern PFN_vkCreateImageView vulkanSymbolWrapper_vkCreateImageView;
#define vkCreateImageView vulkanSymbolWrapper_vkCreateImageView
extern PFN_vkDestroyImageView vulkanSymbolWrapper_vkDestroyImageView;
#define vkDestroyImageView vulkanSymbolWrapper_vkDestroyImageView
extern PFN_vkCreateShaderModule vulkanSymbolWrapper_vkCreateShaderModule;
#define vkCreateShaderModule vulkanSymbolWrapper_vkCreateShaderModule
extern PFN_vkDestroyShaderModule vulkanSymbolWrapper_vkDestroyShaderModule;
#define vkDestroyShaderModule vulkanSymbolWrapper_vkDestroyShaderModule
extern PFN_vkCreatePipelineCache vulkanSymbolWrapper_vkCreatePipelineCache;
#define vkCreatePipelineCache vulkanSymbolWrapper_vkCreatePipelineCache
extern PFN_vkDestroyPipelineCache vulkanSymbolWrapper_vkDestroyPipelineCache;
#define vkDestroyPipelineCache vulkanSymbolWrapper_vkDestroyPipelineCache
extern PFN_vkGetPipelineCacheData vulkanSymbolWrapper_vkGetPipelineCacheData;
#define vkGetPipelineCacheData vulkanSymbolWrapper_vkGetPipelineCacheData
extern PFN_vkMergePipelineCaches vulkanSymbolWrapper_vkMergePipelineCaches;
#define vkMergePipelineCaches vulkanSymbolWrapper_vkMergePipelineCaches
extern PFN_vkCreateGraphicsPipelines vulkanSymbolWrapper_vkCreateGraphicsPipelines;
#define vkCreateGraphicsPipelines vulkanSymbolWrapper_vkCreateGraphicsPipelines
extern PFN_vkCreateComputePipelines vulkanSymbolWrapper_vkCreateComputePipelines;
#define vkCreateComputePipelines vulkanSymbolWrapper_vkCreateComputePipelines
extern PFN_vkDestroyPipeline vulkanSymbolWrapper_vkDestroyPipeline;
#define vkDestroyPipeline vulkanSymbolWrapper_vkDestroyPipeline
extern PFN_vkCreatePipelineLayout vulkanSymbolWrapper_vkCreatePipelineLayout;
#define vkCreatePipelineLayout vulkanSymbolWrapper_vkCreatePipelineLayout
extern PFN_vkDestroyPipelineLayout vulkanSymbolWrapper_vkDestroyPipelineLayout;
#define vkDestroyPipelineLayout vulkanSymbolWrapper_vkDestroyPipelineLayout
extern PFN_vkCreateSampler vulkanSymbolWrapper_vkCreateSampler;
#define vkCreateSampler vulkanSymbolWrapper_vkCreateSampler
extern PFN_vkDestroySampler vulkanSymbolWrapper_vkDestroySampler;
#define vkDestroySampler vulkanSymbolWrapper_vkDestroySampler
extern PFN_vkCreateDescriptorSetLayout vulkanSymbolWrapper_vkCreateDescriptorSetLayout;
#define vkCreateDescriptorSetLayout vulkanSymbolWrapper_vkCreateDescriptorSetLayout
extern PFN_vkDestroyDescriptorSetLayout vulkanSymbolWrapper_vkDestroyDescriptorSetLayout;
#define vkDestroyDescriptorSetLayout vulkanSymbolWrapper_vkDestroyDescriptorSetLayout
extern PFN_vkCreateDescriptorPool vulkanSymbolWrapper_vkCreateDescriptorPool;
#define vkCreateDescriptorPool vulkanSymbolWrapper_vkCreateDescriptorPool
extern PFN_vkDestroyDescriptorPool vulkanSymbolWrapper_vkDestroyDescriptorPool;
#define vkDestroyDescriptorPool vulkanSymbolWrapper_vkDestroyDescriptorPool
extern PFN_vkResetDescriptorPool vulkanSymbolWrapper_vkResetDescriptorPool;
#define vkResetDescriptorPool vulkanSymbolWrapper_vkResetDescriptorPool
extern PFN_vkAllocateDescriptorSets vulkanSymbolWrapper_vkAllocateDescriptorSets;
#define vkAllocateDescriptorSets vulkanSymbolWrapper_vkAllocateDescriptorSets
extern PFN_vkFreeDescriptorSets vulkanSymbolWrapper_vkFreeDescriptorSets;
#define vkFreeDescriptorSets vulkanSymbolWrapper_vkFreeDescriptorSets
extern PFN_vkUpdateDescriptorSets vulkanSymbolWrapper_vkUpdateDescriptorSets;
#define vkUpdateDescriptorSets vulkanSymbolWrapper_vkUpdateDescriptorSets
extern PFN_vkCreateFramebuffer vulkanSymbolWrapper_vkCreateFramebuffer;
#define vkCreateFramebuffer vulkanSymbolWrapper_vkCreateFramebuffer
extern PFN_vkDestroyFramebuffer vulkanSymbolWrapper_vkDestroyFramebuffer;
#define vkDestroyFramebuffer vulkanSymbolWrapper_vkDestroyFramebuffer
extern PFN_vkCreateRenderPass vulkanSymbolWrapper_vkCreateRenderPass;
#define vkCreateRenderPass vulkanSymbolWrapper_vkCreateRenderPass
extern PFN_vkDestroyRenderPass vulkanSymbolWrapper_vkDestroyRenderPass;
#define vkDestroyRenderPass vulkanSymbolWrapper_vkDestroyRenderPass
extern PFN_vkGetRenderAreaGranularity vulkanSymbolWrapper_vkGetRenderAreaGranularity;
#define vkGetRenderAreaGranularity vulkanSymbolWrapper_vkGetRenderAreaGranularity
extern PFN_vkCreateCommandPool vulkanSymbolWrapper_vkCreateCommandPool;
#define vkCreateCommandPool vulkanSymbolWrapper_vkCreateCommandPool
extern PFN_vkDestroyCommandPool vulkanSymbolWrapper_vkDestroyCommandPool;
#define vkDestroyCommandPool vulkanSymbolWrapper_vkDestroyCommandPool
extern PFN_vkResetCommandPool vulkanSymbolWrapper_vkResetCommandPool;
#define vkResetCommandPool vulkanSymbolWrapper_vkResetCommandPool
extern PFN_vkAllocateCommandBuffers vulkanSymbolWrapper_vkAllocateCommandBuffers;
#define vkAllocateCommandBuffers vulkanSymbolWrapper_vkAllocateCommandBuffers
extern PFN_vkFreeCommandBuffers vulkanSymbolWrapper_vkFreeCommandBuffers;
#define vkFreeCommandBuffers vulkanSymbolWrapper_vkFreeCommandBuffers
extern PFN_vkBeginCommandBuffer vulkanSymbolWrapper_vkBeginCommandBuffer;
#define vkBeginCommandBuffer vulkanSymbolWrapper_vkBeginCommandBuffer
extern PFN_vkEndCommandBuffer vulkanSymbolWrapper_vkEndCommandBuffer;
#define vkEndCommandBuffer vulkanSymbolWrapper_vkEndCommandBuffer
extern PFN_vkResetCommandBuffer vulkanSymbolWrapper_vkResetCommandBuffer;
#define vkResetCommandBuffer vulkanSymbolWrapper_vkResetCommandBuffer
extern PFN_vkCmdBindPipeline vulkanSymbolWrapper_vkCmdBindPipeline;
#define vkCmdBindPipeline vulkanSymbolWrapper_vkCmdBindPipeline
extern PFN_vkCmdSetViewport vulkanSymbolWrapper_vkCmdSetViewport;
#define vkCmdSetViewport vulkanSymbolWrapper_vkCmdSetViewport
extern PFN_vkCmdSetScissor vulkanSymbolWrapper_vkCmdSetScissor;
#define vkCmdSetScissor vulkanSymbolWrapper_vkCmdSetScissor
extern PFN_vkCmdSetLineWidth vulkanSymbolWrapper_vkCmdSetLineWidth;
#define vkCmdSetLineWidth vulkanSymbolWrapper_vkCmdSetLineWidth
extern PFN_vkCmdSetDepthBias vulkanSymbolWrapper_vkCmdSetDepthBias;
#define vkCmdSetDepthBias vulkanSymbolWrapper_vkCmdSetDepthBias
extern PFN_vkCmdSetBlendConstants vulkanSymbolWrapper_vkCmdSetBlendConstants;
#define vkCmdSetBlendConstants vulkanSymbolWrapper_vkCmdSetBlendConstants
extern PFN_vkCmdSetDepthBounds vulkanSymbolWrapper_vkCmdSetDepthBounds;
#define vkCmdSetDepthBounds vulkanSymbolWrapper_vkCmdSetDepthBounds
extern PFN_vkCmdSetStencilCompareMask vulkanSymbolWrapper_vkCmdSetStencilCompareMask;
#define vkCmdSetStencilCompareMask vulkanSymbolWrapper_vkCmdSetStencilCompareMask
extern PFN_vkCmdSetStencilWriteMask vulkanSymbolWrapper_vkCmdSetStencilWriteMask;
#define vkCmdSetStencilWriteMask vulkanSymbolWrapper_vkCmdSetStencilWriteMask
extern PFN_vkCmdSetStencilReference vulkanSymbolWrapper_vkCmdSetStencilReference;
#define vkCmdSetStencilReference vulkanSymbolWrapper_vkCmdSetStencilReference
extern PFN_vkCmdBindDescriptorSets vulkanSymbolWrapper_vkCmdBindDescriptorSets;
#define vkCmdBindDescriptorSets vulkanSymbolWrapper_vkCmdBindDescriptorSets
extern PFN_vkCmdBindIndexBuffer vulkanSymbolWrapper_vkCmdBindIndexBuffer;
#define vkCmdBindIndexBuffer vulkanSymbolWrapper_vkCmdBindIndexBuffer
extern PFN_vkCmdBindVertexBuffers vulkanSymbolWrapper_vkCmdBindVertexBuffers;
#define vkCmdBindVertexBuffers vulkanSymbolWrapper_vkCmdBindVertexBuffers
extern PFN_vkCmdDraw vulkanSymbolWrapper_vkCmdDraw;
#define vkCmdDraw vulkanSymbolWrapper_vkCmdDraw
extern PFN_vkCmdDrawIndexed vulkanSymbolWrapper_vkCmdDrawIndexed;
#define vkCmdDrawIndexed vulkanSymbolWrapper_vkCmdDrawIndexed
extern PFN_vkCmdDrawIndirect vulkanSymbolWrapper_vkCmdDrawIndirect;
#define vkCmdDrawIndirect vulkanSymbolWrapper_vkCmdDrawIndirect
extern PFN_vkCmdDrawIndexedIndirect vulkanSymbolWrapper_vkCmdDrawIndexedIndirect;
#define vkCmdDrawIndexedIndirect vulkanSymbolWrapper_vkCmdDrawIndexedIndirect
extern PFN_vkCmdDispatch vulkanSymbolWrapper_vkCmdDispatch;
#define vkCmdDispatch vulkanSymbolWrapper_vkCmdDispatch
extern PFN_vkCmdDispatchIndirect vulkanSymbolWrapper_vkCmdDispatchIndirect;
#define vkCmdDispatchIndirect vulkanSymbolWrapper_vkCmdDispatchIndirect
extern PFN_vkCmdCopyBuffer vulkanSymbolWrapper_vkCmdCopyBuffer;
#define vkCmdCopyBuffer vulkanSymbolWrapper_vkCmdCopyBuffer
extern PFN_vkCmdCopyImage vulkanSymbolWrapper_vkCmdCopyImage;
#define vkCmdCopyImage vulkanSymbolWrapper_vkCmdCopyImage
extern PFN_vkCmdBlitImage vulkanSymbolWrapper_vkCmdBlitImage;
#define vkCmdBlitImage vulkanSymbolWrapper_vkCmdBlitImage
extern PFN_vkCmdCopyBufferToImage vulkanSymbolWrapper_vkCmdCopyBufferToImage;
#define vkCmdCopyBufferToImage vulkanSymbolWrapper_vkCmdCopyBufferToImage
extern PFN_vkCmdCopyImageToBuffer vulkanSymbolWrapper_vkCmdCopyImageToBuffer;
#define vkCmdCopyImageToBuffer vulkanSymbolWrapper_vkCmdCopyImageToBuffer
extern PFN_vkCmdUpdateBuffer vulkanSymbolWrapper_vkCmdUpdateBuffer;
#define vkCmdUpdateBuffer vulkanSymbolWrapper_vkCmdUpdateBuffer
extern PFN_vkCmdFillBuffer vulkanSymbolWrapper_vkCmdFillBuffer;
#define vkCmdFillBuffer vulkanSymbolWrapper_vkCmdFillBuffer
extern PFN_vkCmdClearColorImage vulkanSymbolWrapper_vkCmdClearColorImage;
#define vkCmdClearColorImage vulkanSymbolWrapper_vkCmdClearColorImage
extern PFN_vkCmdClearDepthStencilImage vulkanSymbolWrapper_vkCmdClearDepthStencilImage;
#define vkCmdClearDepthStencilImage vulkanSymbolWrapper_vkCmdClearDepthStencilImage
extern PFN_vkCmdClearAttachments vulkanSymbolWrapper_vkCmdClearAttachments;
#define vkCmdClearAttachments vulkanSymbolWrapper_vkCmdClearAttachments
extern PFN_vkCmdResolveImage vulkanSymbolWrapper_vkCmdResolveImage;
#define vkCmdResolveImage vulkanSymbolWrapper_vkCmdResolveImage
extern PFN_vkCmdSetEvent vulkanSymbolWrapper_vkCmdSetEvent;
#define vkCmdSetEvent vulkanSymbolWrapper_vkCmdSetEvent
extern PFN_vkCmdResetEvent vulkanSymbolWrapper_vkCmdResetEvent;
#define vkCmdResetEvent vulkanSymbolWrapper_vkCmdResetEvent
extern PFN_vkCmdWaitEvents vulkanSymbolWrapper_vkCmdWaitEvents;
#define vkCmdWaitEvents vulkanSymbolWrapper_vkCmdWaitEvents
extern PFN_vkCmdPipelineBarrier vulkanSymbolWrapper_vkCmdPipelineBarrier;
#define vkCmdPipelineBarrier vulkanSymbolWrapper_vkCmdPipelineBarrier
extern PFN_vkCmdBeginQuery vulkanSymbolWrapper_vkCmdBeginQuery;
#define vkCmdBeginQuery vulkanSymbolWrapper_vkCmdBeginQuery
extern PFN_vkCmdEndQuery vulkanSymbolWrapper_vkCmdEndQuery;
#define vkCmdEndQuery vulkanSymbolWrapper_vkCmdEndQuery
extern PFN_vkCmdResetQueryPool vulkanSymbolWrapper_vkCmdResetQueryPool;
#define vkCmdResetQueryPool vulkanSymbolWrapper_vkCmdResetQueryPool
extern PFN_vkCmdWriteTimestamp vulkanSymbolWrapper_vkCmdWriteTimestamp;
#define vkCmdWriteTimestamp vulkanSymbolWrapper_vkCmdWriteTimestamp
extern PFN_vkCmdCopyQueryPoolResults vulkanSymbolWrapper_vkCmdCopyQueryPoolResults;
#define vkCmdCopyQueryPoolResults vulkanSymbolWrapper_vkCmdCopyQueryPoolResults
extern PFN_vkCmdPushConstants vulkanSymbolWrapper_vkCmdPushConstants;
#define vkCmdPushConstants vulkanSymbolWrapper_vkCmdPushConstants
extern PFN_vkCmdBeginRenderPass vulkanSymbolWrapper_vkCmdBeginRenderPass;
#define vkCmdBeginRenderPass vulkanSymbolWrapper_vkCmdBeginRenderPass
extern PFN_vkCmdNextSubpass vulkanSymbolWrapper_vkCmdNextSubpass;
#define vkCmdNextSubpass vulkanSymbolWrapper_vkCmdNextSubpass
extern PFN_vkCmdEndRenderPass vulkanSymbolWrapper_vkCmdEndRenderPass;
#define vkCmdEndRenderPass vulkanSymbolWrapper_vkCmdEndRenderPass
extern PFN_vkCmdExecuteCommands vulkanSymbolWrapper_vkCmdExecuteCommands;
#define vkCmdExecuteCommands vulkanSymbolWrapper_vkCmdExecuteCommands
extern PFN_vkDestroySurfaceKHR vulkanSymbolWrapper_vkDestroySurfaceKHR;
#define vkDestroySurfaceKHR vulkanSymbolWrapper_vkDestroySurfaceKHR
extern PFN_vkGetPhysicalDeviceSurfaceSupportKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceSupportKHR;
#define vkGetPhysicalDeviceSurfaceSupportKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceSupportKHR
extern PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
#define vkGetPhysicalDeviceSurfaceCapabilitiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
extern PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceFormatsKHR;
#define vkGetPhysicalDeviceSurfaceFormatsKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfaceFormatsKHR
extern PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfacePresentModesKHR;
#define vkGetPhysicalDeviceSurfacePresentModesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceSurfacePresentModesKHR
extern PFN_vkCreateSwapchainKHR vulkanSymbolWrapper_vkCreateSwapchainKHR;
#define vkCreateSwapchainKHR vulkanSymbolWrapper_vkCreateSwapchainKHR
extern PFN_vkDestroySwapchainKHR vulkanSymbolWrapper_vkDestroySwapchainKHR;
#define vkDestroySwapchainKHR vulkanSymbolWrapper_vkDestroySwapchainKHR
extern PFN_vkGetSwapchainImagesKHR vulkanSymbolWrapper_vkGetSwapchainImagesKHR;
#define vkGetSwapchainImagesKHR vulkanSymbolWrapper_vkGetSwapchainImagesKHR
extern PFN_vkAcquireNextImageKHR vulkanSymbolWrapper_vkAcquireNextImageKHR;
#define vkAcquireNextImageKHR vulkanSymbolWrapper_vkAcquireNextImageKHR
extern PFN_vkQueuePresentKHR vulkanSymbolWrapper_vkQueuePresentKHR;
#define vkQueuePresentKHR vulkanSymbolWrapper_vkQueuePresentKHR
extern PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceDisplayPropertiesKHR;
#define vkGetPhysicalDeviceDisplayPropertiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceDisplayPropertiesKHR
extern PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
#define vkGetPhysicalDeviceDisplayPlanePropertiesKHR vulkanSymbolWrapper_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
extern PFN_vkGetDisplayPlaneSupportedDisplaysKHR vulkanSymbolWrapper_vkGetDisplayPlaneSupportedDisplaysKHR;
#define vkGetDisplayPlaneSupportedDisplaysKHR vulkanSymbolWrapper_vkGetDisplayPlaneSupportedDisplaysKHR
extern PFN_vkGetDisplayModePropertiesKHR vulkanSymbolWrapper_vkGetDisplayModePropertiesKHR;
#define vkGetDisplayModePropertiesKHR vulkanSymbolWrapper_vkGetDisplayModePropertiesKHR
extern PFN_vkCreateDisplayModeKHR vulkanSymbolWrapper_vkCreateDisplayModeKHR;
#define vkCreateDisplayModeKHR vulkanSymbolWrapper_vkCreateDisplayModeKHR
extern PFN_vkGetDisplayPlaneCapabilitiesKHR vulkanSymbolWrapper_vkGetDisplayPlaneCapabilitiesKHR;
#define vkGetDisplayPlaneCapabilitiesKHR vulkanSymbolWrapper_vkGetDisplayPlaneCapabilitiesKHR
extern PFN_vkCreateDisplayPlaneSurfaceKHR vulkanSymbolWrapper_vkCreateDisplayPlaneSurfaceKHR;
#define vkCreateDisplayPlaneSurfaceKHR vulkanSymbolWrapper_vkCreateDisplayPlaneSurfaceKHR
extern PFN_vkCreateSharedSwapchainsKHR vulkanSymbolWrapper_vkCreateSharedSwapchainsKHR;
#define vkCreateSharedSwapchainsKHR vulkanSymbolWrapper_vkCreateSharedSwapchainsKHR
extern PFN_vkCreateDebugReportCallbackEXT vulkanSymbolWrapper_vkCreateDebugReportCallbackEXT;
#define vkCreateDebugReportCallbackEXT vulkanSymbolWrapper_vkCreateDebugReportCallbackEXT
extern PFN_vkDestroyDebugReportCallbackEXT vulkanSymbolWrapper_vkDestroyDebugReportCallbackEXT;
#define vkDestroyDebugReportCallbackEXT vulkanSymbolWrapper_vkDestroyDebugReportCallbackEXT
extern PFN_vkDebugReportMessageEXT vulkanSymbolWrapper_vkDebugReportMessageEXT;
#define vkDebugReportMessageEXT vulkanSymbolWrapper_vkDebugReportMessageEXT
extern PFN_vkDebugMarkerSetObjectTagEXT vulkanSymbolWrapper_vkDebugMarkerSetObjectTagEXT;
#define vkDebugMarkerSetObjectTagEXT vulkanSymbolWrapper_vkDebugMarkerSetObjectTagEXT
extern PFN_vkDebugMarkerSetObjectNameEXT vulkanSymbolWrapper_vkDebugMarkerSetObjectNameEXT;
#define vkDebugMarkerSetObjectNameEXT vulkanSymbolWrapper_vkDebugMarkerSetObjectNameEXT
extern PFN_vkCmdDebugMarkerBeginEXT vulkanSymbolWrapper_vkCmdDebugMarkerBeginEXT;
#define vkCmdDebugMarkerBeginEXT vulkanSymbolWrapper_vkCmdDebugMarkerBeginEXT
extern PFN_vkCmdDebugMarkerEndEXT vulkanSymbolWrapper_vkCmdDebugMarkerEndEXT;
#define vkCmdDebugMarkerEndEXT vulkanSymbolWrapper_vkCmdDebugMarkerEndEXT
extern PFN_vkCmdDebugMarkerInsertEXT vulkanSymbolWrapper_vkCmdDebugMarkerInsertEXT;
#define vkCmdDebugMarkerInsertEXT vulkanSymbolWrapper_vkCmdDebugMarkerInsertEXT
extern PFN_vkCmdDrawIndirectCountAMD vulkanSymbolWrapper_vkCmdDrawIndirectCountAMD;
#define vkCmdDrawIndirectCountAMD vulkanSymbolWrapper_vkCmdDrawIndirectCountAMD
extern PFN_vkCmdDrawIndexedIndirectCountAMD vulkanSymbolWrapper_vkCmdDrawIndexedIndirectCountAMD;
#define vkCmdDrawIndexedIndirectCountAMD vulkanSymbolWrapper_vkCmdDrawIndexedIndirectCountAMD
extern PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vulkanSymbolWrapper_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
#define vkGetPhysicalDeviceExternalImageFormatPropertiesNV vulkanSymbolWrapper_vkGetPhysicalDeviceExternalImageFormatPropertiesNV

VkBool32 vulkanSymbolWrapperInitLoader(void);
void vulkanSymbolWrapperInit(PFN_vkGetInstanceProcAddr getInstanceProcAddr);
PFN_vkGetInstanceProcAddr vulkanSymbolWrapperInstanceProcAddr(void);
void vulkanSymbolWrapperReset(void);
VkBool32 vulkanSymbolWrapperLoadGlobalSymbols(void);
VkBool32 vulkanSymbolWrapperLoadCoreInstanceSymbols(VkInstance instance);
VkBool32 vulkanSymbolWrapperLoadCoreSymbols(VkInstance instance);
VkBool32 vulkanSymbolWrapperLoadCoreDeviceSymbols(VkDevice device);
VkBool32 vulkanSymbolWrapperLoadInstanceSymbol(VkInstance instance, const char *name, PFN_vkVoidFunction *ppSymbol);
VkBool32 vulkanSymbolWrapperLoadDeviceSymbol(VkDevice device, const char *name, PFN_vkVoidFunction *ppSymbol);

#define VULKAN_SYMBOL_WRAPPER_LOAD_INSTANCE_SYMBOL(instance, name, pfn) vulkanSymbolWrapperLoadInstanceSymbol(instance, name, (PFN_vkVoidFunction*) &(pfn))
#define VULKAN_SYMBOL_WRAPPER_LOAD_INSTANCE_EXTENSION_SYMBOL(instance, name) vulkanSymbolWrapperLoadInstanceSymbol(instance, #name, (PFN_vkVoidFunction*) & name)
#define VULKAN_SYMBOL_WRAPPER_LOAD_DEVICE_SYMBOL(device, name, pfn) vulkanSymbolWrapperLoadDeviceSymbol(device, name, (PFN_vkVoidFunction*) &(pfn))
#define VULKAN_SYMBOL_WRAPPER_LOAD_DEVICE_EXTENSION_SYMBOL(device, name) vulkanSymbolWrapperLoadDeviceSymbol(device, #name, (PFN_vkVoidFunction*) & name)


#ifdef __cplusplus
}
#endif
#endif
