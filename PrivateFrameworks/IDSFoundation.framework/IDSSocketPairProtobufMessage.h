/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSString;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage  {
    unsigned long long _offset;
    unsigned short _isResponse;
    unsigned short _type;
    NSData *_data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    bool_expectsPeerResponse;
    bool_wantsAppAck;
    bool_compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property(readonly) unsigned short isResponse;
@property(readonly) unsigned short type;
@property(readonly) NSData * data;
@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(readonly) bool expectsPeerResponse;
@property(readonly) bool wantsAppAck;
@property bool compressed;
@property(retain,readonly) NSString * peerResponseIdentifier;
@property(retain,readonly) NSString * messageUUID;


- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(bool)arg3 wantsAppAck:(bool)arg4 compressed:(bool)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 protobuf:(id)arg8;
- (id)peerResponseIdentifier;
- (id)messageUUID;
- (void)setCompressed:(bool)arg1;
- (bool)compressed;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (bool)expectsPeerResponse;
- (bool)wantsAppAck;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned short)isResponse;
- (unsigned short)streamID;
- (id)data;
- (unsigned short)type;
- (void)dealloc;
- (unsigned char)command;
- (unsigned int)sequenceNumber;

@end