/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2016 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __WESTEROS_GL_AVSYNC_H__
#define __WESTEROS_GL_AVSYNC_H__

#define WESTEROS_GL_AVSYNC

static void wstAVSyncInit( VideoFrameManager *vfm, int sessionId );
static void wstAVSyncTerm( VideoFrameManager *vfm );
static void wstAVSyncSetSyncType( VideoFrameManager *vfm, int type );
static void wstAVSyncPush( VideoFrameManager *vfm, VideoFrame *f );
static VideoFrame *wstAVSyncPop( VideoFrameManager *vfm );
static void wstAVSyncPause( VideoFrameManager *vfm, bool pause );

#endif
