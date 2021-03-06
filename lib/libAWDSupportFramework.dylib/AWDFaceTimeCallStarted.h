/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _isCallUpgrade;
    unsigned int _isToEmail;
    unsigned int _isToPhoneNumber;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isCallUpgrade : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasIsToPhoneNumber;
@property unsigned int isToPhoneNumber;
@property bool hasIsToEmail;
@property unsigned int isToEmail;
@property bool hasIsCallUpgrade;
@property unsigned int isCallUpgrade;
@property bool hasIsVideo;
@property unsigned int isVideo;
@property bool hasOnLockScreen;
@property unsigned int onLockScreen;


- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (bool)hasIsToEmail;
- (void)setHasIsToEmail:(bool)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (bool)hasIsToPhoneNumber;
- (void)setHasIsToPhoneNumber:(bool)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (unsigned int)isCallUpgrade;
- (bool)hasIsCallUpgrade;
- (void)setHasIsCallUpgrade:(bool)arg1;
- (void)setIsCallUpgrade:(unsigned int)arg1;
- (unsigned int)onLockScreen;
- (bool)hasOnLockScreen;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (bool)hasIsVideo;
- (void)setHasIsVideo:(bool)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)setGuid:(id)arg1;
- (unsigned int)isVideo;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
