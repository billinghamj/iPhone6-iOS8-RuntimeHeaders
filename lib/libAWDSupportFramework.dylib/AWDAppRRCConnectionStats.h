/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAppRRCConnectionStats : PBCodable <NSCopying> {
    unsigned int _bundleBGDuration;
    unsigned int _bundleFGDuration;
    NSString *_bundleName;
    unsigned int _numMOConnectionTriggered;
    unsigned int _numMTConnectionTriggered;
    int _rAT;
    unsigned int _totalBytesTransferred;
    struct { 
        unsigned int bundleBGDuration : 1; 
        unsigned int bundleFGDuration : 1; 
        unsigned int numMOConnectionTriggered : 1; 
        unsigned int numMTConnectionTriggered : 1; 
        unsigned int rAT : 1; 
        unsigned int totalBytesTransferred : 1; 
    } _has;
}

@property bool hasRAT;
@property int rAT;
@property(readonly) bool hasBundleName;
@property(retain) NSString * bundleName;
@property bool hasBundleFGDuration;
@property unsigned int bundleFGDuration;
@property bool hasBundleBGDuration;
@property unsigned int bundleBGDuration;
@property bool hasNumMOConnectionTriggered;
@property unsigned int numMOConnectionTriggered;
@property bool hasNumMTConnectionTriggered;
@property unsigned int numMTConnectionTriggered;
@property bool hasTotalBytesTransferred;
@property unsigned int totalBytesTransferred;


- (unsigned int)totalBytesTransferred;
- (unsigned int)numMTConnectionTriggered;
- (unsigned int)numMOConnectionTriggered;
- (unsigned int)bundleBGDuration;
- (unsigned int)bundleFGDuration;
- (int)rAT;
- (bool)hasTotalBytesTransferred;
- (void)setHasTotalBytesTransferred:(bool)arg1;
- (void)setTotalBytesTransferred:(unsigned int)arg1;
- (bool)hasNumMTConnectionTriggered;
- (void)setHasNumMTConnectionTriggered:(bool)arg1;
- (void)setNumMTConnectionTriggered:(unsigned int)arg1;
- (bool)hasNumMOConnectionTriggered;
- (void)setHasNumMOConnectionTriggered:(bool)arg1;
- (void)setNumMOConnectionTriggered:(unsigned int)arg1;
- (bool)hasBundleBGDuration;
- (void)setHasBundleBGDuration:(bool)arg1;
- (void)setBundleBGDuration:(unsigned int)arg1;
- (bool)hasBundleFGDuration;
- (void)setHasBundleFGDuration:(bool)arg1;
- (void)setBundleFGDuration:(unsigned int)arg1;
- (bool)hasBundleName;
- (bool)hasRAT;
- (void)setHasRAT:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)bundleName;
- (void)setRAT:(int)arg1;
- (void)setBundleName:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
