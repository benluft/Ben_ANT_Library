/*
This software is subject to the license described in the License.txt file
included with this software distribution. You may not use this file except
in compliance with this license.

Copyright (c) Dynastream Innovations Inc. 2016
All rights reserved.
*/
#ifndef TEST_H
#define TEST_H

#include "types.h"

#define CHANNEL_TYPE_MASTER   (0)
#define CHANNEL_TYPE_SLAVE    (1)
#define CHANNEL_TYPE_INVALID  (2)

void Test_Start();
void Test_Init(UCHAR ucDeviceNumber_, UCHAR ucChannelType_);

//MIDI Function Definitions//
int DeltaTimeLength(int TimeDecimal);
void ConvertIntToChar(int val, UCHAR* bytes);
void WriteToMIDIFileFirst(int iTrackLength);
int CreateMIDINoteArray(int iDeltaTime, int iNotePlayed, int iPreviousSize, UCHAR* NoteArray);
void WriteToMIDIFileSecond(UCHAR* aucNoteArray, int iLengthOfNotes);

/* MIDI Definitions */

#define BUTTON0INSTRUMENT             UCHAR (0x23)      //Bass Drum 
#define BUTTON1INSTRUMENT             UCHAR (0x2A)      //Closed Hi Hat
#define BUTTON2INSTRUMENT             UCHAR  (0x30)      //Hi Mid Tom
#define BUTTON3INSTRUMENT             UCHAR  (0x26)      //Acostic Snare

#define DRUMVOLUME					  UCHAR (0x7F)

#define NOTEOFFVOLUME                 UCHAR (0x00)

/* MIDI status bytes*/
/* Note that channel 10 (index 9) is the channel for MIDI general drums*/

#define DRUMCHANNELOFF              UCHAR (0x89)

#define DRUMCHANNELON               UCHAR (0x99)


#endif //TEST_H
