/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryErrorReport : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int domain : 1; 
        unsigned int error : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasDomain;
@property unsigned int domain;
@property bool hasError;
@property unsigned int error;


- (bool)hasDomain;
- (void)setHasDomain:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (unsigned int)error;
- (void)setDomain:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasError;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)domain;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end