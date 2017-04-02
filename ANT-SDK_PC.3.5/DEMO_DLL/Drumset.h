/* MIDI Definitions */

#define BUTTON0INSTRUMENT               (u8)0x23      //Bass Drum 
#define BUTTON1INSTRUMENT               (u8)0x2A      //Closed Hi Hat
#define BUTTON2INSTRUMENT               (u8)0x31      //Crash Cymbol
#define BUTTON3INSTRUMENT               (u8)0x26      //Acostic Snare

#define BUTTON0CHANNELVOLUME            (u8)0x3C
#define BUTTON1CHANNELVOlUME            (u8)0x3C
#define BUTTON2CHANNELVOLUME            (u8)0x3C
#define BUTTON3CHANNELVOLUME            (u8)0x3C

#define NOTEOFFVOLUME                   (u8)0x00

/* MIDI status bytes*/
/* Note that channel 10 (index 9) is the channel for MIDI general drums*/

#define BUTTON0CHANNELOFF               (u8)0x89
#define BUTTON1CHANNELOFF               (u8)0x89
#define BUTTON2CHANNELOFF               (u8)0x89
#define BUTTON3CHANNELOFF               (u8)0x89

#define BUTTON0CHANNELON                (u8)0x99
#define BUTTON1CHANNELON                (u8)0x99
#define BUTTON2CHANNELON                (u8)0x99
#define BUTTON3CHANNELON                (u8)0x99


