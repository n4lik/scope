/*
* Copyright 2016  Samsung Electronics Co., Ltd
*
* Licensed under the Flora License, Version 1.1 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://floralicense.org/license/
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __LOG_H__
#define __LOG_H__

#include <dlog.h>
#include <app_i18n.h>

/**
 * @addtogroup Utils
 * @{
 */

#ifdef LOG_TAG
	#undef LOG_TAG
#endif

#define LOG_TAG "SCOPE"

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#if !defined(DBG)
#define DBG(fmt, arg...) dlog_print(DLOG_DEBUG, LOG_TAG, "%s: %s[%d]\t " #fmt "\n", __FILENAME__, __func__, __LINE__, ##arg)
#endif

#if !defined(WRN)
#define WRN(fmt, arg...) dlog_print(DLOG_WARN, LOG_TAG, "%s: %s[%d]\t " #fmt "\n", __FILENAME__, __func__, __LINE__, ##arg)
#endif

#if !defined(ERR)
#define ERR(fmt, arg...) dlog_print(DLOG_ERROR, LOG_TAG, "%s: %s[%d]\t " #fmt "\n", __FILENAME__, __func__, __LINE__, ##arg)
#endif

#if !defined(INF)
#define INF(fmt, arg...) dlog_print(DLOG_INFO, LOG_TAG, "%s: %s[%d]\t " #fmt "\n", __FILENAME__, __func__, __LINE__, ##arg)
#endif

#if !defined(FATAL)
#define FAT(fmt, arg...) dlog_print(DLOG_FATAL, LOG_TAG, "%s: %s[%d]\t " #fmt "\n", __FILENAME__, __func__, __LINE__, ##arg);
#endif

/**
 * @}
 */

#endif
