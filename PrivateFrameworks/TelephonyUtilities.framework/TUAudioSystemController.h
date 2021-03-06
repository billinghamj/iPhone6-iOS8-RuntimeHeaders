/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_queue>, NSNumber, NSArray;

@interface TUAudioSystemController : TUAudioController  {
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    bool_isRequestingUplinkMuted;
    bool_isRequestingDownlinkMuted;
    bool_isRequestingTTY;
    bool_isRequestingPickableRoutesForTTY;
    bool_isRequestingPickableRoutesForPhoneCall;
    bool_isRequestingPickableRoutesForPlayAndRecordVideo;
    bool_isRequestingPickableRoutesForPlayAndRecordVoice;
    bool_isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
}

+ (id)sharedSystemController;
+ (id)sharedAudioSystemController;

- (id)pickableRoutesForFaceTimeVideoCategory;
- (id)pickableRoutesForFaceTimeAudioCategory;
- (id)pickableRoutesForPhoneCallCategory;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(bool)arg1;
- (id)pickableRoutesForTTY;
- (void)_handleCallStatusChanged;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (bool)isTTY;
- (bool)setDownlinkMuted:(bool)arg1;
- (bool)isDownlinkMuted;
- (bool)setUplinkMuted:(bool)arg1;
- (bool)isUplinkMuted;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;

@end
