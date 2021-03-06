/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TUProxyCall : TUCall <NSSecureCoding> {
    bool_conferenced;
    bool_outgoing;
    bool_voicemail;
    int _status;
    int _callIdentifier;
    int _service;
    double _startTime;
    NSString *_destinationID;
    NSString *_conferenceIdentifier;
    NSString *_callerNameFromNetwork;
}

@property(copy) NSString * destinationID;
@property int callIdentifier;
@property(copy) NSString * displayName;
@property int status;
@property double startTime;
@property(getter=isConferenced) bool conferenced;
@property int service;
@property(getter=isOutgoing) bool outgoing;
@property(retain) NSString * conferenceIdentifier;
@property(getter=isVoicemail) bool voicemail;
@property(copy) NSString * callerNameFromNetwork;

+ (bool)supportsSecureCoding;

- (double)callDuration;
- (void)setVoicemail:(bool)arg1;
- (void)setConferenced:(bool)arg1;
- (bool)supportsRelayingAudioOrVideo;
- (bool)supportsRelayingCallState;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)unhold;
- (void)hold;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(bool)arg5 conferenceIdentifier:(id)arg6 voicemail:(bool)arg7 callerNameFromNetwork:(id)arg8;
- (void)updateWithCall:(id)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setConferenceIdentifier:(id)arg1;
- (void)setCallIdentifier:(int)arg1;
- (void)setDestinationID:(id)arg1;
- (bool)isVoicemail;
- (bool)isHostedOnCurrentDevice;
- (id)remoteFrequency;
- (id)conferenceIdentifier;
- (id)localFrequency;
- (bool)managesAudioInterruptions;
- (id)callUUID;
- (int)callIdentifier;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (void)leaveConference;
- (void)joinConference;
- (bool)isConferenced;
- (bool)setDownlinkMuted:(bool)arg1;
- (bool)isDownlinkMuted;
- (bool)setUplinkMuted:(bool)arg1;
- (bool)isUplinkMuted;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioMode;
- (int)supportedModelType;
- (void)setService:(int)arg1;
- (int)service;
- (bool)isOutgoing;
- (void)setOutgoing:(bool)arg1;
- (id)audioCategory;
- (void)setStatus:(int)arg1;
- (int)status;
- (double)startTime;
- (void)disconnect;
- (void)setStartTime:(double)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
