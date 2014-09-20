/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _audioVolumeLevelDurationSpeakers;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _audioVolumeLevelDurations;
    unsigned long long _timestamp;
    unsigned int _audioHeadsetDuration;
    unsigned int _audioHeadsetPowerMicroWatt;
    unsigned int _audioSpeakerDuration;
    unsigned int _audioSpeakerPowerMicroWatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioHeadsetDuration : 1; 
        unsigned int audioHeadsetPowerMicroWatt : 1; 
        unsigned int audioSpeakerDuration : 1; 
        unsigned int audioSpeakerPowerMicroWatt : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasAudioSpeakerPowerMicroWatt;
@property unsigned int audioSpeakerPowerMicroWatt;
@property bool hasAudioHeadsetPowerMicroWatt;
@property unsigned int audioHeadsetPowerMicroWatt;
@property bool hasAudioSpeakerDuration;
@property unsigned int audioSpeakerDuration;
@property bool hasAudioHeadsetDuration;
@property unsigned int audioHeadsetDuration;
@property(readonly) unsigned long long audioVolumeLevelDurationsCount;
@property(readonly) unsigned int* audioVolumeLevelDurations;
@property(readonly) unsigned long long audioVolumeLevelDurationSpeakersCount;
@property(readonly) unsigned int* audioVolumeLevelDurationSpeakers;


- (unsigned int)audioHeadsetDuration;
- (unsigned int)audioSpeakerDuration;
- (unsigned int)audioHeadsetPowerMicroWatt;
- (unsigned int)audioSpeakerPowerMicroWatt;
- (void)setAudioVolumeLevelDurationSpeakers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)audioVolumeLevelDurationSpeakers;
- (unsigned int*)audioVolumeLevelDurations;
- (bool)hasAudioHeadsetDuration;
- (void)setHasAudioHeadsetDuration:(bool)arg1;
- (bool)hasAudioSpeakerDuration;
- (void)setHasAudioSpeakerDuration:(bool)arg1;
- (bool)hasAudioHeadsetPowerMicroWatt;
- (void)setHasAudioHeadsetPowerMicroWatt:(bool)arg1;
- (bool)hasAudioSpeakerPowerMicroWatt;
- (void)setHasAudioSpeakerPowerMicroWatt:(bool)arg1;
- (void)addAudioVolumeLevelDurationSpeaker:(unsigned int)arg1;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (unsigned long long)audioVolumeLevelDurationSpeakersCount;
- (void)addAudioVolumeLevelDuration:(unsigned int)arg1;
- (unsigned int)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1;
- (void)clearAudioVolumeLevelDurations;
- (unsigned long long)audioVolumeLevelDurationsCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setAudioVolumeLevelDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioSpeakerPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioSpeakerDuration:(unsigned int)arg1;
- (void)setAudioHeadsetPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioHeadsetDuration:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end