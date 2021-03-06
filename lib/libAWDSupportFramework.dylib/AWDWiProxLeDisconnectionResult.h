/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeDisconnectionResult : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_peerId;
    unsigned int _result;
    NSString *_resultString;
    NSString *_sessionId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSessionId;
@property(retain) NSString * sessionId;
@property(readonly) bool hasPeerId;
@property(retain) NSString * peerId;
@property(readonly) bool hasResultString;
@property(retain) NSString * resultString;
@property bool hasResult;
@property unsigned int result;


- (id)resultString;
- (id)peerId;
- (void)setHasResult:(bool)arg1;
- (bool)hasResultString;
- (bool)hasPeerId;
- (void)setResultString:(id)arg1;
- (void)setPeerId:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (bool)hasSessionId;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (bool)hasTimestamp;
- (bool)hasResult;
- (unsigned int)result;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
