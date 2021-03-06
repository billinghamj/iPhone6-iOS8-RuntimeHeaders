/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _fzError;
    NSString *_guid;
    unsigned int _hasAttachments;
    unsigned int _isGroupMessage;
    unsigned int _isToEmail;
    unsigned int _isToPhoneNumber;
    unsigned int _isTypingIndicator;
    unsigned int _messageError;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int isTypingIndicator : 1; 
        unsigned int messageError : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasFzError;
@property int fzError;
@property bool hasMessageError;
@property unsigned int messageError;
@property bool hasIsTypingIndicator;
@property unsigned int isTypingIndicator;
@property bool hasIsGroupMessage;
@property unsigned int isGroupMessage;
@property bool hasIsToPhoneNumber;
@property unsigned int isToPhoneNumber;
@property bool hasIsToEmail;
@property unsigned int isToEmail;
@property bool hasHasAttachments;
@property unsigned int hasAttachments;
@property bool hasSendDuration;
@property unsigned int sendDuration;


- (unsigned int)isTypingIndicator;
- (bool)hasIsTypingIndicator;
- (void)setHasIsTypingIndicator:(bool)arg1;
- (void)setIsTypingIndicator:(unsigned int)arg1;
- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (unsigned int)isGroupMessage;
- (bool)hasHasAttachments;
- (void)setHasHasAttachments:(bool)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (bool)hasIsToEmail;
- (void)setHasIsToEmail:(bool)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (bool)hasIsToPhoneNumber;
- (void)setHasIsToPhoneNumber:(bool)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (bool)hasIsGroupMessage;
- (void)setHasIsGroupMessage:(bool)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (unsigned int)messageError;
- (int)fzError;
- (bool)hasMessageError;
- (void)setHasMessageError:(bool)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (bool)hasFzError;
- (void)setHasFzError:(bool)arg1;
- (void)setFzError:(int)arg1;
- (unsigned int)sendDuration;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)setGuid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)hasAttachments;

@end
