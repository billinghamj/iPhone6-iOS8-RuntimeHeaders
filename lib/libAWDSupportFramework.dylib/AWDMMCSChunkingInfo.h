/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString, NSMutableArray;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {
    long long _byteCount;
    long long _chunkCount;
    long long _duration;
    long long _startTime;
    NSMutableArray *_chunkingErrors;
    int _errorCode;
    NSString *_errorDomain;
    bool_cancelled;
    struct { 
        unsigned int byteCount : 1; 
        unsigned int chunkCount : 1; 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int errorCode : 1; 
        unsigned int cancelled : 1; 
    } _has;
}

@property bool hasChunkCount;
@property long long chunkCount;
@property bool hasByteCount;
@property long long byteCount;
@property bool hasStartTime;
@property long long startTime;
@property bool hasDuration;
@property long long duration;
@property(readonly) bool hasErrorDomain;
@property(retain) NSString * errorDomain;
@property bool hasErrorCode;
@property int errorCode;
@property bool hasCancelled;
@property bool cancelled;
@property(retain) NSMutableArray * chunkingErrors;


- (id)chunkingErrors;
- (long long)byteCount;
- (bool)hasCancelled;
- (void)setHasCancelled:(bool)arg1;
- (bool)hasByteCount;
- (void)setHasByteCount:(bool)arg1;
- (void)setByteCount:(long long)arg1;
- (bool)hasChunkCount;
- (void)setHasChunkCount:(bool)arg1;
- (id)chunkingErrorAtIndex:(unsigned long long)arg1;
- (void)clearChunkingErrors;
- (unsigned long long)chunkingErrorsCount;
- (void)addChunkingError:(id)arg1;
- (void)setChunkingErrors:(id)arg1;
- (bool)hasStartTime;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasDuration;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (void)setErrorCode:(int)arg1;
- (bool)hasErrorDomain;
- (void)setErrorDomain:(id)arg1;
- (int)errorCode;
- (long long)chunkCount;
- (void)setChunkCount:(long long)arg1;
- (long long)startTime;
- (id)dictionaryRepresentation;
- (void)setCancelled:(bool)arg1;
- (bool)cancelled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (long long)duration;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)errorDomain;

@end