/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCSECRSAuthInit : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _status;
    NSData *_uuidReference;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int status : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasStatus;
@property unsigned int status;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;


- (unsigned long long)timeDeltaFromReference;
- (id)uuidReference;
- (bool)hasTimeDeltaFromReference;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (bool)hasUuidReference;
- (void)setUuidReference:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasStatus;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
